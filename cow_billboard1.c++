int area[2000][2000];

int main() {
  int a,b,c,d;
  //int e,f,g,h;
  //int x,y,z,w;
  int i,j,k;
  int billboard = 0;
  for (i=0;i<3;i++){
    scanf("%d %d %d %d", &a,&b,&c,&d);
    for (j=a+1000;j<c+1000;j++){
      for (k=b+1000;k<d+1000;k++){
        if (i<2){
            area[k][j] = 1;
        }
        else {
          area[k][j] = 0;
        }
      }
    }
  }
  for (i=0;i<2000;i++){
    for (j=0;j<2000;j++){
      billboard += area[i][j];
    }
  }
  printf("%d", billboard);
}
//108 ms
