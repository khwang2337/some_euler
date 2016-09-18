#include <stdio.h> 
#include <stdlib.h>
//this idea isn't quite there, would be better to split a number into two halves and check for equality, will revisit
int main() {
    int one = 100;
    int two = 100;
    int palin = -1;
    int Tpalin = 0;
    printf("I made it!!%d %d\n",one,two);
    while (one < 1000 && two < 1000) {
        Tpalin = palinHelp(checkL(one*two), one*two);
        if (Tpalin > palin) {
            palin = Tpalin;
        }
        if (one > two) {
            two++;
        }
        else {
            one++;
        }
    }
    printf("I made it!!%d %d\n",one,two);
    printf("palindrome: %d %d\n",palin,Tpalin);
    return palin;
}

int checkL(int num) {
    int len = 0;
    while (num != 0) {
        len++;
        num /= 10;
    }
    return len;
}

int palinHelp(int len, int num) {
    int ret = num;
    int half = len/2;
    char odd = 0;
    int multipliedO = 1;
    int multipliedT = 1;
    int addedO = 0;
    int addedT = 0;
    int digi;
    if (len%2 == 1) {
        odd = 1;
    }
    while (num != 0) {
        digi = num%10;
        if (digi == 0) {
            digi = 11;
        }
        if (len > half) {
            multipliedO *= digi;
            addedO += digi;
        }
        else {
            multipliedT *= digi;
            addedT += digi;
        }
        if (! (odd && len == half + 1)) {
            num /= 10;
        }
        len--;
    }
    if (addedO == addedT && multipliedO == multipliedT) {
        return ret;
    }
    else {
        return 0;
    }
    
}

