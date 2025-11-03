#include <stdio.h>

int main() {
    int distance_km = 100;
    int vitesse_kmh = 50;
    float temps = (float)distance_km / (float)vitesse_kmh; 
    float minutes = temps * 60.0;
    printf("minutes = %d\n", (int)minutes); 
    return 0;
}
