#include <stdio.h> 
#include <stdlib.h>

int main() {
    int curr = 1;
    int sum = 0;
    int squaresum = 0;
    while (curr < 101) {
        sum += curr;
        squaresum += curr*curr;
        curr++;
    }
    printf("Difference between the sum of the squares of the first 100 natural numbers and the square of its sum is %d\n",squaresum - (sum*sum));
    return 0;
}