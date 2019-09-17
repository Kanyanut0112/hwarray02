#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[2][3];
	for(int i=0; i<3 ; i++)
	{
		for (int j=0 ; j<2 ; j++)
		{
		cout << "Input a[" << i << "][" << j << "] : ";
		cin >> a[i][j];
		}
	}
	cout << endl;
	cout << "--------------------------\n";
	for(int i = 0 ; i < 2 ; i++)
	{
		cout << endl;
		for(int j = 0 ; j < 3; j++)
		{
		cout <<  a[i][j] << "\t" ;
		}
	}
	cout << endl;

	cout << "------------------------\n";
	for(int j= 0 ; j < 3; j++)
	{
		cout << endl;
		for(int i = 0 ; i < 2 ; i++)
		{
			cout << a[i][j] << "\t";
		}
	}
	cout << endl;
	return 0;
}