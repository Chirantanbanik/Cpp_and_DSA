#include<iostream>
using namespace std;

int maxProfit(int prices[], int n){
    int profit = 0;   // Initial profit = 0.
    for(int i=1; i<n; i++)  // we traverse through the array
    if(prices[i]>prices[i-1])  // if price[i] > price[i-1]
    profit += (prices[i] - prices[i-1]);  // we will increase the subtraction of previous value.
    return profit;
}

int main(){
    int prices[] = {1, 3, 5, 7, 9}, n = 5;
    cout<<maxProfit(prices, n);
}
