#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Soobshenie glasit: %s\n", msg);
    printf("dlina soobsheniya: %lu\n", sizeof(msg));
}

int main() {
    char quotes[] = "pechen'e vas polnit!";
    fortune_cookie(quotes);
    return 0;
}