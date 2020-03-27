#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
      long long factorial = 1;
       for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
      return factorial;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}


