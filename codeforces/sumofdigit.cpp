#include<iostream>
using namespace std;
int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int sum = 0;
    int a = n % 10;
    sum += a;
    return sum+sumOfDigits(n / 10);
}
int main(){
    cout<<sumOfDigits(23);

    return 0;
}