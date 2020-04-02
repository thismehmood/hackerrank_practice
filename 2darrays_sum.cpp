 #include <bits/stdc++.h>
#include <cstddef>

 using namespace std;
                   
int hourglass(vector<vector<int>> arr){
    int sum_temp = 0;
    int max_sum = -200;
    for(int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            sum_temp = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]
            +arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            
            if(sum_temp > max_sum){
                max_sum =  sum_temp;
         } 
      }
    }
    return max_sum;       
}
                   
int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                
    }
    int result = hourglass(arr);
           cout << result << endl;
        
    return 0;
}

