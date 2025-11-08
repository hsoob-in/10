#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main(void)
{
  int i;
  //char c;
  char c[100];
  FILE *fp = NULL;
  
  fp = fopen("sample.txt", "r");
  
  if (fp==NULL)
  printf("Can't Open");
  
  //한 글자 읽는 것이 파일의 마지막이 아니면
  //c=fgetc(fp)!=EOF
  while(fgets(c, sizeof(c), fp)!=NULL){
     printf("%s",c);
  } 

  fclose(fp);
  
  system("PAUSE");	
  return 0;
}
