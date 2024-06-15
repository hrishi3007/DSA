// www.youtube.com/watch?v=k9OlCJFy5yo&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=11

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// METHOD 1
//  #include <iostream>
//  using namespace std;

// int main()
// {

//     int n;
//     cout << "enter n :-";
//     cin >> n;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// METHOD 2
//  #include <iostream>
//  using namespace std;

// int main()
// {

//     int n;
//     cout << "enter n :-";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/////////////////////////////////////////////////
// 1
// 0 1
// 1 0 1
// 0 1 0 1

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "enter n";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 cout << "1" << " ";
//             }
//             else
//             {
//                 cout << "0" << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

/////////////////////////////////////////////////

//     * * * * * (4 spaces)
//    * * * * * (3 spaces)
//   * * * * * (2 spaces)
//  * * * * * (1 spaces)
// * * * * * (0 spaces)

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "enter n :- ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int g = 1; g <= n - i; g++) //for spaces
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n; j++) // for coloums printing
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

///////////////////////////////////////////////

//     1         (4 spaces)
//    1 2         (3 spaces)
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// logic :- first print spaces and then the other numbers

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "enter n :- ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++) //for spaces
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++) //for numbers
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

///////////////////////////////////////////////

//         1                          (8 spaces)
//       2 1 2                        (6 spaces)
//     3 2 1 2 3                      (4)
//   4 3 2 1 2 3 4                    (2)
// 5 4 3 2 1 2 3 4 5

// the problem is broke into 3 parts (spaces + left number + right numbers)

//         1
//       2 1                        2
//     3 2 1                        2 3
//   4 3 2 1             +          2 3 4
// 5 4 3 2 1                        2 3 4 5
// left numbers                  // right numbers

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "enter n :- ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         int k=i;
//         for (int j = 1; j <= 2*(n - i); j++) // for spaces
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++) // for left numbers
//         {

//             cout << k << " ";
//             k--;
//         }
//         for (int j = 2; j <= i; j++) // for  right numbers
//         {
//             cout<<j<<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//////////////////////////////////////////////

//       *                      (6 spaces)
//     * * *                    (4 spaces)
//   * * * * *                  (2 spaces)
// * * * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
// n=4
// split in 2 parts upper triangle and lower triangle
// upper triangle has 2 parts (spaces + stars)
// spaces = 1 to 2*(n-row no.)
// stars = 1 to 2*row no.  -  1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter n :- ";
//     cin >> n;

//     // upper triangle
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * (n - i); j++) // spaces
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= (2 * i) - 1; j++) // stars
//         {
//             cout << "*" << " ";
//         }

//         cout << endl;
//     }

//     // lower triangle
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= 2 * (n - i); j++) // spaces
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= (2 * i) - 1; j++) // stars
//         {
//             cout << "*" << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////

// enter n :- 9
//   *   *
//  * * * *
// *   *   *

// logic :- excluding row 2
// all the stars at at postion where the sum(i+j) is divisible by 4 (((i+j%4==0)))
// on row 2 print stars at only (coloumn %4==0)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n :- ";
    cin >> n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
