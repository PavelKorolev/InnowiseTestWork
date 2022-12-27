#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int A[] = { 1, 1, 3, 7, 9 };
	int B[] = { 1, 4, 12, 12, 76 };

	int countA = sizeof(A) / sizeof(A[0]);
	int countB = sizeof(B) / sizeof(B[0]);

	int countC = countA + countB;

	int* C = new int[countC];

	for (int k = 0; k < countC; k++)
	{
		if (k < countA) { C[k] = A[k]; }
		else { C[k] = B[k - countA]; }
	}

	sort(C, C + countC);

	cout << "Результат объединения двух отсортированных массивов в один массив, также упорядоченный по возрастанию: " << endl;

	for (int i = 0; i < countC - 1; i++)
	{
		cout << C[i] << ", ";
	}
	cout << C[countC - 1];
	cout << endl;
}