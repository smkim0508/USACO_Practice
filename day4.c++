#include <stdio.h>
/*
int main(void) {
  int n;
  scanf("%d",&n);
  if(n<0) {
    printf("input positive");
  }
  else {
     if(n % 2 == 0) {
      printf("%d is even",n);
     }
     else {  
      printf("%d is odd", n);
    }
  
  }
  return 0;
}
*/
/*
int main(void) {
  int n;
  int i;
  int a=0;
  scanf("%d", &n);
  for(i=2;i<n;i++) {
    if (n % i==0) {
      a += 1;
    }
    else {
      a += 0;
    }
  }
  if (a == 0) {
    printf("%d is prime", n);
  }
  else {
    printf("%d is composite", n);
  }
}
*/

/*
int main(void) {
  int n;
  int i;
  int a=0;
  scanf("%d", &n);
  for(i=2; i<n; i++) {
    if (n % i ==0) {
      a += i;
    }
  }
  if(a+1==n) {
    printf("%d is perfect #", n);
  }
  else {
    printf("%d is not perfect #", n);
  }
}
*/

/*
int Add(int , int);
int Sub(int i, int j);
int Mul(int i, int j);
float Div(int i, int j);

int main(void) {
  int a = 5;
  int b = 2;
  float c;
  c = Add(a,b);
  printf("%f\n",c);
  c = Sub(a,b);
  printf("%f\n",c);
  c = Mul(a,b);
  printf("%f\n",c);
  c= Div(a,b);
  printf("%f\n",c);
  return 0;
}

int Add(int i, int j) {
  int result = i + j;
  return result;
}

int Sub(int i, int j) {
  int result = i - j;
  return result;
}

int Mul(int i, int j) {
  int result = i*j;
  return result;
}

float Div(int i, int j) {
  if(j == 0) {
    printf("j cannot be 0");
    return -1;
  }
  float result = (float)i/j;
  return result;
}

*/

int factorial(int a) {
  if (a == 1){
    return 1;
  }
  else {
    return a*factorial(a-1);
  }
}

int main(void) {
  int n;
  scanf("%d",&n);
  int result = factorial(n);

  printf("%d", result);
}

