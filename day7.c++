#include <stdio.h>

/*
int main(void) {
  int C;
  int N;
  int i;
  int k;
  float avg;
  float ratio = 0;
  scanf("%d", &C);
  int array [1000];
  for (i=0; i<C; i++){
    avg = 0;
    ratio =0;
    scanf("%d", &N);
    for (k=0; k<N; k++) {
      scanf("%d", &array[k]);
      //printf("%d\n", array[k]);
      avg += array[k];
    }
    avg = avg/N;
    for (k=0; k<N; k++) {
      if (array[k]>avg) {
        ratio += 1;
      }
    }
    ratio = 100*ratio/N;
    printf("%.3f", ratio); 
    printf("%\n");
  } 
}
*/
/*
int main(void) {
  int array[9];
  int i;
  int max = 0;
  int n;
  for (i=0; i<9; i++) {
    scanf("%d", &array[i]);
    if (max < array[i]) {
      max = array [i];
      n = i+1;
    }
  }
  printf("%d\n", max);
  printf("%d", n);
}
*/
/*
int main(void) {
  int a = 2005;
  int* pA = &a;
  int b = 10;

  *pA = 6;
  pA = &b;

  printf("%d\n", a);
  printf("%d\n", *pA);
  printf("%d\n", pA);
  printf("%d", &a);
}
*/
/*
int main(void) {
  int *pA;
  *pA = 10;
  printf("%d", *pA);
  return 0;
}
*/

/*
int main (void) {
  int a[5] = {0,1,2,3,4};
  printf("%d  %d \n", a[0], a[1]);
  printf("%d  %d\n", &a[0], &a[1]);
  printf("%d\n", a);
  return 0;
}
*/
/*
int main (void) {
  int arr[3] = {0, 1, 2};
  int* ptr;

  ptr = arr;

  printf("%d %d %d", ptr[0], ptr[1], ptr[2]);

  return 0;
}
*/

/*
int main () {
  int* ptr1 = NULL;
  char* ptr2 = 0;
  double* ptr3 = 0;

  printf("%d %d %d\n", ptr1++, ptr2++, ptr3++);
  printf("%d %d %d\n", ptr1, ptr2, ptr3);

  return 0;
}
*/
/*
int main() {
  int arr[5] = {1,2,3,4,5};

  int* pArr = arr;
  printf("%d\n", *pArr);
  
  printf("%d\n", *(++pArr));
  printf("%d\n", *(++pArr));
  
  printf("%d\n", *(pArr+1));
  printf("%d\n", *(pArr-2));
}
*/
/*
int main() {
  int arr[2] = {1,2};
  int* pArr = arr;

  printf("%d  %d\n", arr[0], *(arr+1));
  printf("%d  %d\n", pArr[0], *(pArr+1));
}

//arr[i] == *(arr+i);
*/

 struct point_2d {
    int x;
    int y;
}

int main () {
 
  struct point_2d p;
  p.x 
}