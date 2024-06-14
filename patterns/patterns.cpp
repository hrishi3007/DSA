// https : // www.youtube.com/watch?v=LfgAOZ1kKMw&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=10

// *****
// *****
// *****
// *****
// *****

// #include <iostream>

// using namespace std;

// int main()
// {
//     int row, col;

//     cout << "Enter number of rows and columns: ";
//     cin >> row >> col;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//////////////////////////////////////////////

// *****
// *   *
// *   *
// *   *
// *****

// #include <iostream>

// using namespace std;

// int main()
// {
//     int row, col;

//     cout << "Enter number of rows and columns: ";
//     cin >> row >> col;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

//////////////////////////////////////////////

// *****
// ****
// ***
// **
// *

// #include <iostream>

// using namespace std;

// int main()
// {
//     int row;

//     cout << "Enter number of rows : ";
//     cin >> row;

//     for (int i = row; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     return 0;
// }

//////////////////////////////////////////////

// *
// **
// ***
// ****
// *****

// #include <iostream>

// using namespace std;

// int main()
// {
//     int row;

//     cout << "Enter number of rows : ";
//     cin >> row;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     return 0;
// }

//////////////////////////////////////
//      *
//     **
//    ***
//   ****
//  *****
// ******    (consider spaces also eg ;- on line 131 there are 5 spaces then 1 star)

// #include <iostream>

// using namespace std;

// int main()
// {
//     int row;

//     cout << "Enter number of rows : ";
//     cin >> row;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= row; j++)
//         {
//             if (j <= row - i)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }

/////////////////////////////////////

// 1
// 22
// 333
// 4444
// 55555

// #include <iostream>

// using namespace std;

// int main()
// {
//     int row;

//     cout << "Enter number of rows : ";
//     cin >> row;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }

//         cout << endl;
//     }
//     return 0;
// }

////////////////////////////////

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #include <iostream>

// using namespace std;

// int main()
// {
//     int row;
//     int cnt = 1;

//     cout << "Enter number of rows : ";
//     cin >> row;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << cnt;
//             cnt++;
//         }

//         cout << endl;
//     }
//     return 0;
// }

////////////////////////////////////////
// BUTTERFLY PATTERN (n=4)

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter number of rows : ";
    cin >> n;

    // upper part
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    // lower part
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) // first triangle
        {
            cout << "*";
        }

        int space = 2 * n - 2 * i;       // no. of spaces per row
        for (int j = 1; j <= space; j++) // spaces
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) // second triangle
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}