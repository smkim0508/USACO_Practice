#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int input[1000];
int save[1000];
int main() {
  int N;
  int i,j,k;
  int a,b;
  int pt = 0;
  scanf("%d", &N);
  for (i=0;i<(N-1);i++){
    scanf("%d", &input[i]);
  }
  for (i=0;i<(N-1);i++){
    for (j=0;j<input[i];j++){
      a = j;
      b = input[i]-a;
      save[i] = a;
      save[i+1] = b;
      for (k=0;k<(i+1);k++){
        if (input[k-1]==a){
          pt = 1;
        }
        if (pt == 1){
          break;
        }
      }
    }
  }
}

