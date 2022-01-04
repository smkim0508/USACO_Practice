#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int teleport[101];
int noteleport[101];
int endtp, starttp;
int a,b,x,y;

int FindTeleport();
int FindDist();
int FindDistNoTp();

int main() {
  int i;
  int Dist1,Dist2 = 0;
  scanf("%d %d %d %d", &a,&b,&x,&y);
  FindTeleport();
  FindDist();
  FindDistNoTp();
  for (i=0;i<101;i++){
    Dist1 += teleport[i];
    Dist2 += noteleport[i];
  }
  printf("%d", min(Dist1,Dist2));
}

int FindTeleport(){
  if (abs(x-a) < abs(y-a)) {
    starttp = x;
    endtp = y;
  }
  else {
    starttp = y;
    endtp = x;
  }
  return 0;
}

int FindDist(){
  int i;
  for (i=min(a,starttp);i<max(a,starttp)+1;i++){
    teleport[i] = 1;
  }
  for (i=min(b,endtp);i<max(b,endtp)+1;i++){
    teleport[i] = 1;
  }
  return 0;
}

int FindDistNoTp(){
  int i;
  for (i=min(a,b);i<max(a,b);i++){
    noteleport[i] = 1;
  }
  return 0;
}
