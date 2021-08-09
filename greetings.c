#include <stdio.h>
#include <string.h>
#include "greetings.h"
void get_greeting(char * buffer) {

    if(buffer == NULL) {
        return;
    }

    char greeting[] = "Hello world from the greetings lib\n";
    strcpy(buffer, greeting);
    return;
}
