#include<bits/stdc++.h>
using namespace std;
 
bool isPrime(int num){
   
    for(int i=2; i<=sqrt(num);i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
 
void removeprimes(vector<int> v)
{

  int vecLength=v.size();
  for(int i=vecLength-1; i>=0; i--){
      if(isPrime(v[i])){
         v.erase(v.begin()+i); 
      }
  }
 
 
  cout << "[";
  for(int i=0; i<v.size(); i++){
 
      cout<<v[i];
      if(i < v.size()-1)
        cout << ", ";
  }
  cout << "]";
 
}
int main()
{
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  removeprimes(v);
}
