#include <iostream>
using namespace std;
int main()
{
    int S,
        H,
        distance = 0;

    cout << "Hãy nhập tốc độ mà bạn đi: ";
    while(!(cin >> S) || (S < 0))
    {
        cout << "LỖI: số tốc độ phải là \n"
             << "lớn hơn 0 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "Hãy nhập số giờ bạn đi: ";
    while(!(cin >> H) || (H < 1))
    {
        cout << "LỖI: số giờ đã di chuyển phải là \n"
             << "lớn hơn 1 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "Hour Distance Traveled " << endl;

    for(int i = 0; i < H; i++)
    {
        distance += S;
        cout << "   " << (i + 1) << "   " 
                << distance 
                << endl;
    }

    return 0;
}