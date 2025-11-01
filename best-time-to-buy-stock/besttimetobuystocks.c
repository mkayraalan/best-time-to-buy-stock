#include <stdio.h>
#include <limits.h>

int max_profit(int* prices, int prices_size){

    int min_price = INT_MAX; // // initialize with INT_MAX so the first number entered will automatically update min_price.
    int max_profit = 0;

    for(int i = 0; i < prices_size; i++){
        if(prices[i] < min_price){
            min_price = prices[i];
        }
    
        else if(prices[i] - min_price > max_profit){ // if there is a higher profit than current max_profit, update it.
                max_profit = prices[i] - min_price;
        }
    
    }

     return max_profit;
}

int main () {
   
    int days;
    printf("How many days of prices will you enter? = ");
    scanf("%d", &days);

    int prices[days];

    printf("Enter %d prices (separated by spaces):\n", days);
    for(int i = 0; i < days; i++){
        scanf("%d", &prices[i]);
    }

    int result = max_profit(prices, days);
    printf("Maximum profit: %d\n", result);



    return 0;
}