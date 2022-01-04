#include <iostream>
#include <algorithm>
using namespace std;

int location[1000];
int i,j,k;
int DistanceCheck();

int main(){
  int N;
  int count = 0;

  scanf("%d", &N);
  for(i=0;i<N;i++){
    scanf("%d", &location[i]);
  }
  sort(location, location+N);
  for (i=0;i<N-2;i++) {
    for (j=i+1; j<N-1; j++) {
      for (k=j+1; k<N; k++) {
        if (DistanceCheck() == 1) {
          count++;
        }
      }
    }
  }
  printf("%d", count);
}

int DistanceCheck() {
  if (location[k]-location[j]>=location[j]-location[i] && location[k]-location[j]<= 2*(location[j]-location[i])){
    return 1;
  }
  else {
    return 0;
  }
}