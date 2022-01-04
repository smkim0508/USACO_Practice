#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

typedef struct coords{ 
  int x;
  int y;
}input;
input coordinates[100000];

int FindDist(int, int, int, int);
int FindTotalDist(int);

int main() {
  int N;
  int i;
  int totaldist;
  cin >> N;
  

  for (i=0;i<N;i++){
    cin >> coordinates[i].x;
    cin >> coordinates[i].y;
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
    diff = FindDist(coordinates[i-1].x, coordinates[i-1].y, coordinates[i].x, coordinates[i].y) 
    + FindDist(coordinates[i].x, coordinates[i].y, coordinates[i+1].x, coordinates[i+1].y) 
    - FindDist(coordinates[i-1].x, coordinates[i-1].y, coordinates[i+1].x, coordinates[i+1].y);
    if (diff > maxdiff){
      maxdiff = diff;
    }
    totaldist += FindDist(coordinates[i].x, coordinates[i].y, coordinates[i+1].x, coordinates[i+1].y);
  }
  totaldist += FindDist(coordinates[0].x, coordinates[0].y, coordinates[1].x, coordinates[1].y);
  totaldist -= maxdiff;
  return totaldist;
}