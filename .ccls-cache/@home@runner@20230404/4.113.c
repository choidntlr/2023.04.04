#include <stdio.h>
main(){
  int a;
  printf("점수를 입력: ");
  scanf("%d", &a);

  if(a%2==0) {
    printf("짝수");
  }
  else
    printf("홀수");
}
