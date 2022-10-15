#include<stdio.h>
#include <stdbool.h>
int list(int array[],int len);
int main(){
    int len=100,int_list[len];
    int num,m=0,a;
    char b;
    printf("Enter lenght of array: ");
    scanf("%d",&len);
    for(int i=0; i<len; i++){
            printf("Enter the number: ");
            scanf("%d",&a);
            int_list[i] = a;
            if (a%2==0){
               m+=1 ;
            }
            else{
                m='n';
            }
        }
        if (m==len){
            printf("True\n");

        }
        else{
            printf("False\n");
        }
        printf("[");
    for(int i=0; i<len; i++){ 
    printf("%d ",int_list[i]); }
    printf("]\n");
}
