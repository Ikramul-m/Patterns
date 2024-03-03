#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;

        for (; space; space--)
        {
            cout << "   ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "  *";
        }

        cout << endl
             << endl;
    }

    return 0;
}

Output :                       
                       *

                    *  *

                 *  *  *

              *  *  *  *

           *  *  *  *  *

        *  *  *  *  *  *

     *  *  *  *  *  *  *

  *  *  *  *  *  *  *  *

    