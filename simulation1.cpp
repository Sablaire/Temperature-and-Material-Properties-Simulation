
#include<iostream>
#include<math.h>
#include<fstream>
#define Th 8.3
#define gamma 1.0
#define H 1000
#define rho 1.219
#define c 1.214
#define k 5
using namespace std;

int main()
{
	int i, z;
	double T = 0.0, P0 = 0.0;
	ofstream fout("result.xlsx");
	for(i=0;i<3;i++)
	{
		if (i == 0) P0 = -0.2;
		if (i == 1) P0 = 0.0;
		if (i == 2) P0 = 0.2;
		for(z = 0;z <= 1000; z+= 100)
		{
			T = Th + gamma * (H - z) + P0/(rho * c * k) + (H - z) * (H - z)/(2 * H);
			fout << T << '\t' << z << endl;
		}
	}
	return 0;
}
