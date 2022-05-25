#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int max_profit = 0;
    int least = INT_MAX;
    for(int i=0; i<prices.size(); i++){
        if(least > prices[i]) {
            least = prices[i];                          //keeping the least element updated...
        }else if((prices[i] - least) > max_profit){
            max_profit = prices[i] - least;             // finding the profit...
        }
    }
    
        
    return max_profit;
}
int main() {
    vector<int> prices{7,1,5,3,6,4};
    cout<<"max profit "<<maxProfit(prices)<<endl;
    return 0;
}