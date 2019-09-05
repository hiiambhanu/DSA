#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100], str2[100], str3[200];
    cin >> str1 >> str2;
    int i;
     for (i = 0; str1[i] != '\0'; i++)
        str3[i] = str1[i];
    for (; str2[i - strlen(str1)]; i++)
        str3[i] = str2[i - strlen(str1)];
    str3[i] = '\0';

    cout << str3;
}