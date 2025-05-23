#include <stdio.h>
#include <string.h>
#include <windows.h>
int main() {
    char msg[10], exit[10];
    SetConsoleOutputCP(CP_UTF8);

    printf("ts pmo\n");

    scanf("%s", &msg);
    if(strcmp(msg, "yo") == 0) {
        printf("gurt\n");
    } else if(strcmp(msg, "gurt") == 0) {
        printf("yo\n");
    } else {
        printf("gurt: sybau🥀🥀💔💔\n");
    }
    scanf("%s", &exit);
    return 0;
}