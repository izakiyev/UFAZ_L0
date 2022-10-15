#include<stdio.h>
#include<math.h> // to include the math libary
int main(){
    float a,b,c;
    double d,x1,x2;
    printf("Please,Enter the a,b,c:");
    scanf("%f %f %f",&a,&b,&c); 
    if (b*b-4*a*c<0){//if discriminant less than 0 ,the equation will have no roots
        printf("No real solution\n"); 
    }
    else if(b*b-4*a*c==0){ //if discriminant less than 0 ,the equation will have one root
        d=(b*b-4*a*c);
        x1=x2=((-b)+sqrt(d))/2*a;
        printf("x1=x2=%.f\n",x1); 
    }
    else{ //if discriminant less than 0 ,the equation will have two roots
        d=(b*b-4*a*c); //finding discriminant
        //finding roots
        x1=((-b)+sqrt(d))/(2*a); 
        x2=((-b)-sqrt(d))/(2*a);
        printf("x1=%f x2=%f\n",x1,x2); 
    }
    return 0;
}