#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int main() {
  int N, M;
  int i,j;
  int count = 0;
  int count2 = 0;
  int speed;
  int speedover;
  int maxspeedover = 0;
  int roadlimit[100];
  int drivingrecord[100];
  //int savelimit[100];
  //int saverecord[100];
  cin >> N;
  cin >> M;
  //printf("%d %d", N,M);
  for (i=0; i<N; i++){
    cin >> count2;
    cin >> speed;
    for (j = count; j < count+count2; j++){
      roadlimit[j] = speed;
    }
    count += count2;
  }
  //for (i=0; i<100;i++){
   // printf("%d", roadlimit[i]);
  //}
  count = 0;
  for (i=0; i<M; i++){
    cin >> count2;
    cin >> speed;
    for (j = count; j < count+count2; j++){
      drivingrecord[j] = speed;
    }
    count += count2;
  }
  //for (i=0; i<100; i++){
   // printf("%d", drivingrecord[i]);
  //}
  for (i=0; i<100; i++){
    speedover = drivingrecord[i] - roadlimit[i];
    //printf("%d", speedover);
    if (speedover > maxspeedover){
      maxspeedover = speedover;
    }
  }
  cout << maxspeedover;
}