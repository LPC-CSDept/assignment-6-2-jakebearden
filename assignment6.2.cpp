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
    }

    else if (n<0)
    {
        result = nthpowern(n);
    }

    else
    {
        result = 1;
    }
    printout(result);
}

int nthpowerp(int n)
{
    int i, result;

    result = 1;

    while (n > 0)
    {
      result *= 2;
      n -=1; 
    }
    
    return result;

}

int nthpowern(int n)
{
    int i, result;

    result = 1;

    while (n > 0)
    {
      result *= 1/2;
      n -=1; 
    }
    
    return result;

}

void printout(int result)
{
    cout << result << endl;
    
}