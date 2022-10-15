#include<stdio.h>
int lenght(char x[]);
char* concatenate(char x[],char y[],char *z);
int main(){
    char sr[100],x,sr2[100],sr1[100],fnlsr[100];
    
    printf("Enter the word:");
    scanf("%s",sr);
    printf("%d\n",lenght(sr));
    printf("Enter first str:");
    scanf("%s",sr1);
    printf("Enter second str:");
    scanf("%s",sr2);
    printf("%s\n",concatenate(sr2,sr1,fnlsr));
}
int lenght(char x[]){
    int i=0;
    char y;
    while (1){
        y=x[i];
        i+=1;
        if (y=='\0'){
            return(i-1);
            break;
        }
        

    }
}
char* concatenate(char x[],char y[],char *z){
    int i=0;
    int j=0;
    int k=lenght(x)+lenght(y);
    while(1){
        z[i]=y[j];
        i+=1;
        z[i]=x[j];
        i+=1;
        j+=1;
        if(z[k+1]=='\0'){
            return(z);
            break;
        }
    }
}