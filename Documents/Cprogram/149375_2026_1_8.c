#include <stdio.h>
int main(){
    double cislo_f, cislo_g, cislo_h;
    scanf("%lf %lf %lf", &cislo_f, &cislo_g, &cislo_h);
    printf("Objem: %.3f\n", cislo_f * cislo_g * cislo_h);
    return 0;
}