#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int main() {
  int N;
  int save[1000];
  int check[1000];
  int ans[1000];
  int i,j;
  int x;
  bool okay;
  scanf("%d", &N);
  
  for (i=0;i<N-1;i++){
    scanf("%d", &save[i]);
  }
 // printf("%d", N);

  for (i=1;i<save[0];i++){
    memset(check, 0, 1000);
    ans[0] = i;
    check[ans[0]] = 1;
    okay = true;
    for (j=0;j<N-1;j++){
      //printf("%d %d\n", ans[j], save[j]);
      
      ans[j+1]=save[j] - ans[j];
      if(check[ans[j+1]] == 1 || ans[j+1]<=0){
        okay = false;
        break;
      }
    }
  }
  if (okay == true){
    for(i=0;i<N;i++){
      printf("%d", ans[i]);
    }
  }
}
