#include <stdio.h>
#include <stdlib.h>
#include "../Helper/String/strcmp.h"

double getStreamAvgWithPrevAvg(int num, double prevAvg, int count) {
    return (prevAvg * count + num) / (count + 1);
}

int main () {
    char input[11] = {'\0'};
    int count = 0;
    double prevAvg = 0.0;

    scanf("%s", input);
    while (0 != cmpStr(input, "n")) {
        int num = atoi(input);
        double currAvg = getStreamAvgWithPrevAvg(num, prevAvg, count);
        printf("currAvg = %lf\n", currAvg);

        prevAvg = currAvg;
        count++;
        scanf("%s", input);        
    }

    return 0;
}
