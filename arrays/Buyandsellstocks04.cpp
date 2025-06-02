#include <iostream>
#include <vector>
using namespace std;

//brute force approach with TC O(n*2)
//"One brute-force approach is to use two loops. For each day, try buying on that day, then check all future days for the best selling price. This would take O(n²) time."

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int maxProfit = 0;
            for (int i = 0; i < prices.size(); i++) {
                for (int j = i + 1; i < prices.size(); j++) {
                    maxProfit = max(maxProfit, prices[j] - prices[i]);
                }
            }
            return maxProfit;
        }
    };


//Optimal Approach


class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int minPrice = INT_MAX;
            int maxProfit = 0;
            for(int price: prices){
                if(price < minPrice){
                    minPrice = price;
                }
                else {
                    maxProfit = max( maxProfit, price-minPrice);
                }
            }
            return  maxProfit ;
            
        }
    };