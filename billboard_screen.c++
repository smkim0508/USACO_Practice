#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;
/*
int screen[2001][2001];

int main() {
  int a,b,c,d;
  int e,f,g,h;
  int i,j,k;

  scanf("%d %d %d %d", &a,&b,&c,&d);
  a += 1000;
  b += 1000;
  c += 1000;
  d += 1000;
  scanf("%d %d %d %d", &e,&f,&g,&h);
  e += 1000;
  f += 1000;
  g += 1000;
  h += 1000;
  for (j=a;j<c;j++){
    for (k=b;k<d;k++){
      screen[j][k] = 1;
    }
  }

  for (j=e;j<g;j++){
    for (k=f;k<h;k++){
      screen[j][k] = 0;
    }
  }

  }
}
*/

int screen[2001][2001];

int main() {
  int a,b,c,d;
  int e,f,g,h;
  int i,j,k;
  int max_x = -1;
  int max_y = -1;
  int min_y = 3000;
  int min_x = 3000;
  int area;
  scanf("%d %d %d %d", &a,&b,&c,&d);
  a += 1000;
  b += 1000;
  c += 1000;
  d += 1000;
  scanf("%d %d %d %d", &e,&f,&g,&h);
  e += 1000;
  f += 1000;
  g += 1000;
  h += 1000;
  for (j=a;j<c;j++){
    for (k=b;k<d;k++){
      screen[j][k] = 1;
    }
  }
  for (j=e;j<g;j++){
    for (k=f;k<h;k++){
      screen[j][k] = 0;
    }
  }
  for (i=0;i<2001;i++){
    for (j=0;j<2001;j++){
      if (screen[i][j] == 1) {
        if (j<min_x){
          min_x = j;
        }
        if (j>max_x){
          max_x = j; 
        }
        if (i<min_y){
          min_y = i;
        }
        if (i>max_y){
          max_y = i;
        }
      }
    }
  }
  area = (max_x-min_x+1)*(max_y-min_y+1);
  printf("%d", area);
  //printf("%d %d %d %d", min_x,min_y,max_x,max_y);
}

