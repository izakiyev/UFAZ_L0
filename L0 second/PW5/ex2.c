#include<stdio.h>
#include <time.h> 
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
 #define randnum(min, max) \
        ((rand() % (int)(((max) + 1) - (min))) + (min))
int Random(int n,int k);
int User();
int Machine();
char play_again();
int main(){
    char a;
    printf("Which one do you want choose?If you choose m, machine will find number.\nIf you choose u, user will find number\n=>");
    scanf("%s",&a);
    if (a=='m'){
        Machine();
    }
    else if (a=='u'){
        User();
    }
}
int Random(int n,int k){
    //This function return random numbers
    srand(time(NULL));

    return randnum(k, n);

} 
int User(){
    int a,m=0;
    int n=999,k=1;
    char b;
    int r=Random(n,k);//it choose a random number
    //everytime value of m will get 1 point
    while(true){
        printf("Enter the number:");
        scanf("%d",&a);
        if (a>r){ //if user's number greater than random it will print 'G'
            printf("G\n");
            m+=1;
        }
        else if(a<r){ //if user's number smaller than random it will print 'S'
            printf("S\n");
            m+=1;
        }
        else{//if numbers are equal it will print "F"
            printf("F: %d\n",a);
            m+=1;
            printf("Number of tries=%d\n",m);
             if (play_again()==1){//if play_again func returns 1 this loop will break
                break;
        }
          
        }
         
    }
}
int Machine(){
    //in this case user will think
    char m[1]={0};
    char a,b;
    int r=0;
    int n=999,k=1;
    printf("Enter if number is Big(B) else number is small(S).if machine find the number you will write '=':\n");
    while (true){
        r=Random(n,k);//everytime machine think a randdom number
        m[0]+=1;
    printf("%d\n",r);
    printf("[s;b;=]=>");
    scanf("%s",&a);
    if (a=='S' || a=='s'){
        k=r+1;
    }
    else if (a=='B' || a=='b'){
        n=r-1;
    }

    else if(a=='='){
        printf("Number was found.\n");
         printf("Number of tries=%d\n",m[0]);
        if (play_again()==1){
            break;
        }
    }
 
     
    }
}
char play_again(){
    char a;
    printf("Do you want play again?\n=>");
    scanf("%s",&a);
    if (a=='y'){
        main();
    }
    else{
        printf("See you next time.\n");
        return 1;
    }
}
