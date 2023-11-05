#include <stdio.h>
#include <string.h>
int main() {
  char arr[14];
  char yy[3];
  char mm[3];
  char dd[3];
  
  scanf("%s",arr);
  
  strncpy(yy,arr,2);
  yy[strlen(yy)] = '\0';
  strncpy(mm,arr+2,2);
  mm[strlen(mm)] = '\0';
  strncpy(dd,arr+4,2);
  dd[strlen(dd)] = '\0';
  if(arr[7]=='1')
    printf("19%s년 %s월 %s일 남자",yy,mm,dd);
  else if(arr[7]=='2')
    printf("19%s년 %s월 %s일 여자",yy,mm,dd);
  else if(arr[7]=='3')
    printf("20%s년 %s월 %s일 남자",yy,mm,dd);
  
  else  
    printf("20%s년 %s월 %s일 여자",yy,mm,dd);
}
