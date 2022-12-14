#include<iostream>
using namespace std;
int main() 
{
   int i,j,k;
   int n =3; // declare variables and matrixes as
 
   float a[4][4] = {{0,0,0,0},{1,2,5,4},{5,3,7,1},{3,7,5,9}};
   float b,x[10];
   //to find the elements of diagonal matrix
   for(j=1; j<=n; j++) {
      for(i=1; i<=n; i++) {
         if(i!=j) {
            b=a[i][j]/a[j][j];
            for(k=1; k<=n+1; k++) { 
               a[i][k]=a[i][k]-b*a[j][k];
            }
         }
      }
   }
    
   cout<<"\nThe solution is:\n";
   for(i=1; i<=n; i++) {
      x[i]=a[i][n+1]/a[i][i];
      cout<<"x"<<i << "="<<x[i]<<" ";
   }
   return 0;
}