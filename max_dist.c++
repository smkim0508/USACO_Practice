#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

typedef struct coordinates{
  int x1;
  int x2;
  int y1;
  int y2;  
} coordinates;

int FindDist(int, int, int, int);

int main() {
  int i;
  int distance_x, distance_y;
  int square_l;
  coordinates rect[3];
  for(i=1;i<3;i++){
    scanf("%d %d %d %d", &rect[i].x1, &rect[i].y1, &rect[i].x2, &rect[i].y2);
  }
  distance_x = FindDist(rect[1].x1,rect[1].x2,rect[2].x1,rect[2].x2);
  distance_y = FindDist(rect[1].y1,rect[1].y2,rect[2].y1,rect[2].y2);
  square_l = max(distance_x,distance_y);
  printf("%d", square_l*square_l);
}

int FindDist(int a1, int a2, int b1, int b2){
  return max(b2 - a1, a2 - b1);
}