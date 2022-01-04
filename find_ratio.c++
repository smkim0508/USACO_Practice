#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int main(){
  int N,M;
  int i;
  int counter = 0;
  int sum = 0;
  int input[10000];
  int leftidx = 0;
  int rightidx = 0;
  cin >> N;
  cin >> M;
  for (i=0;i<N;i++) {
    cin >> input[i];
  }
  while(1){
    if (sum >= M){
      sum -= input[leftidx];
      leftidx ++;
    }
    else if (rightidx == N){
      break;
    }
    else {
      sum += input[rightidx];
      rightidx ++;
    }
    if (sum == M){
      counter ++;
    }
  }
  printf("%d", counter);
}