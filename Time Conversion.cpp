#include<iostream>
#include<vector>
#include<string>

using namespace std;

//format for 's' : "12:00:00AM"
string timeConversion(string s)
{
	int LengthOfTime = s.length(); //Finding Length
	if (LengthOfTime != 10) //Error checking
	{
		cout << "Wrong Input\n";
		return s;
	}

	//Convert into Integer
	int Time = 0;
	if (s[0] == '1') Time += 10;
	Time += s[1] - '0';

	cout << Time<<endl;

	//Adjusting Time
	if (s[LengthOfTime - 2] == 'A' && Time == 12)
	{
		Time -= 12;
		s[0] = (Time / 10) + '0';
		s[1] = (Time%10) + '0';
	}
	else if (s[LengthOfTime - 2] == 'P' && Time != 12)
	{
		Time += 12;
		s[0] = (Time / 10) + '0';
		s[1] = (Time % 10) + '0';
	}
	
	//Removing Format
	s = s.substr(0, 8);

	return s;
}

int main(void)
{
	string s = "11:59:59PM";
	cout << timeConversion(s);

	return 0;
}