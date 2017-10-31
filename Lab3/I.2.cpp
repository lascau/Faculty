#include <iostream>

using namespace std;

int Binary_Search(int A[], int x, int n){

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int middle = left + ((right - left) >> 1);
        if (A[middle] == x)
            return middle;
        else if (x > A[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }

 return -1;
}
int main()
{
    int n = 5;
    int A[] = {1, 4, 7, 9, 13};
    int x = 9;

    cout << Binary_Search(A, x, n);

    return 0;
}
