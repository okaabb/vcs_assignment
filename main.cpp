#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> v)
{       
        int sum = 0;
        for (auto i:v) sum += i;
        return sum;
}

int getMin(vector<int> v)
{
        int mn = 1e9;
        for (auto i:v) mn = min(mn, i);
        return mn;
}


int main()
{
        vector<int> myVec = {-5, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        cout << "Sum of my vector is: "<< getSum(myVec) << '\n';
	cout << "Minimum Element of my vector is: "<< getMin(myVec) << '\n';
	return 0;
}
