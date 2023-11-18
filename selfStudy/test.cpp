#include <stdexcept>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> rom;
    for (int i = 0; i < n; i++)
    {
        int random = rand() % 256;
        rom.push_back(random);
    }

    vector<int> ram(256);
    for (auto &&i : rom)
    {
          cout<<i<<" ";
        ram[i]++;
    }
    cout<<"\n";
    for (int i = 0; i < ram.size(); i++)
    {
        while (ram[i] > 0)
        {
            cout << i << " ";
            ram[i]--;
        }
    }
}