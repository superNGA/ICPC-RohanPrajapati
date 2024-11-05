#include<iostream>
#include<vector>

using namespace std;

vector<int> sample(vector<int> a, vector<int> b)
{
	vector<int> answer(2,0);
	for (int i = 0; i < 3; i++)
	{
		if (a[i] == b[i]) continue;
		else if (a[i] < b[i]) answer[1]++;
		else answer[0]++;
	}
	return answer;
}

int main(void)
{
	return 0;
}