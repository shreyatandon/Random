#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int random = rand();
	double maxint = RAND_MAX;
	double dd = rand() / RAND_MAX;
	//cout << random << endl;
	cout << dd << endl;

	getchar();

    return 0;
}