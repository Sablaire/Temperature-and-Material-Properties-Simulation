#include<iostream>
#include<math.h>
#include<fstream>
#define Pi 3.14159
#define T 10
#define g 9.78
#define omega 0.1
#define e 0.0019
#define m 0.000011
#define rho 1.219
#define c 1.214
using namespace std;

int main() 
{
	int i;
	double k = 0.0, cG = 0.0, P0 = 0.0, H = 0.0;
	ofstream fout("result.xlsx");
	for(i=0;i<3;i++)
	{
		if (i == 0) P0 = -0.2;
		if (i == 1) P0 = 0.0;
		if (i == 2) P0 = 0.2;
		for(cG = 0;cG <= 25;cG += 5)
		{
			k = m / omega * cG * cG * (1 + g / T * Pi / (2 * rho * c * omega * P0 / cG / cG);
			H = m * Pi * e * cG * 100 / omega / omega / k;
			fout << k << '\t' << cg << "\t\t" << h << '\t' << cg * 100 << endl;
		}
	}
	return 0;
}
