#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include <stdbool.h>
#define BOARD_ROWS 8
#define BOARD_COLS 9
//functions
char visual(char arr[BOARD_ROWS][BOARD_COLS],char l,char key);
char move(char arr[BOARD_ROWS][BOARD_COLS],char a);
char CheckXLine(char arr[BOARD_ROWS][BOARD_COLS]);
char CheckYLine(char arr[BOARD_ROWS][BOARD_COLS]);
char RightDiagonal(char arr[BOARD_ROWS][BOARD_COLS]);
char LeftDiagonal(char arr[BOARD_ROWS][BOARD_COLS]);
char moveRobot(char arr[BOARD_ROWS][BOARD_COLS],char a);
char AILine(char arr[BOARD_ROWS][BOARD_COLS]);
int Random();
char full_row();
//
int main(){
    //Ibrahim wrote it
    char con[BOARD_ROWS][BOARD_COLS];
    int i,j,n,m=2;
    char x[2]={'*','o'},k,r,ans;
    printf("Which one do you want?Play with friend(f) or machine(m)?\n[f/m]->");
    scanf("%s",&r);
        while (true){
            if (m%2==0){
                k=x[0];
                visual(con,k,r);
                m+=1;
               
            }
            else{
                k=x[1];
                visual(con,k,r);
                m+=1;
                
            }
        if (CheckXLine(con)==1 || CheckYLine(con)==1 || RightDiagonal(con)==1 || LeftDiagonal(con)==1){
        puts("  1 2 3 4 5 6 7 ");
        for(i=0; i<BOARD_ROWS-2; i++) {
        for(j=0;j<BOARD_COLS;j++) {
            printf("%c ", con[i][j]);
            if(j==BOARD_COLS-1){
                printf("\n");
    }}

    }
    puts("  1 2 3 4 5 6 7 ");
   
            printf("%c is WINNER\n",k);
            printf("Do you want play again?\n[y/n]->");
            scanf("%s",&ans);
            if (ans =='y'){
                main();
            }
            else{
                puts("See you next time");
                break;
            }
            break;
        }
        }  
    return 0;
}


char visual(char arr[BOARD_ROWS][BOARD_COLS],char l,char key){
    //This function for visualizing table
    //Gular wrote it
    int i,j;
    char txt[6]={'1','2','3','4','5','6'};
   for(i=0; i<BOARD_ROWS+1; i++) {
      for(j=0;j<BOARD_COLS-1;j++) {
        if (i==0 || i==8){
            arr[j][i]=txt[5-j]; 
        }
        else{
            if(arr[j][i]!='*'  && arr[j][i]!='o' ){
                arr[j][i]=' ';
                

            }
      }
      }
      }
          puts("  1 2 3 4 5 6 7 ");
          
    for(i=0; i<BOARD_ROWS-2; i++) {
      for(j=0;j<BOARD_COLS;j++) {
         printf("%c ", arr[i][j]);
         if(j==BOARD_COLS-1){
            printf("\n");
}}


}
puts("  1 2 3 4 5 6 7 "); 
    if (key == 'f'){  //if user write f,will play with friend
        move(arr,l);
    }
    else if(key == 'm'){//else will play with machine
        moveRobot(arr,l);
    }
    else{
        puts("Please enter f or m");
        main();
    }

}
char full_row(char arr[BOARD_ROWS][BOARD_COLS]){
    //if column is full,this function will report
    //Ulvi wrote it
    int i,j;
    for(j=0; i<BOARD_COLS; i++) {
        for(int i=1;j<BOARD_ROWS;j++) {
            if(arr[i][j]!=' ' && arr[i+4][j]==arr[i][j]){//it check all columns if column is full it will return column number
                return j;
            }
           }}
}
   
char move(char arr[BOARD_ROWS][BOARD_COLS],char a){
    //This function for playing with friend
    //Ulvi wrote it
    int n,i,m=2;
    char x[2]={'*','o'};
    printf("You should come to %d column\n",AILine(arr)); 
    printf("Enter the number of col:");
    scanf("%d",&n);
    if (full_row(arr)==n){
        printf("This row is full.\n");
        move(arr,a);
    }
    for(i=0; i<BOARD_ROWS-2; i++){
        if (arr[5-i][n]==' '){
            arr[5-i][n]=a;//for adding symbols to table
            break;
        }
    }
   return n;  
}
char moveRobot(char arr[BOARD_ROWS][BOARD_COLS],char a){
    //This function for playing with machine
    //Avaz wrote it
    int n,m=2;
    if (a=='*'){//if symbol is * user will play, play else machine will 
        printf("You should come to %d column\n",Random()); 
        printf("Enter the number of col:");
        scanf("%d",&n);
        for(int i=0; i<BOARD_ROWS-2; i++){
            if (arr[5-i][n]==' '){
                arr[5-i][n]=a;
                break;
            }
        }}
    else if (a=='o'){
        if (AILine(arr)){
            for(int i=0; i<BOARD_ROWS-2; i++){
                if (arr[5-i][AILine(arr)]==' '){
                    arr[5-i][AILine(arr)]=a;printf("You should come to %d column\n",AILine(arr)); 
                    break;
                }}}
    
    }
   return n;  
}
//Check lines
char CheckXLine(char arr[BOARD_ROWS][BOARD_COLS]){
    //This function for checking x line.
    //Ibrahim
    int i,j;
      for(i=6; i>=0; i--) {
        for(j=0;j<BOARD_COLS;j++) {
            if (arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2] && arr[i][j+2]==arr[i][j+3] && arr[i][j]!=' ' ){
                    return 1;
                }
}}}
char CheckYLine(char arr[BOARD_ROWS][BOARD_COLS]){
    //This function for checking Y line.
    //Avaz
    int i,j;
      for(i=6; i>=0; i--) {
        for(j=0;j<BOARD_COLS;j++) {
            if (arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j] && arr[i+2][j]==arr[i+3][j] && arr[i][j]!=' ' ){
                    return 1;
                }
}}}
char RightDiagonal(char arr[BOARD_ROWS][BOARD_COLS]){
    //This function for checking Right diognal.
    //Gular
    int i,j;
      for(i=6; i>=0; i--) {
        for(j=0;j<BOARD_COLS;j++) {
            if (arr[i][j]==arr[i-1][j+1] && arr[i-1][j+1]==arr[i-2][j+2] && arr[i-2][j+2]==arr[i-3][j+3] && arr[i][j]!=' ' ){
                    return 1;
                }
}}}
char LeftDiagonal(char arr[BOARD_ROWS][BOARD_COLS]){
    //This function for checking Left diognal.
    //Ulvi
    int i,j;
      for(i=6; i>=0; i--) {
        for(j=0;j<BOARD_COLS;j++) {
            if (arr[i][j]==arr[i-1][j-1] && arr[i-1][j-1]==arr[i-2][j-2] && arr[i-2][j-2]==arr[i-3][j-3] && arr[i][j]!=' ' ){
                    return 1;
                }
}}}
int Random(){
    //Avaz
    //This function return random numbers
    int num, i;  
    time_t t1; 
    srand ( (unsigned) time (&t1));  
    return (1+rand() % 7 ) ; 
} 

char AILine(char arr[BOARD_ROWS][BOARD_COLS]){
    //Ibrahim,Gular,Ulvi
    //This function help machine for playing smart.Also it suggest to user logical columns
      int i,j;
      for(i=6; i>0; i--) {
        for(j=1;j<BOARD_COLS;j++) {
            if (arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2] && arr[i][j]!=' ' && arr[i][j+3]==' ' ){
                    return j+3;
                }
            else if(arr[i][j+1]==arr[i][j+2] && arr[i][j+2]==arr[i][j+3] && arr[i][j+1]!=' ' && arr[i][j]==' '){
                  return j;
                }
             else if(arr[i][j]==arr[i][j+2] && arr[i][j+2]==arr[i][j+3] && arr[i][j]!=' ' && arr[i][j+1]==' '){
                  return j+1;
                }
             else if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+3] && arr[i][j]!=' ' && arr[i][j+2]==' '){
                  return j+2;
                }
                else{
                    Random();
                }
        }}
    for(j=1;j<BOARD_COLS;j++) {
      for(i=6; i>1; i--) {
            if (arr[i][j]==arr[i-1][j] && arr[i-1][j]==arr[i-2][j] && arr[i][j]!=' ' && arr[i-3][j]==' ' ){
                    return j;
         }
        else{
            Random();
        }
       
}}
    for(i=6; i>=0; i--) {
        for(j=0;j<BOARD_COLS;j++) {
            if (arr[i][j]==arr[i-1][j+1] && arr[i-1][j+1]==arr[i-2][j+2] && arr[i][j]!=' ' && arr[i-3][j+3]==' ' && arr[i-2][j+3]!=' ' ){
                    return j+3;
                }
            else{
                Random();
            }
        }}
     for(i=6; i>=0; i--) {
        for(j=0;j<BOARD_COLS;j++) {
            if (arr[i][j]==arr[i-1][j-1] && arr[i-1][j-1]==arr[i-2][j-2] && arr[i][j]!=' ' && arr[i-3][j-3]==' ' && arr[i-2][j-3]!=' ' ){
                    return j+3;
                }
                else{
                    Random();
                }
        }}

}
