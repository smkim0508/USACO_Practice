#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct position {
  int x;
  int y;
} position;

int d[100000];
position pos[100000];

int Total_dist = 0;

int CalcDist(int, int, int, int);
int FindMinimum(int);

int main() {
  int N;
  int i;
  scanf("%d", &N);
  
  scanf("%d %d", &pos[0].x, &pos[0].y);
  for(i=1; i<N; i++){
    scanf("%d %d", &pos[i].x, &pos[i].y);
    d[i-1] = CalcDist(pos[i].x, pos[i-1].x, pos[i].y, pos[i-1].y);
    Total_dist += d[i-1];
  }
  printf("%d", FindMinimum(N));
}

int CalcDist(int dx, int dx2, int dy, int dy2){
  int v_x, v_y; 
  v_x = max(dx-dx2, dx2-dx);
  v_y = max(dy-dy2, dy2-dy);
  return v_x + v_y;
}

int FindMinimum(int N){
  int i;
  int min_dist = Total_dist;
  int change_distance;
  for (i=1; i<N; i++){
    change_distance = (d[i]+d[i-1]-CalcDist(pos[i+1].x, pos[i-1].x, pos[i+1].y, pos[i-1].y));
    if (Total_dist - change_distance < min_dist) {
      min_dist = Total_dist - change_distance;
    }
  }
  return min_dist;
}

