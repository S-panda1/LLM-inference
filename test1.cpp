#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,2,3,4};

    for(auto i : arr)
    {
        cout<<i<<endl;
    }

    return 0;
}
