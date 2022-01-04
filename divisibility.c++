#include <iostream>
#include <algorithm>
using namespace std;

int number[5];

int DivisibilityCount(int);

int main() {
  int i;
  scanf("%d %d %d %d %d", &number[0], &number[1], &number[2], &number[3], &number[4]);
  sort(number, number+5);

  i=number[2]; 

  while(1){
    if (DivisibilityCount(i) >= 3) {
      printf("%d", i);
      break;
    }
    i++;
  }
}

int DivisibilityCount(int a){
  int count = 0;
  int i;
  for (i=0;i<5;i++){
    if (a%number[i]==0) {
      count++;
    }
  }
  return count;
}
