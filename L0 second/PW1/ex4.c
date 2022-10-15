#include<stdio.h> 
int main(){
    float i; 
    char x;
    printf("Enter the length : ");
    scanf("%f%s",&i,&x); //for asking user
    //the program will display the length expressed in inches and centimeters 
    if (x=='m'){ //if unit is m(meter) 
        printf("%f i=%f cm\n",100*i/2.54,100*i);
    }
    else if (x=='c'){ //if unit is c(centimeter) 
        printf("%f i=%f cm\n",i/2.54,i);
    }
    else if (x=='i'){ //if unit is i(inche) 
        printf("%f i = %f cm\n",i,i*2.54);
    }
    else{
        printf("0 i=0 cm\n");
    }
    return 0;
}
