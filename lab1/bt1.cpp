#include <iostream>
using namespace std;
int main()
{
    int S,
        H,
        distance = 0;

    cout << "Hay nhap toc do cua ban di: ";
    while(!(cin >> S) || (S < 0))
    {
        cout << "LOI: so toc do phai la: \n"
             << "lon hon 0 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "Hay nhap so gio bam di: ";
    while(!(cin >> H) || (H < 1))
    {
        cout << "LOI: so gio ban phai di la \n"
             << "Lon hon 1 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "Gio va quang duong ban da di duoc la: " << endl;

    for(int i = 0; i < H; i++)
    {
        distance += S;
        cout << "   " << (i + 1) << "   " 
                << distance 
                << endl;
    }

    return 0;
}