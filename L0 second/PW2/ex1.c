#include<stdio.h>
int main(){
    float a,b,k=1;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("Enter the power:");
    scanf("%f",&b);
    //if power biger then 0
    if (b>0){
        for(int i=0;i<b;i++){
            k*=a;
        }
        printf("Answer=%f\n",k);
    }
    //if power less than 0
    else if(b<0){
        for(int i=0;i>b;i--){
            k/=a;
        }
        printf("Answer=%f\n",k);
    }
    //if power=0
    else{
        printf("Answer=%d\n",1);
    }
}