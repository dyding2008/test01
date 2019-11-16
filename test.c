#include <stdio.h>

// some comments

//using namespace std;




void printMat(int m, int n, const int mat[][n])
{
  //cout<<mat[0][0]<<endl;
    int ii = 0, jj = 0;
    for(ii=0;ii<m;ii++)
        for(jj=0;jj<n;jj++)
            printf("%d\n", mat[ii][jj]);
}



int main()
{
  int aa[3][2] = {{1,2},{3,4},{5,6}};
  
  printMat(3,2,aa);
  //printMat2(aa,3,2);
  
  return 0;
}
