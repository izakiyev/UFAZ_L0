#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr,*fptr1,*fptr2;
   char c;

   fptr = fopen("myData.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   for(int i=0;i<9;i++){
       fprintf(fptr,"%s","C programming language\n");
   }

   fclose(fptr);
   fptr1 = fopen("myData.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", "myData.txt");
        exit(0);
    }
    fptr2 = fopen("myData2.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", "myData2.txt");
        exit(0);
    }
  
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    printf("Contents copied to %s\n", "myData2.txt");
  
    fclose(fptr1);
    fclose(fptr2);
   return 0;
}
 
