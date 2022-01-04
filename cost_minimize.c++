#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
  int N;
  int i;
  int k;
  int cost;
  int lowest_cost = INT_MAX;
  int min_height, max_height;
  int abs_min, abs_max;
  int input[1000];
  scanf("%d", &N);
  for (i=0;i<N;i++){
    scanf("%d", &input[i]);
    //printf("%d", input[i]);
  }
  sort(input, input+N);
  //for(i=0;i<N;i++){
   // printf("%d", input[i]);
  //}
  for (i=0;i<84;i++){ 
    cost = 0;
    min_height = i;
    max_height = i+17;
    for (k=0; k<N; k++){
      if (min_height>input[k]){
        cost += (input[k] - min_height)*(input[k] - min_height);
      }
      if (input[k]>max_height){
        cost += (input[k] - max_height)*(input[k] - max_height);
      }
    }
   // abs_min = input[0] - min_height;
   // abs_max = input[N-1] - max_height;
   //cost += abs_min*abs_min + abs_max*abs_max;
    if(cost<lowest_cost){
      lowest_cost = cost;
    }
  }
  printf("%d", lowest_cost);
}
