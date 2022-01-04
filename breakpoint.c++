#include <iostream>
using namespace std;

int Breakpoint(int, int, int);

int main() {
  int A,B,C;
  scanf("%d %d %d", &A, &B, &C);
  printf("%d", Breakpoint(A,B,C));
}

int Breakpoint(int A, int B, int C) {
  int i;
  if (C<B) {
    return -1;
  }
  while (true) {
    if (A+B*i<C*i){
      break;
    }
    i++;
  }
  return i;
}


