#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[] = { 1, 1, 3, 7, 9 };
	int b[] = { 1, 4, 12, 12, 76 };
	
	int counta = sizeof(a) / sizeof(a[0]);
	int countb = sizeof(b) / sizeof(b[0]);

	int countc = counta + countb;
	
	int* c = new int[countc];

	
	for (int k = 0; k < countc; k++)
	{
		if (k < counta) { c[k] = a[k]; }
		else { c[k] = b[k - counta]; }
	}

	sort(c, c + countc);

	cout << "sort array" << endl;
	for (int i = 0; i < countc; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
}