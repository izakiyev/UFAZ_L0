#include<stdio.h>
int find_minimum(int a[], int n,int m);
int main(){
    int l,i,j=0,c,loc=0,k,r=0,min=0;
    printf("Enter the lenght of array:");
    scanf("%d",&l);
    int arr[l];
    printf("Enter the elements of array:");
    for(int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<l-1;j++){
        loc = find_minimum(arr,l, j);
       
        min  = arr[loc];
        arr[loc]=arr[j];
        arr[j]=min;  
         for (k=0;k<l;k++){  
            printf("%d ",arr[k]);
        }
        printf("\n");

    }
     return 0;
}
int find_minimum(int a[], int n,int m) {
  int c, index = m;
 
  for (c = m; c < n; c++){
    if (a[c] < a[index]){
      index = c;
  }}
  return index;
}