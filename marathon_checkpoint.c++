#include <iostream>
using namespace std;

int minimum_distance(int);
int distance(int, int, int, int);
//int minimum_d(int, int);
//int difference(int);
/*
int main() {
  int N;
  int n;
  int d;
  scanf("%d", &N);
  n = difference(N);
  d = minimum_d(N,n);
  printf("%d", d);
  return 0;
}
*/
int main() {
  int N;
  int d;
  scanf("%d", &N);
  d = minimum_distance(N);
  printf("%d", d);
  return 0;
}

int distance(int a, int b, int c, int d){
  int d_x;
  int d_y;
  d_x = max(a-c, c-a);
  d_y = max(b-d, d-b);
  d = d_x + d_y;
  return d;
}

int minimum_distance(int N) {
  int total_distance;
  int a,b,c,d,e,f;
  int i;
  int max_diff = 0;
  scanf("%d %d", &a,&b);
  scanf("%d %d", &c,&d);
  total_distance = distance(a,b,c,d);
  for (i=2;i<N;i++) {
    scanf("%d %d", &e, &f);
    total_distance += distance(c,d,e,f);
    if ((distance(a,b,c,d) + distance(c,d,e,f) - distance(a,b,e,f)) > max_diff) {
      max_diff = (distance(a,b,c,d) + distance(c,d,e,f) - distance(a,b,e,f));
    }
    a = c;
    b = d;
    c = e;
    d = f;
  }
  total_distance = total_distance - max_diff;
  return total_distance;
}
