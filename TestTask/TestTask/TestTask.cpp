#include <iostream>
#include <fstream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const int n = 500;

void findPair(int nums[], int n, int target);

int main()
{
	setlocale(LC_ALL, "");
	int nums[n];
	fstream file;
	file.open("Input task1.txt");
	if (file) {
		for (int i = 0; i < n; i++)
		{
			file >> nums[i];
		}
	}

	int target = 2023;
	cout << "Первая подходящая пара ульев: " << endl;
	findPair(nums, n, target);
	file.close();

	return 0;
}

void findPair(int nums[], int n, int target)
{
	unordered_map<int, int> map;

	for (int i = 0; i < n; i++)
	{
		if (map.find(target - nums[i]) != map.end())
		{
			cout << nums[i] << endl << nums[map[target - nums[i]]] << "\n";
			return;
		}

		map[nums[i]] = i;
	}

	cout << "Pair not found";
}