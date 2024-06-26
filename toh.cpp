#include <iostream>
using namespace std;
void toh(int n, char s, char m, char d);
int main()
{
    int n;
    cout << "Enter number of disk: ";
    cin >> n;
    toh(n, 'S', 'M', 'D');

    return 0;
}
void toh(int n, char s, char m, char d)
{
    if (n > 0)
    {
        toh(n-1, s, d, m);
        cout << s << "->" << d << '\n';
        toh(n-1, m, s, d);
    }
}
