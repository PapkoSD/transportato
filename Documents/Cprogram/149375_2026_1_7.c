#include <stdio.h>
int main(){
    int cislo_e;
    scanf("%d", &cislo_e);
    printf("Cena bez dane: %d\n", cislo_e*1);
    printf("Predajna cena s 20%% danou: %.1f\n", cislo_e*1.2);
    return 0;
}
