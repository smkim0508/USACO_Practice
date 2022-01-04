#include <iostream>

typedef struct apple{
  int x;
  int y;
} apple;

typedef struct position{
  int x;
  int y;
} position;

typedef struct direction{
  int s;
  int d;
} direction;

int ChangeDir(int);
int UpdatePosition();
int CheckTouch(int);

int k;
int theta, a = 0;
position p[100];
apple app[100];
direction dir[100];

int main() {
 int N;
 int i,j = 0;
 int K, L;
 int checktouch = 0;
 int seconds;

 scanf("%d", &N);
 scanf("%d", &K);
 for (i=0;i<K;i++){
   scanf("%d %d", &app[i].x, &app[i].y);
 }
 scanf("%d", &L);
 for (i=0;i<L;i++){
   scanf("%d %d", &dir[i].s, &dir[i].d);
 }
 i = 0;
 while (checktouch == 0){
   if (dir[j].s == i) {
     ChangeDir(j);
     j++;
   }
   UpdatePosition();
   checktouch = CheckTouch(N);
   i++;
   seconds++;
 }
 printf("%d", seconds);
}

int ChangeDir(int j){
  if (dir[j].d == 'L') {
    theta += 90;
  }
  else if (dir[j].d == 'D') {
    theta -= 90;
  }
  return 0;
}

int UpdatePosition(){
  int i;
  for (i=0; i<a; i++) {
    
  }
}