#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
  int i;
  int overlap;
  int total_length;
  int input[4];
  for (i=0; i<4; i++){
    scanf("%d", &input[i]);
  }
  if (input[2]>input[1] || input[0]>input[3]){
    overlap = 0;
  }
  else if (input[1]>input[2]){
    overlap = input[1] - input[2];
  }
  else if (input[3]>input[0]){
    overlap = input[3] - input[0];
  }
  if (input[1]>input[3] && input[0]<input[2]){
    overlap = input[3] - input[2];
  }
  else if (input[3]>input[1] && input[2]<input[0]){
    overlap = input[1] - input[0];
  }
  total_length = input[1] - input[0] + input[3] - input[2] - overlap;
  printf("%d", total_length);
}