#include<iostream>
using namespace std;
int maximumMultipleSum(int n) {
    int y;
    int max1 = -1; // Move this outside the for loop!
    for(int x=2; x<=n; x++) {
        int i=1;
        int sum=0;
        while(x*i <= n) {
            sum += (x*i);
            i++;
    }
        if(max1 < sum) {
            max1 = sum;
            y = x;
        }
    }
    return y;
}
int main(){
    cout<<maximumMultipleSum(7); // Example input
    return 0;
}