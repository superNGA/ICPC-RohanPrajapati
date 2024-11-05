#include <iostream>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < n - i - 1; a++)
        {
            cout << " ";
        }
        for (int a = 0; a < i + 1; a++)
        {
            cout << "#";
        }
        cout << "\n";
    }
}

int main(void)
{
    return 0;
}
