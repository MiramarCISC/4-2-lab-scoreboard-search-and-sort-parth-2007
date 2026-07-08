#include "scoreboard.hpp"
#include <iostream>

using namespace std;

int calculateTotal(const int scores[], int size) {
    // If the array is null or the size is invalid, return 0.
    // Otherwise, return the sum of all scores.
    if(scores == nullptr || !isValidSize(size)) return 0;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum;
}

double calculateAverage(const int scores[], int size) {
    // If the array is null or the size is invalid, return 0.0.
    // Otherwise, return the total divided by size.
    if(scores == nullptr || !isValidSize(size)) return 0.0;
    return calculateTotal(scores, size) / size;
}

int findLowest(const int scores[], int size) {
    // If the array is null or the size is invalid, return 0.
    // Otherwise, return the smallest score.
    if(scores == nullptr || !isValidSize(size)) return 0;
    int val = scores[0];
    for(int i = 1; i < size - 1; i++) {
        if(scores[i] < val) val = scores[i];
    }
    return val;
}

int findHighest(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0.
    // Otherwise, return the largest score.
    return 0;
}

int findScore(const int scores[], int size, int target) {
    // TODO:
    // Search the array from left to right.
    // Return the index where target is found.
    // Return -1 when target is not found.
    return -1;
}

void sortScores(int scores[], int size) {
    // TODO:
    // Sort the array from lowest to highest.
    // A selection sort works well for this lab.
}

void printScores(const int scores[], int size) {
    if (scores == nullptr || !isValidSize(size)) {
        cout << "No scores to print." << endl;
        return;
    }

    for (int i = 0; i < size; i++) {
        cout << scores[i];

        if (i < size - 1) {
            cout << " ";
        }
    }

    cout << endl;
}

bool isValidSize(int size) {
    // Return true when size is greater than 0.
    if(size > 0) return true;
    return false;
}
