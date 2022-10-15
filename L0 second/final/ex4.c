#include<stdio.h>
int main(){
    int p;
    int sr[100]={12,30,17,22,81,56,11,8},sr2[100];
    int i=0,j=0;
    printf("Enter the pointer:");
    scanf("%d",&p);
    int y=p;
    while (1){
        sr2[i]=sr[p];
        p+=1;
        if(sr[p-1]=='\0'){

            sr2[i]=sr[j];
            if (j=y+1){
                break;
            }
            j+=1;
        }
        i+=1;

    }
    for(int k=0;k<8;k++){
        printf("%d ",sr2[k]);
    }

}