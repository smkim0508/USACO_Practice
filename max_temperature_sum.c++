#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int main(){
  int N, K;
  int i;
  int input[100000];
  int sum = 0;
  int max = 0;
  int rightidx = 0;
  int leftidx = 0;
  cin >> N;
  cin >> K;
  for (i=0; i<N; i++){
    cin >> input[i];
  }
  for (i=0; i<K; i++){
    sum += input[i];
  }
  rightidx = K;
  max = sum;
  while(1){
    if (sum > max){
      max = sum;
    }
    if (rightidx == N){
      break;
    }
    sum += input[rightidx];
    rightidx ++;
    sum -= input[leftidx];
    leftidx ++;
  }
  printf("%d", max);
}
