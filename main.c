#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  char str[4];
  str[0]='a';
  str[1]='b';
  str[2]='c';
  str[3]='\0';
  
  printf("%s\n", str); //전체 문자열 출력 
  
  while(str[i]!='\0'){ //문자열 끝 null 문자 전까지 
    printf("%c\n", str[i]); //문자 하나씩 출력 
    i++;
} 
  
  system("PAUSE");	
  return 0;
}
