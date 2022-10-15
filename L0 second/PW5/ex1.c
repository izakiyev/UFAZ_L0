#include<stdio.h>
int main(){
    float a;
    int n=100,i;
    double u[n];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter a:");
    scanf("%f",&a);
    u[0]=a;
    for(i=1;i<n+1;i++){
        u[i]=(u[i-1]+a/u[i-1])/2;
        
     }
     printf("%.3f\n",u[n]);
     

}