#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1 || n == 2) return 1;

    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main()
{
    int n = 5;
    cout << fibonacci(n);
}