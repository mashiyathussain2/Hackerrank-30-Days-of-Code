#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 1; i < 11; i++)
    {
        cout<<n<< " x "<< i<< " = "<< i*n<< endl;
    }

    return 0;
}
