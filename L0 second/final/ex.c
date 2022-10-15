#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int func(int * p, int * v){

int tab[2] = {20,30};

p = tab;

v = malloc(sizeof(*v));

*v = 1;

p[0] = 2;

p[1] = 3;

p=p+1;

*p = *v;

return *p;

}

int main(){

    int * x = NULL;

    int * r = malloc(sizeof(*r));

    int a = 66;

    *r =40;

    *r = func(x, &a);
    printf("a = %d\n r=%ls\n x=%ls\n\n", a, r,x);

}