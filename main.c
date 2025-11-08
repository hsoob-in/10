#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main(void)
{
  int i;
  char word[50];
  FILE *fp;
  
  fp = fopen("sample.txt", "w");
  
  for(i=0; i<3; i++){
    printf("Input a word: ");
    scanf("%s", &word);
    fprintf(fp, "%s\n", word);
  }

  fclose(fp);
  
  system("PAUSE");	
  return 0;
}
