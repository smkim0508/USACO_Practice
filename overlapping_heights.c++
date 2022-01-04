#include <iostream>
using namespace std;

int height[50];

int leftview(int);
int rightview(int);

int main() {
  int N;
  int i;
  scanf("%d", &N);
  for (i=0;i<N;i++){
    scanf("%d", &height[i]);
  }
  printf("%d\n", leftview(N));
  printf("%d", rightview(N));
  return 0;
}

int leftview(int N) {
  int block_trophy = 0;
  int i;
  int counter;
  for (i=0;i<N;i++){
    if (block_trophy <= height[i]){
      block_trophy = height[i];
      counter++;
    }
  }
  return counter;
}

int rightview(int N) {
  int block_trophy = 0;
  int i;
  int counter;
  for (i=N-1; i>-1; i--){
    if (block_trophy <= height[i]){
      block_trophy = height[i];
      counter++;
    }
  }
  if (counter == 0){
    counter = 1;
  }
  return counter;
}
