#include <stdio.h>

int main() {
  int N;
  int i;
  int j;
  int a;
  int counter=0;
  int check=0;

  scanf("%d", &N);
  for(i=0;i<N;i++){
    check = 0;
    scanf("%d", &a);
    for(j=2;j<a;j++) {
      if(a%j==0){
        check++;
        break;
      }
    }
    if(check == 0 && a!=1){
      counter++;
    }
  }
  printf("%d", counter);
  return 0;
}