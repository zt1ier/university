// September 8, 2025

#include <stdio.h>
#include <stdlib.h> // i don't know really
#include <string.h> // string stuff
#include <stdbool.h> // true false stuff
#include <ctype.h> // check letter casing (uppercase, lowercase)


char vowels[] = {"aeiou"};
char consonants[] = {"bcdfghjklmnpqrstvwxyz"};


bool isVowel(char letter) {

    int length = strlen(vowels);
    for (size_t i = 0; i < length; i++) {
        if (letter == vowels[i]) {
            return true;
        }
    }
    return false;
}


bool isConsonant(char letter) {

    int length = strlen(consonants);
    for (size_t i = 0; i < length; i++) {
        if (letter == consonants[i]) {
            return true;
        }
    }
    return false;
}


int main() {

    char text[1000];

    int numOfVowels = 0, numOfConsonants = 0;

    printf("\nInput a string of characters:\n\n");
    fgets(text, sizeof(text), stdin);

    int length = strlen(text);

    for (size_t i = 0; i < length; i++)
    {
        char picked = text[i];
        char letter = tolower(picked);
        
        if (isVowel(letter)) {
            numOfVowels += 1;
        }
        else if (isConsonant(letter))
        {
            numOfConsonants += 1;
        }
    }
    
    printf("\nVowels: %d\nConsonants: %d", numOfVowels, numOfConsonants);

    return 0;
}
