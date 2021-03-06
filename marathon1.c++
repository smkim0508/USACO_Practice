#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

typedef struct coordinates{ 
  int x;
  int y;
}input;
input coords[100000];

int FindDist(int, int, int, int);
int FindTotalDist(int);

int main() {
  int N;
  int i;
  int totaldist;
  cin >> N;

  for (i=0;i<N;i++){
    cin >> coords[i].x;
    cin >> coords[i].y;
   // printf("%d %d\n", coordinates[i].x, coordinates[i].y);
  }
  totaldist = FindTotalDist(N);
  printf("%d", totaldist);
}

int FindDist(int a, int b, int c, int d){
  int x;
  x = abs(a-c) + abs(b-d);
  return x;
}

int FindTotalDist(int N){
  int i;
  int maxdiff = 0;
  int totaldist = 0;
  int diff;
  for (i=1;i<N-1;i++){
    diff = FindDist(coords[i-1].x, coords[i-1].y, coords[i].x, coords[i].y) 
    + FindDist(coords[i].x, coords[i].y, coords[i+1].x, coords[i+1].y) 
    - FindDist(coords[i-1].x, coords[i-1].y, coords[i+1].x, coords[i+1].y);
    if (diff > maxdiff){
      maxdiff = diff;
    }
    totaldist += FindDist(coords[i].x, coords[i].y, coords[i+1].x, coords[i+1].y);
  }
  totaldist += FindDist(coords[0].x, coords[0].y, coords[1].x, coords[1].y);
  totaldist -= maxdiff;
  return totaldist;
}