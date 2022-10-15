#include<stdio.h>
int divided(int a,int b);
int main(){
    int num1,num2;
    printf("Enter the numbers:");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("%d\n",divided(num1,num2));

}
int divided(int a,int b){
    while(1){
        a-=b;
        if (a<b){
            return a;
        }
    }
}