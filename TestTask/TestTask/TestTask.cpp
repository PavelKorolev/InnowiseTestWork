#include <iostream>
#include <fstream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const int n = 500;

void findPair(int nums[], int n, int target);

int main()
{
	int nums[n];
	fstream f;
	f.open("Input task1.txt");
	if (f) {
		for (int i = 0; i < n; i++)
		{
			f >> nums[i];
		}
	}

	int target = 2023;
	findPair(nums, n, target);
	f.close();

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