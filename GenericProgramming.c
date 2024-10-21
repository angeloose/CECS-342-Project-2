// Names: Angelo Cervana
// Tools used: Visual Studio Code, Discord, GitHub, C, C#, C++, Python, Haskell, W3Schools.com, GeeksForGeeks.org, tutorialspoint.com, ChatGPT

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// intialize struct to hold data values for people
struct Identity {
        char name[10];
        int age;
    };

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

int compare_name(const void* a, const void* b) {
    // returns whichever name a or b is greater using strcmp from string.h libray
    // if result positive, a is greater. if negative, b is greater. if 0, a = b.
    return strcmp((const char*)a, (const char*)b);
}

int compare_age(const void* a, const void* b) {
    // returns whichever age a or b is greater
    // if result positive, a is greater. if negative, b is greater. if 0, a = b.
    if (((const struct Identity*)a)->age > ((const struct Identity*)b)->age){
        return 1;
    }
    if (((struct Identity*)a)->age < ((const struct Identity*)b)->age) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    // initialize data in arrays to be sorted
    float numbers[12] = {645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25};

    struct Identity people[17] = {
        {"Hal", 20},
        {"Susan", 31},
        {"Dwight", 19},
        {"Kassandra", 21},
        {"Lawrence", 25},
        {"Cindy", 22},
        {"Cory", 27},
        {"Mac", 19},
        {"Romana", 27},
        {"Doretha", 32},
        {"Danna", 20},
        {"Zara", 23},
        {"Rosalyn", 26},
        {"Risa", 24},
        {"Benny", 28},
        {"Juan", 33},
        {"Natalie", 25}
    };
    
    /* use qsort() from stdlib library. parameters are 
    base: pointer to first elem of array 
    nitems: number of elements in array
    size: size of each element
    compare: function pointer to a comparison function that compares two elements
    */
    
    // print unsorted and sorted numbers

    printf("\nUnsorted numbers\n");
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        printf("%f\n", numbers[i]);
    }

    // sort numbers

    qsort(numbers, 12, sizeof(float), compare_float);
    
    printf("\nSorted numbers:\n");
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        printf("%f\n", numbers[i]);
    }

    // print unsorted and sorted people by name

    printf("\nUnsorted people:\n");
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); i++) {
        printf("%s\t%d\n", people[i].name, people[i].age);
    }

    // sort people by name

    qsort(people, 17, sizeof(people[0]), compare_name);

    printf("\nSorted people by name:\n");
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); i++) {
        printf("%s\t%d\n", people[i].name, people[i].age);
    }
 
    // sort people by age

    qsort(people, 12, sizeof(people[0]), compare_age);

    // print sorted people by age

    printf("\nSorted people by age: \n");
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); i++) {
        printf("%s\t%d\n", people[i].name, people[i].age);
    } 
    




    return 0;
}