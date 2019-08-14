#include <std.h>
#include <html_converter.h>
#define HTML_OUT "/d/save/wholist.html"
#define GEOMYIDAE_OUT "/d/save/wholist.gph"
inherit DAEMON;

int clean_up()
{
    return 1;
}

void write_who()
{
    string html, gph;
    object *people, *wizes, *players;
    string *peepnames=({});
    string peep;
    html="<!DOCTYPE html>
<html>
<head>
<link href=\"wholist.css\" rel=\"stylesheet\" type=\"text/css\">
</head>
<body>
";
    gph="[1|Back to the root|/|server|port]

Online:

";

    people = users();
    wizes = filter_array(filter_array(people,
                                      (:wizardp($1):)),
                         (:!$1->query_quietness():));
    players = filter_array(people,
                           (:!wizardp($1):));
    peepnames+=map_array(wizes->query_title(),
                         (:"Staff: "+$1:));
    peepnames+=players->getWholeDescriptivePhrase();

    foreach(peep in peepnames)
    {
        if(peep=="0")
            continue;
        html+=CONVERTER->convertFromInput(peep)+"<br /><font color=\"#FFFFFF\">\n";
        gph+="  "+strip_colors(peep)+"\n";
    }
    html+="<br/><br/>
</body>
</html>";

    write_file(HTML_OUT,html,1);
    write_file(GEOMYIDAE_OUT,gph,1);
    call_out("write_who",90);
}

void create(){
    seteuid(getuid());
    write_who();
}
