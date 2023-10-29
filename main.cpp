#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> v)
{       
        int sum = 0;
        for (auto i:v) sum += i;
        return sum;
}

double getAverage(vector<int> v)
{
	if (v.empty()) return 0;
        double sum = 0;
        for (auto i:v) sum += i;
        return sum / ( 1.0 * (int) v.size());
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
	cout << "Average Sum of my vector is: "<< getAverage(myVec) << '\n';
	cout << "Minimum Element of my vector is: "<< getMin(myVec) << '\n';
	return 0;
}
