#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min_price = prices[0] ; 
        int i=1;

        while( i < prices.size()) {
            if(prices[i]< min_price){
                min_price = prices[i];
            }
            else {
                profit = max(profit, prices[i]-min_price);
            }
            i++;
            
        }
        return profit;
    }
    
};