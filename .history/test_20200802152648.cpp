#include<iostream>
#include<conio.h>

using namespace std;

// int fact(int);
// int main()
// {
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     cout << num << " factorial is " << fact(num) << endl;
// }

// int fact(int a)
// {
//     if (a > 1)
//     {
//         return fact(a - 1)*a;
//     }
//     else
//     {
//         return 1;
//     }
    
// }

// void findMinMax(int a[], int n)
// {
//     int min,max;
//     min = a[0];
//     max = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (min > a[i])
//         {
//             min = a[i];
//         }
//         if (max < a[i])
//         {
//             max = a[i];
//         }
//     }
//     cout << "The minimum is " << min << " and the maximum is " << max << endl;
// }
// int main()
// {
//     int n,arr[10];
//     cout << "Enter the size of array(max = 10): ";
//     cin >> n;
//     for(int i = 0; i< n; i++)
//     {
//         cout << "Enter the number: ";
//         cin >> arr[i];
//     }
//     findMinMax(arr,n);

//     return 0;
// }

// int natnum(int a)
// {
//     if (a <= 50)
//     {
//         cout << a << " ";
//         natnum(a+1);
//     }
//     return 0;
// }
// int main()
// {
//     int n = 1;
//     cout << "The natural number from 1 to 50: " << endl;
//     natnum(n);
// }

// int sum(int a)
// {
//     if (a > 1)
//     {
//         return sum(a-1)+a;
//     }
//     else
//     {
//         return 1;
//     }
    
// }
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     cout << "The summation from 1 to " << n << " is " << sum(n) << endl;
// }

// int fibonaci(int num)
// {
//     if (num == 0 || num == 1)
//     {
//         return num;
//     }
//     else
//     {
//         return (fibonaci(num -1)+fibonaci(num -2));
//     }
// }
// int main()
// {
//     int n,i = 0;
//     cout << "Enter the number in term of serie: ";
//     cin >> n;
//     cout << "Fibonacci serie: " << endl;
//     while (i <= n)
//     {
//         cout << fibonaci(i) << " ";
//         i++;
//     }
// }

// int countDigit(int a)
// {
//     static int ctr = 0;
//     if (a != 0)
//     {
//         ctr ++;
//         countDigit(a/10);
//     }
//     return ctr;
// }
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     cout << n << " have " << countDigit(n) << " digits" << endl;
// }

int prime(int a)
{
    bool status = 
    for (int i = 2; i < a/2; i++)
    {
        if (a % i == 0)
        {
            ctr++;
            break;
        }
    }
}
int main()
{
    
}