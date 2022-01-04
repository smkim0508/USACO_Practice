#include <stdio.h>
/*
int main(void) {
  int i;
  int n;
  int k;
  int count;
  int count_2 = 0;
  int array[1000];
  int remainder = 0;
  for (i=0;i<10;i++) {
    scanf("%d",&n);
    array[i] = n % 42;
  }
  for (i=0;i<10;i++) {
    count = 0;
    remainder = array[i];
    for (k=9;k>i;k--) {
      if(array[k]==remainder) 
      {
       count ++;
      }
    }
    if (count == 0) {
      count_2 ++;
    }
  }
  printf("%d", count_2);
}
*/

/*
int Largest(int arr[]);

int main(void) {
  int array[9];
  int i;
  int count;
  int largest_n;
  for (i=0;i<9;i++) {
      scanf("%d", &array[i]);
  }
  largest_n = Largest(array);
  //count = Nth(array, largest_n);

  printf("%d\n %d", largest_n, array[0]);
}

int Largest(int arr[]) {
  int i;
  int val = arr[0];
  int index = 1;
  for (i=1;i<9;i++) {
    if (val<arr[i]) {
      val = arr[i];
      index = i+1;
    } 
  }
  arr[0] = index;
  return val;
}
*/

/*
int main(void) 
{
  int a = 2005;
  int* pA = &a;

  printf("pA : %o\n", pA);
  printf("&a : %o\n", &a);

  (*pA)++;

  printf("a : %d \n",a);
  printf("*pA : %d \n", *pA);

  return 0;
}
*/

int main(void) {
  int a;
  scanf("%d", &a);
  int* pA = &a;
  (*pA) += 5;

  printf("%d\n", *pA);
  printf("%d", a);
}