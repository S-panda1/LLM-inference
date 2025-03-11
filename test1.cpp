#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,2,3,4};

    for(auto i : arr)
    {
        cout<<i+1<<endl;
    }

    return 0;
}
