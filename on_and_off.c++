#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
  int i;
  int off[4];
  int on[4];
  int number = 0;
  int max = 0;
  for (i=0;i<4;i++){
    scanf("%d", &off[i]);
    scanf("%d", &on[i]);
    number -= off[i];
    number += on[i];
    if (number > 10000){
      number = 10000;
    }
    if (number > max){
      max = number;
    }
  }
  printf("%d", max);
}