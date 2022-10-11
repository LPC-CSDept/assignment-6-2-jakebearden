//lab 6-2

#include <iostream>
using namespace std;

void printout(int result);
int nthpowern(int n);
int nthpowerp(int n);
int main()
{
    int i, n, result;
    cout << "Enter input" << endl;
    cin >> n;

    if (n>0)
    {
        result = nthpowerp(n);
        printout(result);
    }

    else if (n<0)
    {
        result = nthpowern(n);
        printout(result);
    }

    else
    {
        result = 1;
        printout(result);
    }
    
}

int nthpowerp(int n)
{
    int i, result ;

    for (i = 1; i < n; i++)
    {
        result *= 2;
    }
    return result;

}

int nthpowern(int n)
{
    int i, result;

    for (i = 1; i < n; i++)
    {
        result = 1/2;
        result *=  1/2;
    }
    return result;
}

void printout(int result)
{
    cout << result << endl;
}