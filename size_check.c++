#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int input[1001];
int save[1001];
int check[1001];

int main () {
  int N;
  int i,j;
  scanf("%d", &N);
  for (i=1;i<N;i++){
    scanf("%d", &input[i]);
  }
  for (i=1;i<input[1];i++){
    memset(check, 0, sizeof(check));
    save[0] = i;
    check[i] = 1;
    bool ok = true;
    for (j=1;j<N;j++){ 
      save[j] = input[j] - save[j-1];
      if (check[save[j]] == 1 || save[j]<=0){
        ok = false;
        break;
      }
      check[save[j]] = 1;
    }
    if (ok){
      for (j=0;j<N;j++){
        printf("%d\n", save[j]);
      }
      return 0;
    }
  }
}
