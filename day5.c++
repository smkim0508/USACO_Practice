#include <stdio.h>
/*
int Add(int, int);
int Sub(int, int);
int Mul(int, int);
float Div(int, int);

int main(void) {
  int a = 5;
  int b = 2;
  int c = Add(a,b);
  printf("%d\n", c);
  c = Sub(a,b);
  printf("%d\n", c);
  c = Mul(a,b);
  printf("%d\n", c);
  float d = Div(a,b);
  printf("%f\n", d);
}

int Add(int a, int b) {
  int result = a+b;
  return result;
}
int Sub(int a, int b) {
  int result = a-b;
  return result;
}
int Mul(int a, int b) {
  int result = a*b;
  return result;
}
float Div(int a, int b) {
  if (b == 0) {
    printf("error");
    return 0;
  }
  float result = (float)a/b;
  return result;
}
*/

/*
int main(void) {
  int N;
  int i;
  scanf("%d", &N);
  int array[1000000];
  for (i=0;i<N;i++) {
    scanf("%d", &array[i]);
    //printf("%d\n", array[i]);
  }
  int min;
  int max;
  min = array[0];
  max = array[0];
  for(i=1; i<N;i++) {
    if (min>array[i]) {
      min = array[i];
    }
    if (max<array[i]) {
      max = array[i];
    }
  }
  printf("Min is %d\t", min);
  printf("Max is %d", max);
}
*/
/*
int main(void) {
  int C;
  float avg = 0.0f;
  int score;
  int count = 0;
  int array[1000];
  scanf("%d", &C);
  int i;
  int j;
  for (i=0; i<C; i++) {
    scanf("%d", &array[i]);
    avg = 0.0f;
    count = 0;
    for (j=1; j<array[0]; j++) {
      avg += array[i];
       //printf("%d\t", array[i]);
    }
    avg = avg/array[0];
    for (j=1; j<array[0]; j++) {
      score = array[i];
      if(score>avg) {
      count++;
    }
    }
    //printf("%d\n", count/array[0]);
  }
}
*/

float calc_avg(int arr[]) {
  int i;
  int score;
  int count;
  float avg = 0.0f;
  for (i=1; i<arr[0]; i++) {
    avg += arr[i];
  }
  avg = avg/arr[0];
  for (i=1; i<arr[0]; i++) {
    score = arr[i];
    if(score>avg) {
      count++;
    }
  }
  return count/arr[0];
}



int main (void) {
  int C;
  int array[1000];
  int i;
  int k;
  int score;
  scanf("%d", &C);
  for (i=0; i<C; i++) {
    scanf("%d", &array[0]);

    for (k=1; k<array[0]+1; k++) {
      scanf("%d", &array[k]);
    }
    score = calc_avg(array);
    printf("%d", score);
  }
}