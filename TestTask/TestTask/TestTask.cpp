#include <iostream>
#include <algorithm>
#include <fstream>
#include <unordered_map>
using namespace std;
const int n = 500;

void findPair(int nums[], int n, int target)
{
    // создаем пустую карту
    unordered_map<int, int> map;

    // делаем для каждого элемента
    for (int i = 0; i < n; i++)
    {
        // проверяем, существует ли пара (nums[i], target - nums[i])

        // если разница была видна раньше, выводим пару
        if (map.find(target - nums[i]) != map.end())
        {
            cout << nums[map[target - nums[i]]] << endl << nums[i] << "\n";
            return;
        }

        // сохраняем индекс текущего элемента на карте
        map[nums[i]] = i;
    }

    // доходим сюда, если пара не найдена
    cout << "Pair not found";
}

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