#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int MoneyWon(int,int,int);

int main(){
  int N;
  int a,b,c;
  int i;
  int money;
  int max = 0;
  scanf("%d", &N);
  for(i=0;i<N;i++){
    scanf("%d %d %d", &a,&b,&c);
    money = MoneyWon(a,b,c);
    //printf("%d", money);
    if (money>max){
      max = money;
    }
  }
  printf("%d", max);
}

int MoneyWon(int a, int b, int c){
  int same;
  int points = 0;
  int money;
  if (a == b){
    points += 1;
    same = a;
  }
  if (b == c){
    points += 1;
    same = b;
  }
  if (c == a){
    points += 1;
    same = c;
  }
  if (points == 3){
    money = 10000+same*1000;
  }
  if (points == 1){
    money = 1000+same*100;
  }
  if (points == 0){
    money = max(max(a,b),c)*100;
  }
  return money;
}