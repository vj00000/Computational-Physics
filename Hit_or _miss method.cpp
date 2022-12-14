#include<iostream>
#include<math.h>
using namespace std;
//differential equation to be solved
float phi_y(float x, float y, float z)
{
   float phi = y*z + cos(x) - (0.5)*sin(2*x);
   return phi;
}

float phi_z(float x, float y, float z)
{
   float phi = y*y + z*z - (1 + sin(x));
   return phi;
}



//h = step size, and initializing x,y,z
int main()
{
   //h = step size, and initializing x,y,z
   float h = 0.4;
   float x = 0;
   float y[5];
   float z[5];
   z[0] =0;
   y[0] =0;
   cout<<"x"<<"       "<<"y"<<"               "<<"z"<<"\n";
   cout<<"___________________________________________"<<endl;

   for(int i =0; i <5;i++)
   {
      x +=h;
      cout<<x<<"   ";
      y[i+1] = y[i] + phi_y(x,y[i],z[i]) * h;
      cout<<y[i]<<"      ";
      z[i+1] = z[i] + phi_z(x,y[i],z[i]) * h;  
      cout<<z[i]<<"\n";

   }


   return 0;



}