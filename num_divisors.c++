#include <iostream>
using namespace std;

int k;
int Count_divisors(int);

int main () {
  int n;
  int i;
  int j;
  scanf("%d", &n);
  scanf("%d", &k);
  for (i=0;i<n;i++){
    for (j=1; j<n+1; j++){
      //printf("%d", (i*n)+j);
      if (Count_divisors((i*n)+j) == 1){
        printf("*");
      }
      else {
        printf(".");
      }
    }
    printf("\n");
  }
}

int Count_divisors(int n){
  int counter = 0;
  int i;
  for (i=1;i<n+1;i++){
    if (n % i == 0) {
      counter++;
    }
  }
  if (counter <= k){
    return 1;
  }
  else {
    return 0;
  }
}
