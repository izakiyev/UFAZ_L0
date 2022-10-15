#include<stdio.h>
int main(){
    float i,a; 
    char x;
    char ans;
    printf("Enter the length : ");
    scanf("%f%s",&i,&x); //for asking user
    //the program will display the length expressed in inches and centimeters 
    if (x=='m' || x=='M'){ //if unit is m(meter) 
        printf("%f i=%f cm\n",100*i/2.54,100*i);
        printf("Do you want start again?\n");
        scanf("%s",&ans);
        if (ans=='n' || ans=='N'){
            printf("See you next time\n");
        }
        else{
            main();
        }
    }
    else if (x=='c' || x=='C'){ //if unit is c(centimeter) 
        printf("%f i=%f cm\n",i/2.54,i);
        printf("Do you want start again?\n");
        scanf("%s",&ans);
        if (ans=='n' || ans=='N'){
            printf("See you next time\n");
        }
        else{
            main();
        }
    }
    else if (x=='i' || x=='I'){ //if unit is i(inche) 
        printf("%f i = %f cm\n",i,i*2.54);
        printf("Do you want start again?\n");
        scanf("%s",&ans);
        if (ans=='n' || ans=='N'){
            printf("See you next time\n");
        }
        else{
            main();
        }
    }
    else{
        printf("0 i=0 cm\n");
        printf("Do you want start again?\n");
        scanf("%s",&ans);
        if (ans=='n' || ans=='N'){
            printf("See you next time\n");
        }
        else{
            main();
        }
    }
    return 0;
}
  