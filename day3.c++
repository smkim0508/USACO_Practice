#include <stdio.h>
/*
int main(void) {
  int n;
  int i;
  int a=0;
  scanf("%d",&n);
  for(i=1;i<n+1;i++) {
    a += i;
  }
  printf("%d",a);
  return 0;
}
*/

/*
int main(void) {

int N;
int i;
scanf("%d", &N);
for(i=1;i<N+1;i++){
  printf("%d\n", i);
}
}
*/
/*
int main(void) {

int N;
int i;
scanf("%d", &N);
for(i=N;i>0;i--){
  printf("%d\n", i);
}
}
*/

/*
int main(void) {
  int n;
  int i;
  int a = 0;
  int b = 1;
  int c;
  scanf("%d",&n);
  for(i=0; i<n-1; i++) {
    c = a+b;
    a = b;
    b = c;
  }
  printf("%d", c);
  return 0;
}
*/

/*
int func(int input) {
  int n;
  n = input;
  int i;
  int a = 0;
  int b = 1;
  int c;
  for(i=0; i<n-1; i++) {
    c = a+b;
    a = b;
    b = c;
  }
  return c;
}

int main(void) {
  int n;
  scanf("%d", &n);
  int result = func(n);
  printf("%d", result);
}
*/
/*
int fib(int n) {
  int i;
  int a = 0;
  int b = 1;
  int sum;
  if(n==0) {
    return 0;
  }
  else if (n==1) {
    return 1;
  }
  else {
    for (i=0; i<n-1;i++) {
      sum = a+b;
      a = b;
      b = sum;
    }
    return sum;
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  int result = fib(n);
  printf("%d", result); 

}
*/

/*
int pattern(n) {
  int N = n;
  int i;
  if (N==3) {
    printf("* * *\n");
    printf("*   *\n");
    printf("* * *\n");
    }
  else {
    for(i=0;i<N/3;i++) {
      
    }
  }
  }
}
*/
/*
int main() {
  int M,N;
  scanf("%d %d", &M, &N);
  //printf("%d %d", M, N);
  int i;
  int k;
  int j=0;
  //int array[1000000];
  int check=0;
  for(i=M;i<N;i++){
    check = 0;
   // printf("%d\n", check);
    for(k=1;k<i;k++){
      if(i%k!=0){
        check++;
        break;
      }
    }
   // printf("%d\n", check);
    if(check==0) {
      //array[j]=i;
      printf("%d\n", i);
      //j++;
    }
  }
}
*/
/*
int main() {
  int A, B, V;
  scanf("%d %d %d", &A, &B, &V);
  int days;
  int dist=0;
  while(dist<V){
    dist = dist+A;
    if (dist<V){
      dist = dist-B;
    }
    days++;
  }
  printf("%d", days);
}
*/
/*
int main() {
  int T;
  int n;
  int i;
  int f;
  int k;
  int j;
  int a;
  int cond1=0;
  int cond2=0;
  scanf("%d", &T);

  for (i=0;i<T;i++){
    scanf("%d", &n);
    for (k=1;k<n;k++){
      scanf("%d", &a);
      for (j=1; j<a; j++){
        cond1=0;
        cond2=0;
        for (f=1;f<j;f++){
          if (j%f!=0) {
            cond1++;
            break;
          }
          if ((a-j)%f!=0) {
            cond2++;
            break;
          }
        }
        if (cond1==0 & cond2==0) {
          printf("%d %d \n", j, (a-j));
        }
      }
    }
  }
}
*/
/*
int main() {
  int N;
  scanf("%d", &N);
  int i;
  int j;
  int a;
  int counter=0;
  int check=0;
  for(i=0;i<N;i++){
    check = 0;
    scanf("%d", &a);
    for(j=0;j<a;j++) {
      if(a%j!=0){
        check++;
        break;
      }
    }
    if(check == 0){
      counter++;
    }
  }
  printf("%d", counter);
  return 0;
}
*/