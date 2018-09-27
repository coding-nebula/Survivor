#include <iostream>

using namespace std;

int find_power(int n)
{
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    return ((n+1)>>1);
}

int main()
{
    int nearest_pow, n;
    cout<<"enter the number of people standing in a line"<<endl;
    cin>>n;
    nearest_pow = find_power(n);
    int dead = 2*(n - nearest_pow) + 1;
    cout<<dead<<" is lucky enough to survive!";
    return 0;
}
