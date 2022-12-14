#include <iostream>
using namespace std;
int main()
{
	float x[50] = {1,2,3,4,5,6,7};
	float y[50] = {0.5, 2.5,2.0,4.0,3.5,6.0,5.5};
	float a1,a0;
	float sum_x =0,sum_y = 0,sum_xy = 0,sum_xx = 0 ;
	int n = 7;
	for(int i = 0;i<n;i++)
	{
		sum_x +=x[i];
		sum_xx +=(x[i]*x[i]);
		sum_y +=y[i];
		sum_xy +=(x[i]*y[i]);
	}
	cout<<sum_y<<" "<<sum_xy<<" "<<sum_xx<<" "<<sum_x<<endl;
	float k = n* sum_xy -sum_x*sum_y;
	float l = n*sum_xx - sum_x*sum_x;
	a1 = k/l;
	a0 =  (sum_y -a1*sum_x)/n;
	cout<<a0<<endl;
	cout<<a1;
	return 0;
}


