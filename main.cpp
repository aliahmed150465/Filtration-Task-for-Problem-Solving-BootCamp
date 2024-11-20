#include <iostream>
using namespace std;
#include <vector> 

vector<int> primenumber(int n,int m){
    vector<int> primenumber = {};
    for(int i=n;i<=m;i++){
      bool checkPrime = true;
      for(int j=2;j<i;j++){
        if(i%j==0){
            checkPrime = false;
          break;
        }
      }
      if (checkPrime) {
        primenumber.push_back(i);
      }
    }
    return primenumber;
  }
  int main() {     
    vector<int> primenumbers = primenumber(3,100);
    for (int i=0 ;i<primenumbers.size();i++) {
        cout<< primenumbers[i]<<endl;
    }    
    return 0;
  }