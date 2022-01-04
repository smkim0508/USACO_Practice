#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int M,N,K;
char save[10];

int main() {
  int i,j,k,w;
  scanf("%d %d %d", &M,&N,&K);
  for(i=0;i<M;i++){
    for(j=0;j<N;j++){
      scanf("%c",&save[j]);
    }
    for(k=0;k<K;k++){
      for(j=0;j<N;j++){
        for(w=0;w<K;w++){
          printf("%c", save[j]);
        }
      } 
      //printf("\n");
    }
    //for(k=0;k<4;k++){
     // printf("%c", save[k]);
    //}
  }
}

/*
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
*/