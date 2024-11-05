#include<iostream>
#include<vector>

using namespace std;

int sample(vector<int> array)
{
	int counter = 0;
	for (auto a : array) counter += a;
	return counter;
}

int main(void)
{
	return 0;
}