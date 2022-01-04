#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int a,b,x,y;

int main() {
  scanf("%d %d %d %d", &a,&b,&x,&y);
  int dist,dist1,dist2,dist3;
  dist1 = abs(a-b);
  dist2 = abs(a-x)+abs(y-b);
  dist3 = abs(a-y)+abs(x-b);
  dist = min(min(dist1,dist2),dist3);
  printf("%d", dist);
  return 0;
}
