#include<iostream>
#include<vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
	vector<int> answer(0);

	for (auto x : grades)
	{
		if (x < 10) continue;
		if (x <= 37)
		{
			answer.push_back(x);
			continue;
		}
		if (x % 5 ==3 || x%5 ==4) answer.push_back(x + (5-x%5));
		else answer.push_back(x);
	}

	return answer;
}

//70 71 72 73 74 75

int main(void)
{
	vector<int> sample = { 4, 73, 67, 38, 33 };
	vector<int> answer = gradingStudents(sample);

	cout << "\n";
	for (auto a : answer)
	{
		cout << a << " ";
	}

	return 0;
}