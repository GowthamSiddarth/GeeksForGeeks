#include <stdio.h>
#include <stdlib.h>
#include "../Helper/String/strcmp.h"

double getStreamAvgWithPrevAvg(int num, double prevAvg, int count) {
    return (prevAvg * count + num) / (count + 1);
}

double getStreamAvgWithStaticVars(int num) {
    static int sum, count;

    sum = sum + num;
    return ((double) sum) / (++count);
}

int main () {
    char input[11] = {'\0'};
    int count = 0;
    double prevAvg = 0.0;

    scanf("%s", input);
    while (0 != cmpStr(input, "n")) {
        int num = atoi(input);
        double currAvg1 = getStreamAvgWithPrevAvg(num, prevAvg, count);
        double currAvg2 = getStreamAvgWithStaticVars(num);
        printf("currAvg1 = %lf, currAvg2 = %lf\n", currAvg1, currAvg2);

        prevAvg = currAvg1;
        count++;
        scanf("%s", input);        
    }

    return 0;
}
