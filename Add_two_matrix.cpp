#include <iostream>
using namespace std;

int main()
{
    int d,a[100][100],b[100][100],sum[100][100],i,j;

    cout << "Enter value of dimension: ";
    cin >> d;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < d; ++i)
       for(j = 0; j < d; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < d; ++i)
       for(j = 0; j < d; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
       
    for(i = 0; i < d; ++i)
        for(j = 0; j < d; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < d; ++i)
        for(j = 0; j < d; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == d - 1)
                cout << endl;
        }

    return 0;
}
