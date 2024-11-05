#include<iostream>
#include<vector>

using namespace std;

void MinMax(vector<int> arr)
{
	unsigned long long int max = 0, sum=0;
	for (auto x : arr) sum += x;
	unsigned long long int min = sum;
	for (auto x : arr)
	{
		sum -= x;

		if (sum < min) min = sum;
		if (sum > max) max = sum;

		sum += x;
	}
	cout << min << " " << max;
	return;
}

int main(void)
{
	vector<int> sample = { 256741038 ,623958417 ,467905213 ,714532089, 938071625 };
	MinMax(sample);
	
	return 0;
}