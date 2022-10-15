//To see result please run ex4
#include<stdio.h>
#include <string.h>
#include<assert.h>
int lenght(char str[]);
char* initialize(char str[]);
char* compare(char str[]);
int concatenate(char str1[],char str2[]);
char* combine(char str1[],char str2[]);

//1
int lenght(char str[]){
    int a;
    a=strlen(str);
    return a;
}
//2
char* initialize(char str[]){
    char str2[100]; 
    char *p = str2;
    strcpy(str2, str);
    return p;
}
//3
char* compare(char str[]){
    char str2[100]="Salam-";
    strcat(str2, str);
    char *p = str2; 
    return p;
}
//4
int concatenate(char str1[],char str2[]){
     int i=0,j=0,f=0;
    while (str1[i] != '\0'){
        i++;
    }
    while (str2[j] != '\0'){
        j++;
    }
    if(i==j){
        for(int k=0; str1[k]!='\0';k++){
            if(str1[k]!=str2[k]){
                f = 1;
            }
        }    
        if(f==0){
            printf("0\n");
        }   
    }    
 int digit1,digit2;
    for(i;str1[i]!='\0'||str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            digit1 = str1[i];
            digit2 = str2[i];
            return digit1-digit2;
            break;
        }
    } 
}

//5
char* combine(char str1[],char str2[]){ 
    int i=0,j=0;
    
    while (i < strlen(str1)){
        i++;
    }
    for (i+1; i < strlen(str2);j++){
        str1[i]=str2[j];
        i++;
    }
    return str1;
}

