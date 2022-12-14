
// The Newton-Raphson method is a way to quickly find a good approximation for the root of a real-valued function f(x) = 0.
// It uses the idea that a continuous and differentiable function can be approximated by a straight line tangent to it.
// It uses the formula:
//xn+1 = xn-f(xn)/f '(xn)


#include <iostream>
#include <math.h>
using namespace std;
//function
float function(float x)
{   
     return  pow(x,2)+(3*x)+1 ;
}
//derivative
float derivative(float x)
{   
     return  2*x + 3 ;
}
int main()
{   float a,i=0,z;
	//initial guess
    cout<<"Enter Number ";
    cin>>a;
    do
    {   i++;
        z=a-(function(a)/derivative(a));
        cout<<"The iterative "<<i<<" root is "<<z;    
        a=z;
        cout<<endl;
    }while(abs(function(z))>0.001);
    return 0;
}
