#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "Input the number of elements to store in the array (max 10) : ";
    cin >> num;

    int arr[num];

    cout << "Input " << num << " number of elements in the array:" << endl;
    for(int i=0; i<num; i++)
    {
        cout << "element - " << i+1 << " : ";
        cin >> *(arr+i);
        sum += *(arr+i);
    }

    cout << "The sum of array is : " << sum;

    return 0;
}
