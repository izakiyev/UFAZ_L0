 #include <stdio.h>
void caesar_cipher(char str[], int key);
int main()
{
    char str[100];
    int key;
    printf("Enter the text:");
    gets(str);
    printf("Enter the key:");
    scanf("%d",&key);
    caesar_cipher(str, key);
    return 0;
}
void caesar_cipher(char str[], int key) {
  int i = 0;
  char m="A";
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i]<= 'Z' ){
        char s = str[i] - 'A';
        s += key;
        s  %= 26;
        str[i] = s + 'A';
    }
    else if ( str[i] >= 'a' && str[i]<= 'z') {
        char s = str[i] - 'a';
        s += key;
        s  %= 26;
        str[i] = s + 'a';

    }
    i++;
  }
  printf("%s\n", str);
} 
 