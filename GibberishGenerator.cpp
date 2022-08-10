#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <windows.h>
#define MARK_AS_INFINITY -1
#define ASCII_VISIBLE_CHAR 94
using namespace std;
using namespace std::chrono;
void DisplayMenu()
{
    cout << "========== Menu ==========" << endl;
    cout << "Choose an option for the length of the message:" << endl;
    cout << "A. 1" << endl;
    cout << "B. 2" << endl;
    cout << "C. 5" << endl;
    cout << "D. 10" << endl;
    cout << "E. Infinity" << endl;
    cout << "F. Custom" << endl;
}
char GetRandomChar()
{
    srand(duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count());
    /*
     * Use "seconds" instead of "milliseconds" if you want to print a character per second.
     * Use "microseconds" instead of "milliseconds" if you want to print a character per microsecond.
     * Use "nanoseconds" instead of "milliseconds" if you want to print a character per nanosecond.
     */
    char a = rand() * 1000 % ASCII_VISIBLE_CHAR + 34;
    return a;
}
int main()
{
    DisplayMenu();
    char opr;
    int len;
    cin >> opr;
    switch (opr)
    {
        case 'A':
            len = 1;
            break;
        case 'B':
            len = 2;
            break;
        case 'C':
            len = 5;
            break;
        case 'D':
            len = 10;
            break;
        case 'E':
            len = MARK_AS_INFINITY;
            break;
        case 'F':
            cin >> len;
            break;
        default: break;
    }
    system("cls");
    if (len == -1)
    {
        while (true)
        {
            cout << GetRandomChar();
            Sleep(1);
            /*
             * Second: 1000.
             * Microsecond: 0.001.
             * Nanosecond: 0.000001.
             */
        }
    }
    else
    {
        while (len--)
        {
            cout << GetRandomChar();
            Sleep(1);
        }
    }
    return 0;
}
