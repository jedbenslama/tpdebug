#include <stdio.h>

int main() {
    char nom[4];
    printf("Nom ? ");
    fgets(nom, 4, stdin);
    printf("Bonjour %s\n", nom);
    return 0;
}
