#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int remainder;
    int previous , current  = 0;

     while (n!=0)
      {
        remainder = n%2;
        n /= 2;
        if(remainder == 0)
        {
            if(previous < current)
            {
                previous = current;
            }
            current = 0;
        }
        else {
                current++;
        }
      }     
        cout <<(previous > cr ? previous : current) <<endl;

  return 0;
}

