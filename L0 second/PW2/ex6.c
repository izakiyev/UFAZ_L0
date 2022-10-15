#include<stdio.h>
int main(){
    int l,k;
    float a=0;
    int m[100];
       

    printf("Enter the size of array:");
    scanf("%d",&l);
    printf("Enter the elements of array:");
    for (int i=0;i<l;i++){
        scanf("%d",&k);
        m[i]=k;  
        a+=k;//to find average of elements of array
    }
    int min = m[0];
     //   For find the biggest number of array
    for (int j = 1; j < l; ++j) {
    if (m[0] < m[j]) {
      m[0] = m[j];
    }}
         
    //   For find the smallest number of array
    for (int f = 0; f < l; ++f) {     
        //Compare elements of array with min    
       if(m[f] < min) {
           min = m[f];    
    }     } 
    printf("Smallest element = %d\n", min);    
 
    printf("Largest element = %d\n", m[0]);
    printf("The average of elements of array = %f\n",a/l);
    return 0;
}