#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count = n - i;
        for (int j = count; j >= 1; j--)
        {
            cout << "*"
                 << "   ";
        }
        cout << endl
             << endl
             << endl;
    }

    return 0;
}



Output :    *   *   *   *   *   *   *   *   


*   *   *   *   *   *   *   


*   *   *   *   *   *   


*   *   *   *   *   


*   *   *   *   


*   *   *   


*   *   


*   