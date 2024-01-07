#include <iostream>
#include <cstdio>
#include <cstdio>
using namespace std;


int main()
{
    int c, ex;

    while (1)
    {
        c = getch();

        if (c && c != 224)
        {
            cout << endl << "Not arrow: " << (char)c << endl;
        }
        else
        {
            switch (ex = getch())
            {
                case KEY_UP     /* H */:
                    cout << endl << "Up" << endl;//key up
                    break;
                case KEY_DOWN   /* K */:
                    cout << endl << "Down" << endl;   // key down
                    break;
                case KEY_LEFT   /* M */:
                    cout << endl << "Left" << endl;  // key left
                    break;
                case KEY_RIGHT: /* P */
                    cout << endl << "Right" << endl;  // key right
                    break;
                default:
                    cout << endl << (char)ex << endl;  // not arrow
                    break;
            }
        }

    }
    return 0;
}