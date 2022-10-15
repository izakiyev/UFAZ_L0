#include<stdio.h>
int main(){
    int len=100;
    char list[len],b;
    printf("Enter the lenght of list:");
    scanf("%d",&len);
    printf("Enter the elements: ");
    scanf("%s",list);
    for(int j=len;j>=0;j--){
        printf("%c",list[j]);
    }
    printf("\n");
}
 