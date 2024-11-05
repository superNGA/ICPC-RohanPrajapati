#include<iostream>
#include<vector>

using namespace std;

int sample(vector<vector<int>> arr)
{
	if (arr.size() == false) return 0;
	//else if (arr.size() == 1) return arr[0][0];

	int len = arr.size();
	int answer = 0;

	for (int i = 0; i < len; i++)
	{
		answer += arr[i][i] - arr[i][len - 1 - i];
	}

	if (answer < 0) answer *= -1;

	return answer;
}

int main(void)
{
	vector<vector<int>> samp = {
		{11,2,4},
		{4,5,6},
		{10, 8, -12}
	};

	cout << sample(samp);

	return 0;
}