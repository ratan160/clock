#include <iostream>
using namespace std;

int main()
{
    int h, m, s;
    cout << "enter the following data " << endl;
    cin >> h >> m >> s;
    for (h; h < 24; h++)
    {
        for (m; m <= 59; m++)
        {
            for (s; s <= 59; s++)
            {
                cout << h << m << s;
                if (h < 12)
                {
                    cout << " AM" << endl;
                }
                else
                {
                    cout << " PM" << endl;
                }
            }
            s = 0;
        }
        m = 0;
    }
    return 0;
}