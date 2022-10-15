#include<stdio.h>
int main(){
    int n,i=2,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    //If you have a divisor of n from 2 to n, this number is not prime.
    while (i<n){
        if (n%i==0){
            printf("%d is not prime number\n",n);
            break;
        }
        else{
            k+=1;
        }
        i++;
    }
  /*   If n is a prime number, it will not be divisible by any number. 
    This means that k will be 2 units smaller than n because i starts with 2. */
    if (k==(n-2)){
        printf("%d is prime number\n",n);
    }
    return 0;
}
