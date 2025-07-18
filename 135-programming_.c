//Program To Create A Header File With The Name "myfunctions.h" To Create Four Functions In It
// myfunctions.h

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

// Function to calculate mean of 3 numbers
float calculateMean(float a, float b, float c);

// Function to check if a number is positive, negative, or zero
const char* checkSign(int num);

// Function to count the number of words in a string
int wordCount(const char* str);

// Function to convert a string to Proper Case
void toProperCase(char* str);

#endif









// myfunctions.c

#include "myfunctions.h"
#include <ctype.h>
#include <string.h>

// 1. Calculate mean
float calculateMean(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

// 2. Check positivity or negativity
const char* checkSign(int num) {
    if (num > 0) return "Positive";
    else if (num < 0) return "Negative";
    else return "Zero";
}

// 3. Word count
int wordCount(const char* str) {
    int count = 0, inWord = 0;
    while (*str) {
        if (!isspace(*str) && !inWord) {
            inWord = 1;
            count++;
        } else if (isspace(*str)) {
            inWord = 0;
        }
        str++;
    }
    return count;
}

// 4. Convert to proper case
void toProperCase(char* str) {
    int newWord = 1;
    while (*str) {
        if (isalpha(*str)) {
            if (newWord) {
                *str = toupper(*str);
                newWord = 0;
            } else {
                *str = tolower(*str);
            }
        } else {
            newWord = isspace(*str);
        }
        str++;
    }
}







// main.c

#include <stdio.h>
#include "myfunctions.h"

int main() {
    float mean = calculateMean(10, 20, 30);
    printf("Mean: %.2f\n", mean);

    printf("Sign of -5: %s\n", checkSign(-5));

    char sentence[] = "This is a sample string to count words.";
    printf("Word count: %d\n", wordCount(sentence));

    char mixedCase[] = "heLLo woRLd! thIs is c.";
    toProperCase(mixedCase);
    printf("Proper case: %s\n", mixedCase);

    return 0;
}
