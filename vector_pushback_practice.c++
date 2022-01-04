#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  int i;
  float sum = 0;
  float a;
  vector<float> input;
  scanf("%d", &N);
  for(i=0;i<N;i++){
    scanf("%f", &a);
    input.push_back(a);
    sum += input[i];
  }
  printf("%f", sum/input.size());
}

