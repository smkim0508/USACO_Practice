#include <iostream>

using namespace std;

int Primechecker(int);
int Solution();

int main() {
  int T;
  int i;
  scanf("%d", &T);
  for(i=0; i<T; i++) {
    Solution();
  }
}

int Solution() {
  int n, i, min_gap, first, second;
  scanf("%d", &n);
  min_gap = n;
  for (i=2;i<n-1;i++){
    if (Primechecker(i)+Primechecker(n-i) == 2) {
      if (min_gap>max(n-2*i, -n+2*i)) {
        first = i;
        second = n-i;
        min_gap = n-2*i;
      }
    }
  }
  printf("%d %d\n", first, second);
  return 0;
}

int Primechecker(int x){
  int i;
  int check=0;
  for (i=2; i<x; i++) {
    if (x%i==0) {
      check++;
      break;
    }
  }
  if (check == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

