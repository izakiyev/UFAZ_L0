#include<stdio.h>
#include <time.h> 
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int Random(int lower, int upper);

int max(int x, int y){//return the bigger number
    if(x > y){
        return x;
    }else{
        return y;
    }
}
char share_cards(char array[],char users[],int r);
int main(){
    char list[100][6]={
            /* heart */    "H[2]","H[3]","H[4]","H[5]","H[6]","H[7]","H[8]","H[9]","H[O]","H[J]","H[Q]","H[K]","H[A]",
            /* clubs */    "C[2]","C[3]","C[4]","C[5]","C[6]","C[7]","C[8]","C[9]","C[O]","C[J]","C[Q]","C[K]","C[A]",
            /* diamonds*/  "D[2]","D[3]","D[4]","D[5]","D[6]","D[7]","D[8]","D[9]","D[O]","D[J]","D[Q]","D[K]","D[A]",
            /* spades */   "S[2]","S[3]","S[4]","S[5]","S[6]","S[7]","S[8]","S[9]","S[O]","S[J]","S[Q]","S[K]","S[A]"
                            };//all cards are in this array
    char user1[5][5],user2[5][5],user3[5][5],user4[5][5],onTable[100][5],sl;
    int random[100],m=0,crd,k=0,b=0;
    int pnk1=0,pnk2=0,pnk3=0,pnk4=0;
    int n=4;
    while(true){
       int g=0;
        printf("\n");
        for(int i=0;i<52;i++){
            if(list[i][0]!=0){
                g+=1;
            }
        }
        if(g!=0){
        printf("Cards are dealt...\n");}
        sleep(1);
        if(g==0){
            //if game finish these function will work and will print point and  name of winner
                int left_max = max(pnk1, pnk2);
                int right_max = max(pnk3, pnk4);
                int final_max = max(left_max, right_max);
                if (final_max==pnk1){
                    printf("Winner is user1\n");
                    printf("Point is: %d\n", final_max);
                }
                else if (final_max==pnk2){
                    printf("Winner is user3\n");
                    printf("Point is: %d\n", final_max);
                }
                else if (final_max==pnk3){
                    printf("Winner is user3\n");
                    printf("Point is: %d\n", final_max);
                }
                else if (final_max==pnk4){
                    printf("Winner is user3\n");
                    printf("Point is: %d\n", final_max);

                }
                //it is for play again
            printf("Do you want play again?[y/n]\n");
            scanf("%s", &sl);
            if (sl=='n'){
                break;}
            else if (sl=='y'){
                main();
            }
        }
        int c=0;
        b+=1;
    if(b==1){
        //these codes dealt the cards randomly to the table
    for(int i=0;i<4;i++){
        int r=Random(0,52);
        while (list[r][0]==0){
            r=Random(0,52);
        }
        share_cards(list[r],onTable[i],r);
        list[r][0]=0;//if list's elements were used these will get 0;
    }}
     //these codes dealt the cards randomly to user1
    for(int i=0;i<4;i++){
        int r=Random(0,52);
        while (list[r][0]==0){
            r=Random(0,52);
        }
        share_cards(list[r],user1[i],r);
        list[r][0]=0;
    }
      //these codes dealt the cards randomly to user2
    for(int i=0;i<4;i++){
        int r=Random(0,52);
        while (list[r][0]==0){
            r=Random(0,52);
        }
        share_cards(list[r],user2[i],r);
        list[r][0]=0;
    }
      //these codes dealt the cards randomly to user3
    for(int i=0;i<4;i++){
        int r=Random(0,52);

        while (list[r][0]==0){
            r=Random(0,52);
        }
        share_cards(list[r],user3[i],r);
        list[r][0]=0;
    }
      //these codes dealt the cards randomly to user4
    for(int i=0;i<4;i++){
        int r=Random(0,52);
        while (list[r][0]==0){
            r=Random(0,52);
        }
        share_cards(list[r],user4[i],r);
        list[r][0]=0;
    }
    //After 4 steps, the value of m is reset, and in this way users can be distinguished
    while (true){
        c+=1;
        n+=1;
        //These codes shows users' name and points
    if (m==0){
        printf("\n");
    printf("user1\n");
    printf("Point:%d\n",pnk1);}
    else if (m==1){
     printf("user2\n");
       printf("Point:%d\n",pnk2);}
    else if (m==2){
        printf("user3\n");
        printf("Point:%d\n",pnk3);}
    else if (m==3){
        printf("user4\n");
          printf("Point:%d\n",pnk4);}   
    puts("---------");
        printf("  ");
       for(int j=0;j<n;j++){ 
           printf("%s ",onTable[j]);}
           
           printf("\n");
    puts("---------------");
    printf("Cards :");
    //these codes shows users' cards
    for(int i=0;i<4;i++){
         printf(" %d)",i+1);
       for(int j=0;j<4;j++){ 
           if (m==0){
            printf("%c",user1[i][j]);}
            else if (m==1){
            printf("%c",user2[i][j]);}
            else if (m==2){
                printf("%c",user3[i][j]);}
            else if (m==3){
               printf("%c",user4[i][j]);}  
           }}
           printf("\n");    
    printf("Adding card[1/2/3/4]:");
    scanf("%d",&crd);//for adding cards
    //these codes for adding,deleting cards and counting point
    //all the codes were the same but the users were different
    if (m==0){
     int b=0;
    for(int i=0;i<n;i++){
        
        if (onTable[i][2]==user1[crd-1][2] && onTable[i][2]!=0){
            b+=1;
            if (onTable[i][2]=='J'){
                pnk1+=+3;
                for(int i=0;i<n;i++){
                    for(int j=0;j<4;j++){
                    onTable[i][j]=0;
                }}
            }
            for(int j=0;j<4;j++){
               onTable[i][j]=0;  //if there is same card on the table it will delete
            }
            pnk1+=1;//for point
        }
         onTable[n][i]=user1[crd-1][i];//to add card to the table
          
        
    }
    if (user1[crd-1][0]==0) {
            m-=1;
            c-=1;
            puts("Please,come full point");
        
    }
    if(b>0){
        for(int i=0;i<4;i++){
            onTable[n][i]=0;
        }
    }
        for(int i=0;i<4;i++){
        user1[crd-1][i]=0;
        }
    }
    else if (m==1){
         int b=0;
    for(int i=0;i<n;i++){
        
        if (onTable[i][2]==user2[crd-1][2] && onTable[i][2]!=0){
            b+=1;
            if (onTable[i][2]=='J'){
                pnk2+=3;
                for(int i=0;i<n;i++){
                    for(int j=0;j<4;j++){
                    onTable[i][j]=0;
                }}
            }
            for(int j=0;j<4;j++){
               onTable[i][j]=0; 
            }
            pnk2+=1;
        }
        
         onTable[n][i]=user2[crd-1][i];
        
    }
    if (user2[crd-1][0]==0) {
            m-=1;
            c-=1;
            puts("Please,come full point");}
    if(b>0){
        for(int i=0;i<4;i++){
            onTable[n][i]=0;
        }
    }
        for(int i=0;i<4;i++){
        user2[crd-1][i]=0;
        }
    }
    else if (m==2){
         int b=0;
    for(int i=0;i<n;i++){
        
        if (onTable[i][2]==user3[crd-1][2] && onTable[i][2]!=0){
            b+=1;
             if (onTable[i][2]=='J'){
                pnk3+=3;
                for(int i=0;i<n;i++){
                    for(int j=0;j<4;j++){
                    onTable[i][j]=0;
                }}
            }
            for(int j=0;j<4;j++){
               onTable[i][j]=0; 
            }
            pnk3+=1;
        }
         onTable[n][i]=user3[crd-1][i];
        
    }
    if (user3[crd-1][0]==0) {
            m-=1;
            c-=1;
            puts("Please,come full point");}
    if(b>0){
        for(int i=0;i<4;i++){
            onTable[n][i]=0;
        }
    }
        for(int i=0;i<4;i++){
        user3[crd-1][i]=0;
        }
    }
    else if (m==3){
        int b=0;
    for(int i=0;i<n;i++){
        
        if (onTable[i][2]==user4[crd-1][2] && onTable[i][2]!=0){
            b+=1;
            if (onTable[i][2]=='J'){
                pnk4+=3;
                for(int i=0;i<n;i++){
                    for(int j=0;j<4;j++){
                    onTable[i][j]=0;
                }}
            }
            for(int j=0;j<4;j++){
               onTable[i][j]=0; 
            }
            pnk4+=1;
        }
         onTable[n][i]=user4[crd-1][i];
        
    }
    if (user4[crd-1][0]==0) {
            m-=1;
            c-=1;
            puts("Please,come full point");}
    if(b>0){
        for(int i=0;i<4;i++){
            onTable[n][i]=0;
        }
    }
        for(int i=0;i<4;i++){
        user4[crd-1][i]=0;
        }
    }
  
    //c is 16 cards will dealt again
    if(c==16){
        break;
    }

    m+=1;
    if (m==4){
        m=0;
    }}
    
}
}
char share_cards(char array[],char users[],int r){
    for(int i=0;i<5;i++){
        users[i] = array[i];
    }
}
int Random(int lower, int upper)//return the random numbers
{
    int i;
    int num = (rand() %
        (upper - lower + 1)) + lower;
    return  num;
    
}
