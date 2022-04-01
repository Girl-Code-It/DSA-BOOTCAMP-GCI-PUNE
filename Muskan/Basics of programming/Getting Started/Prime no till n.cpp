#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

   for(int i=low;i<=high;i++){
        int factors=0;
      
        for(int div=2; div*div<=i;div++){
            if(i%div==0){
                factors++;
                break;
            }
        }
        if(factors==0){
            cout<<i<<endl;
         }
    

    }

}
