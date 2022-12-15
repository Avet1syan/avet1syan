#include <stdio.h>
#include <string.h>

char tracks[][80] = {
        "Tigers eye",
        "Antoskka",
        "Peremen",
        "Kukushka"
    };

void find_track(char search_for[]) {
    for (int i=0; i < 5; i++) {
        if (strstr (tracks[i], search_for )){
        printf("pesnya nomer %i: '%s'\n", i, tracks[i]);
        }
    }
}

int main() {
    char search_for[80];
    printf("ISKAT: ");
    fgets(search_for, 80, stdin);
    search_for[strlen(search_for)-1]='\0';
    find_track(search_for);
    return 0;
}