#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int remainder;
    int prv , cr = 0;

     while (n!=0)
      {
        remainder = n%2;
        n /= 2;
        if(remainder == 0)
        {
            if(prv < cr)
            {
                prv = cr;
            }
            cr = 0;
        }
        else {
                cr++;
        }
      }     
        cout <<(prv > cr ? prv : cr) <<endl;

  return 0;
}

