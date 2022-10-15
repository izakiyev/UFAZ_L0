#include<stdio.h>
int gcd(int a, int b);//we call function here
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a); 
    printf("Enter second number:");
    scanf("%d",&b);  
    int result=gcd(a,b);
    printf("gcd=%d\n",result);//print value of gcd
    return 0;
}
// gcd function
int gcd(int a, int b){
    if (a==b){ 
        return a;
    }
    else if (a>b){
        return gcd(a-b, b);
    }
    else if (a<b){
        return gcd(a,b-a);
    }
}
