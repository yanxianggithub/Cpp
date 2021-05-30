//
// Created by asus on 2021/5/27.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * @param num: the num
     * @return: the array subject to the description
     */
    vector<int> calculateNumber(int num) {
        // Write your code here.
        vector<int> number;
        int count=1;
        while(num){
            if(num%2==0) {
                count++;
                num/=2;
            }
            if(num%2==1) {
                number[count++]=1;
                number[0]++;
                num/=2;
            }
        }
        cout<<number[0];
        for(int i=1;i<number.size();++i){
            if(number[i]==1)cout<<','<<i;
        }
    }
};
int main()
{
    Solution s;
    int a;
    cin>>a;
    s.calculateNumber(a);
}
