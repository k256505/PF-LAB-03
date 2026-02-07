#include<stdio.h>
int main(){
    double dnum;
    printf("Enter a number: ");
    scanf("%lf", &dnum);
    printf("Default Precision: %lf\n2 Decimal Precision: %.2lf\n5 Decimal Precision: %.5lf\n", dnum, dnum, dnum);
    return 0;
}