#include<stdio.h>
int max(char list[],int len);
int main(){
     char main_array[100];
     int len;
     printf("Lenght of array: ");
     scanf("%d",&len);
     printf("Enter the numbers:");
     for(int i=0;i<len;i++){
         scanf("%s",&main_array[i]);
     }
    
   max(main_array,len);


}
int max(char list[],int len){
    char m;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if (list[i]>list[j]){
               m=list[i];
               list[i]='\0';
        }
        
        } 
    }
    return n;
  
}