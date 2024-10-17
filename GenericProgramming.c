// Names: Angelo Cervana
// Tools used: Visual Studio Code, Discord, GitHub, C, C#, C++, Python, Haskell, W3Schools.com, tutorialspoint.com, ChatGPT

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getIndex() {
    // make a quicksort that handles sorting any type
}

int compare_float(const void* a, const void* b) {
    // returns whichever number a or b is greater
    // if result positive, a is greater. if negative, b is greater. if 0, a = b.
    if (*(const float*)a > *(const float*)b) {
        return 1;
    }
    if (*(const float*)a < *(const float*)b) {
        return -1;
    }
    else {
        return 0;
    }

}

int main() {
    // initialize data to be sorted
    float numbers[12] = {645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25};
    char *people[17] = {"Hal", "Susann", "Dwight", "Kassandra", "Lawrence", "Cindy", "Cory", "Mac", "Romana", "Doretha", "Danna", "Zara", "Rosalyn", "Risa", "Benny", "Juan", "Natalie"};

    /* use qsort() from stdlib library. parameters are 
    base: pointer to first elem of array 
    nitems: number of elements in array
    size: size of each element
    compare: function pointer to a comparison function that compares two elements
    */

    qsort(numbers, 12, sizeof(float), compare_float);
    
    printf("Sorted numbers is: ");
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        printf("%f ", numbers[i]);
    }


    return 0;
}