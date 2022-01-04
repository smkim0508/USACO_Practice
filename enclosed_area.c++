#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int input[3];

int main(){
  int i,j;
  int diff;
  int mindiff;
  int N1,N2;
  int ans;
  scanf("%d %d %d", &input[0], &input[1], &input[2]);
  N1= input[2]/input[0];
  N2= input[2]/input[1];
  mindiff = input[2];

  for (i=0; i<N1+1; i++){
    for (j=0; j<N2+1; j++){
      diff = input[2] - (input[0]*i + input[1]*j);
      if (diff < 0){
        //printf("%d\n", diff);
        break;
      }
      //printf("%d\n", diff);
      if (diff < mindiff) {
        mindiff = diff;
      }
    }
  }
  ans = input[2] - mindiff;
  printf("%d", ans);
}