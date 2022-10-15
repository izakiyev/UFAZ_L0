#include<stdio.h>
#include</home/ufaz/Desktop/Ibrahim/L0 second/PW3/ex3.c>
#include<assert.h>
int main(){
    char str[] ="Hello World";
    char str2[] ="Hello";
    char str1[]=" World"; 
    printf("%d\n",lenght(str));
    printf("%s\n",initialize(str));
    printf("%s\n",compare(str));
    printf("%d\n",concatenate(str1,str2));
    printf("%s\n",combine(str2,str1));

    assert (4 == lenght ("test"));
    assert (strcmp(initialize(str2), "Hello") > 0);
    assert (strcmp(compare(str), "Salam-Hello World") == 0);
    assert ( (-32) == concatenate(str2,str1));
    assert (strcmp(combine(str2,str1), "Hello  World") == 0);
    return 0; 

}