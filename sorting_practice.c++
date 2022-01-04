#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
  int input[9];
  int i;
  for (i=0;i<9;i++){
    scanf("%d", &input[i]);
  }
  sort(input, input+9);
  for (i=0; i<9; i++){
    printf("%d", input[i]);
  }
}

/*
int main() {
  vector<int> input;
  int i;
  int a;
  for(i=0;i<9;i++){
    scanf("%d", &a);
    input.push_back(a);
  }
  sort(input.begin(),input.end());
  for(i=0; i<input.size(); i++){
    printf("%d", input[i]);
  }
}
*/