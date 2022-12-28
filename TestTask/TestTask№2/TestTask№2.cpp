#include <iostream>

using namespace std;

void mergeArrays(int A[], int B[], int countA, int countB, int* C);

int main()
{
	setlocale(LC_ALL, "");
	int A[] = { 1, 1, 3, 7, 9 };
	int B[] = { 1, 4, 12, 12, 76 };

	int countA = sizeof(A) / sizeof(A[0]);
	int countB = sizeof(B) / sizeof(B[0]);

	int countC = countA + countB;

	int* C = new int[countC];

	mergeArrays(A, B, countA, countB, C);

	cout << "Результат объединения двух отсортированных массивов в один массив, также упорядоченный по возрастанию: " << endl;

	for (int i = 0; i < countC - 1; i++)
	{
		cout << C[i] << ", ";
	}
	cout << C[countC - 1];
	cout << endl;
}

void mergeArrays(int A[], int B[], int countA, int countB, int* C)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < countA && j < countB)
	{
		if (A[i] < B[j]) { C[k] = A[i]; i++; k++; }
		else { C[k] = B[j]; j++; k++; }
	}

	while (i < countA) { C[k] = A[i]; i++; k++; }

	while (j < countB) { C[k] = B[j]; j++; k++; }
}