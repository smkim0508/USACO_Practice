#include <iostream>
using namespace std;

int difference(int N) {
  int a,b,c,d,e,f;
  int i;
  int max_diff = 0;
  int nth;
  scanf("%d %d", &a,&b);
  scanf("%d %d", &c,&d);
  for (i=2;i<N;i++) {
    scanf("%d %d", &e, &f);
    if ((distance(a,b,c,d) + distance(c,d,e,f) - distance(a,b,e,f)) > max_diff) {
      max_diff = (distance(a,b,c,d) + distance(c,d,e,f) - distance(a,b,e,f));
      nth = i;
    }
    a = c;
    b = d;
    c = e;
    d = f;
  }
  return nth;
}

int minimum_d(int N, int nth){
  int a,b,c,d;
  int total_distance;
  int i;
  scanf("%d %d", &a,&b);
  for (i=1; i<N+1; i++) {
    scanf("%d %d", &c,&d);
    if (i != nth) {
    total_distance += distance(a,b,c,d);
    a = c;
    b = d;
    }
  }
  return total_distance;
}

