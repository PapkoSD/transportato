#include <stdio.h> 
int main(){
    int cislo_d;
    scanf("%d", &cislo_d);
    printf("Obvod kruhu s polomerom %d je: %.2f\n", cislo_d, 2 * 3.14 * cislo_d);
    return 0;
}