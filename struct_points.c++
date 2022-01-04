#include <iostream>
using namespace std;

typedef struct point{
  int x;
  int y;
  int z;
} point;

int main() {
  int N;
  int i;
  point p[10000];
  scanf("%d", &N);
  for (i=0;i<N;i++){
    scanf("%d %d %d", &p[i].x, &p[i].y, &p[i].z);
    printf("%d %d %d", p[i].x, p[i].y, p[i].z);
  }
}

