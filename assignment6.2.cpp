//lab 6-2

#include <iostream>
using namespace std;

void printout(float result);
float nthpowern(int n);
int nthpowerp(int n);

int main()
{
    int i, n; 
    float result;
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

float nthpowern(int n)
{
    float result;

    result = 1;

    while (n < 0)
    {
      result *= 1.0 / 2.0;
      n +=1; 
    }
    
    return result;

}

void printout(float result)
{
    cout << result << endl;
    
}