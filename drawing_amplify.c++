#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main () {
  int i,j,k,h;
  int M,N,K;
  char input[10];
  scanf("%d %d %d", &M,&N,&K);
  for (i=0;i<M;i++) {
    for (j=0;j<N;j++){
      scanf("%c", &input[j]);
    }
    for (h=0;h<K;h++){
      for (j=0;j<N;j++){
        for (k=0;k<K;k++){
          printf("%c", input[j]);
        }
      }
      printf("\n");
    }
  }
}

/*
int main () {
  int i,j,k,h;
  int M,N,K;
  char input[10];
  scanf("%d %d %d", &M,&N,&K);
  for (j=0;j<10;j++){
      scanf("%c", &input[j]);
      printf("%c", input[j]);
    }
}
*/