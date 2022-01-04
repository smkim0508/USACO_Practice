#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int main() {
  int N,K;
  int i;
  int grass = 0;
  int maxgrass = 0;
  int rightidx = 0;
  int leftidx = 0;
  int field[1000000];
  int a,b;

  cin >> N;
  cin >> K;
  for (i=0;i<N;i++){
    cin >> a;
    cin >> b;
    field[b] = a;
  }
  for (i=0; i<N; i++){
    printf("%d", field[i]);
  }
  
  rightidx = 2*K;
  for (i=0;i<2*K;i++){
    grass += field[i];
  }
  while(1){
    if (grass > maxgrass){
      maxgrass = grass;
    }
    if (rightidx == N){
      printf("1");
      break;
    }
    grass += field[rightidx];
    rightidx++;
    grass -= field[leftidx];
    leftidx++;
  }
  printf("%d", maxgrass);
}