#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int birthdayCakeCandles(vector<int> candles)
{
	sort(candles.begin(), candles.end());
	unsigned long long int counter = 0, Length = candles.size();

	for (int i = Length - 1; i >= 0; i--)
	{
		if (i == Length-1)
		{
			counter++;
			continue;
		}
		if (candles[i] == candles[i + 1]) counter++;
	}

	return counter;
}

int main(void)
{
	vector<int> Sample = { 3,2,1,3 };
	cout << birthdayCakeCandles(Sample);

	return 0;
}