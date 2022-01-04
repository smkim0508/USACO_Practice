#include <stdio.h>
/*
int main() {
  int i;
  int n;
  for(n=3;n<10;n+=2) {
    for (i=1;i<10;i++) {
      printf("%d * %d = %d\n", n, i , n*i);
    }
     printf("\n");
  }
  
  
  return 0;
}
*/

/*
int main()
{
  int i;
  int j;
  for(i=0;i<5;i++) {
    for(j=5; j>i; j+=-1) {
      printf("*");
    }
    printf("\n");
  }
}
*/
/*
int main()
{
  int i;
  int j;
  int k;
  for(i=0;i<5;i++) {
    for(k=0; k<i; k++) {
      printf(" ");
    }
    for(j=5; j>i; j+=-1) {
      printf("*");
    }
    printf("\n");
  }
  for(i=0;i<4;i++) {
    for(k=3; k>i; k--) {
      printf(" ");
    }
    for(j=2; j<i+4; j++) {
      printf("*");
    }
    printf("\n");
  }
}
*/

/*
int main() {
  int n=2;
  int i;
  for(i=1; i<10; i++) {
    printf("%d * %d = %d\n", n, i, n*i);
  }
}
*/

int main() {
  int t;
  int i;
  scanf("%d",&t);
  for(i=0; i<t; i++) {
    int a;
    int b;
    scanf("%d %d\n", &a, &b);
    printf("%d\n", a+b);
  }
}
