#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
  int i;
  int a,b,c,d;
  int total_length = 0;
  scanf("%d %d %d %d", &a,&b,&c,&d);
  for (i = a; i < b; i++){
    input[i] = 1;
  }
  for (i = c; i < d; i++){
    input[i] = 1;
  }
  for (i = 0; i < 101; i++) {
    total_length += input[i];
  }
  printf("%d", total_length);
}
