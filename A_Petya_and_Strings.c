#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
  char s[100],a[100];
  gets(s);
  gets(a);

   for (int i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] -32;
      }}
    
     for (int i = 0; a[i]!='\0'; i++) {
      if(a[i] >= 'a' && a[i] <= 'z') {
         a[i] = a[i] -32;
      }}

  int i = strcmp(s,a);
  printf("%d",i);
 return 0;
}





