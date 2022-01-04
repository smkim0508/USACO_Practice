#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct coordinate{
  int x;
  int y;
} coordinate;

int main () {
  coordinate c;
  vector<coordinate> input;
  int N;
  int i;
 // int a,b;
  scanf("%d", &N);
  for (i=0; i<N; i++) {
    scanf("%d %d", &c.x, &c.y);
    input.push_back(c);
  }
  for (i=0; i< input.size(); i++){
    printf("%d %d\n", input[i].x, input[i].y);
  }
}
