#include<stdio.h>
int arry(int arry[],int t);
int main(){
    int l=0;
    printf("Enter the lenght of array:");
    scanf("%d",&l);
    int arr[l];
    if (l==0){
        printf("[]\n");
    }
    else{
        arry(arr,l);
    }
    
return 0;
}
int arry(int arry[],int t){
    printf("Enter the elements of array:");
    for(int i=0;i<t;i++){
        scanf("%d",&arry[i]);
    }
  
    printf("[");
    for(int j=0;j<t-1;j++){
        printf("%d,",arry[j]);
    }
    printf("%d]\n",arry[t-1]);
}




