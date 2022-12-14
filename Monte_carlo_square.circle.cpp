/******************************************************************************
    NAME -
    ROLL -

*******************************************************************************/

#include <iostream>
#include <time.h>
#include <math.h>
#include <fstream>
using namespace std;

float Calculate(float a,int k)
{
    int n = 0;
    srand( (unsigned)time( NULL ) );
    for (int i = 0; i < k; i++)
    {
        float x = (float) rand()/RAND_MAX;
        float y = (float) rand()/RAND_MAX;
        if(x*x <= (1 - y*y ))
        n++;
    }
    return 4*(float(n))/(float(k)) ;
}

int main()
{
    float a;
    for(int a=1; a<=10;a++)
    {
        cout<<a<<endl;
        for(int i=1; i<2000; i++)
        {
            cout<<"   "<<Calculate(a,i)<<"\n";
        }
        cout<<endl;
    }
    return 0;
}
