#include <stdio.h>
#include <ctype.h>

int main(void) {
    int wc;
    long ligne = 0;
    long mots = 0; 
    long octets = 0;
    int dans_un_mot = 0;
    

    while ((wc = getchar()) != EOF) {
        octets++;

        if (wc == '\n') {
            ligne++;
        }

        if (isspace(wc)) {
            dans_un_mot = 0;
        } else if (dans_un_mot == 0) {
            dans_un_mot = 1;
            mots++;
        }
    }

    printf("%ld\n", ligne);
    printf("%ld\n" , mots);
    printf("%ld\n" , octets);

    return 0;
}