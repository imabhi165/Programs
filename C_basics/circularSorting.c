#include <stdio.h>

int canCompleteCircuit(int gas[], int cost[], int n) {
    int totalGas = 0;
    int totalCost = 0;
    int currentGas = 0;
    int startIndex = 0;

    for (int i = 0; i < n; i++) {
        totalGas += gas[i];
        totalCost += cost[i];
        currentGas += gas[i] - cost[i];

        
        if (currentGas < 0) {
            startIndex = i + 1; 
            currentGas = 0; 
        }
    }

    
    return (totalGas < totalCost) ? -1 : startIndex;
}

int main() {
    int gas[] = {2,3,4};
    int cost[] = {3,4,3};
    int n = sizeof(gas) / sizeof(gas[0]);

    int result = canCompleteCircuit(gas, cost, n);
    
    if (result != -1) {
        printf("You can start at station index: %d\n", result);
    } else {
        printf("It's not possible to complete the circuit.\n");
    }

    return 0;
}
