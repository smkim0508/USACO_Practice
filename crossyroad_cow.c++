#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
  int N;
  int i;
  int a,b;
  int counter = 0;
  int cow[11];
  scanf("%d", &N);
  for (i=1;i<11;i++){
    cow[i] = 2;
  }
  for (i=0;i<N;i++){
    scanf("%d %d", &a,&b);
    if (cow[a]!=b && cow[a]!=2) {
      counter ++;
      cow[a] = b;
    }
    else if (cow[a] == 2) {
      cow[a] = b;
    }
  }
  printf("%d", counter);
}