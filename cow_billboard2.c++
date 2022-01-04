#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int a,b,c,d;
int e,f,g,h;
int x,y,z,w;

int FindArea(int,int,int,int);

int main() {
  int area2,area1;
  int overlap;
  scanf("%d %d %d %d", &a,&b,&c,&d);
  scanf("%d %d %d %d", &e,&f,&g,&h);
  scanf("%d %d %d %d", &x,&y,&z,&w);
  area1 = FindArea(a,b,c,d);
  area2 = FindArea(e,f,g,h);
  if (a>x && c<z){
    overlap += FindArea(c,d,z,w);
  }
  ...
  printf("%d",);
}
