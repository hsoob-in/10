#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main(void)
{
  char src[] = "The worst things to eat before you sleep";
  char dst[100];
  
  strcpy(dst, src);
  
  printf("copied string: %s\n", dst); //전체 문자열 출력 
  
  
  system("PAUSE");	
  return 0;
}
