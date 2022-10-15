#include<stdio.h>
int main(){
    int y,m,d,i;
    printf("Enter the year: ");
    scanf("%d",&y);
    printf("Enter the month: ");
    scanf("%d",&m);
    if ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0) && (m==2)) {
        d=29;
        printf("Days=%d\n",d);
    }
    else{
        if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            d=31;
            printf("Days=%d\n",d);
        }
        else if (m==4 || m==6 || m==9 || m==11){
            d=30;
            printf("Days=%d\n",d);
        }
        else{
            printf("Please enter numbers between 1 and 12 for the month.\n");
            main();
        }
    }
    
    return 0; 
}