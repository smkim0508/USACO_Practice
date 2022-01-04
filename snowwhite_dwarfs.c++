#include <iostream>
#include <algorithm>
using namespace std;

int height[9];

int FindFake();
int fake_1,fake_2;
int fake_height;

int main() {
  int i;
  int realdwarfs[7];
  int total_height = 0;
  for (i=0;i<9;i++) {
    scanf("%d", &height[i]);
    total_height += height[i];
  }
  fake_height = total_height - 100;
  sort(height, height+9);
  FindFake();

  for (i=0;i<9;i++) {
    if (i != fake_1 && i != fake_2) {
      printf("%d\n", height[i]);
    }
  }
}

int FindFake() {
  int i,j;
  for (i=0; i<8; i++) {
    for (j=i+1;j<9;j++) {
      if (height[i]+height[j]==fake_height){
          fake_1 = i;
          fake_2 = j;
          return 0;
      }
    }
  }
  return 0;
}
