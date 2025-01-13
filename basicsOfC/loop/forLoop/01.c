#include <stdio.h>

int maxScoreSightseeingPair(int* values, int size) {
    int maxScore = 0;
    int maxI = values[0]; // Maximum value of values[i] + i

    for (int j = 1; j < size; j++) {
        // Calculate the score for the pair (i, j)
        int score = maxI + values[j] - j;
        // Update the maximum score
        if (score > maxScore) {
            maxScore = score;
        }
        // Update maxI for the next iteration
        int currentI = values[j] + j;
        if (currentI > maxI) {
            maxI = currentI;
        }
    }
    return maxScore;
}

int main() {
    int values[] = {8, 1, 5, 2, 6};
    int size = sizeof(values) / sizeof(values[0]);

    int maxScore = maxScoreSightseeingPair(values, size);
    printf("Maximum score of sightseeing pairs: %d\n", maxScore);

    return 0;
}
