#include<stdio.h> 
int main(){
    float x1,x2,d;  
    printf("Enter first number:");
    scanf("%f",&x1);
    printf("Enter second number:");
    scanf("%f",&x2); 
    //if we do not write the condition, the program can print negative number
    if (x1>x2){ // if x1 bigger than x2,program will find x1-x2
    d=x1-x2;
    }
    else { //else prigram will find x2-x1 
        d=x2-x1;
    }
    printf("The absolute value of the difference between %f and %f is %f\n",x1,x2,d);
    return 0;
}