/* street-addresses v0.1.0 */

#include <ctype.h>
#include <stdio.h>

char* postfixes[] = {
    "",
    "Avenue", "Ave",
    "Boulevard", "Blvd",
    "Court", "Ct",
    "Drive", "Dr",
    "Lane", "Ln",
    "Place", "Pl",
    "Road", "Rd",
    "Street", "Str", "St",
    "Terrace", "Ter",
    "Way",
};

char*
strtolower(char* s)
{
    for (char* p=s; *p; p++) *p=tolower(*p);
    return s;
}

void
main(int argc, char** argv)
{
    for (int i = 1; i < argc; i++) {
        for (int num = 1; num < 5000; num++) {
            for (int p = 0; p < sizeof(postfixes) / sizeof(postfixes[0]); p++) {
                // TODO: add ZIP-code?
                printf("%d%s%s\n", num, argv[i], postfixes[p]);
            }
        }
    }
}
