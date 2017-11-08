#include <iostream>
#include <cstring>

using namespace std;

int isPalindrome(char *str)
{
    for (int i = 0, j = strlen(str) - 1; i <= j; i++, j--)
        if (*(str + i) != *(str + j))
            return 0;
    return 1;
}

int main()
{
    char s[]="a";
    cout << isPalindrome(s);

    return 0;
}
