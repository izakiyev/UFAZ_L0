#include<stdio.h>
#include<math.h>
int main(){
    float a,x,y,z;
    int i=0;
    printf("Initial capital:");
    scanf("%f",&x);
    printf("Interest rate:");
    scanf("%f",&y);
    printf("Investment period:");
    scanf("%f",&z);
    while (i<z){
        i++;
        a=x*pow((1+(y/100)),i);//compound interest increase formula
        printf("%d) Year capital=%.3f | Aquired capital=%.3f\n",i,a,a-x);
    }
    z=1/log2(1+(y/100));//calculates how many years later the amount will double
    printf("After %f years,the capital will double\n",z);
return 0;
}
