#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
          int size;
          string name;
          long num;
          map<string,long> phonebook;
          cin >> size;
          for(int i = 0; i < size; i++){
              cin >> name;
              cin >> num;
              phonebook [name] = num; 
          }  
          while(cin >> name){
              if(phonebook.find(name) != phonebook.end()){
                //   cout << name << "=" << phonebook.find(name)->second;
                  cout << name << "=" << phonebook.find(name)-> second << endl;
              }
              else{
                    cout << "Not found" << endl;
              }
          }
    return 0;
}


