//DAY 1
// There is a broken calculator that has the integer startValue on its display initially. In one operation, you can:

// multiply the number on display by 2, or
// subtract 1 from the number on display.
// Given two integers startValue and target, return the minimum number of operations needed to display target on the calculator.

//IF TARGET IS AN EVEN NUMBER THEN DIVIDE IT BY TWO, OTHERWISE INCREASE TARGET BY 1.

#include <iostream>
using namespace std;

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count = 0;
        while(target>startValue){
            count++;
            if(target%2==1){
                target++;
            }
            else{
                target=target/2;
            }
        }
        return count+startValue-target;
    }
};

int main(){
    Solution s;
    int a = s.brokenCalc(2,3);
    cout<<a;
    return 0;
}