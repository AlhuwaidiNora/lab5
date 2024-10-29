#include <stdio.h>
#include <ctype.h>
#include <string.h>

int StringLength(char sentence[]) { return strlen(sentence); }

int NumOfWords(char sentence[]) {
    int count = 0;
    for (int i = 0; sentence[i]; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') count++;
    }
    return count + 1;
}

int NumOfVowels(char sentence[]) {
    int count = 0;
    for (int i = 0; sentence[i]; i++) {
        char ch = tolower(sentence[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') count++;
    }
    return count;
}

int VowelFreq(char sentence[], char vowel) {
    int count = 0;
    for (int i = 0; sentence[i]; i++) {
        if (tolower(sentence[i]) == tolower(vowel)) count++;
    }
    return count;
}

int main() {
    char sentence[100] = "Hello world! This is a test sentence.";
    printf("Length: %d\n", StringLength(sentence));
    printf("Words: %d\n", NumOfWords(sentence));
    printf("Vowels: %d\n", NumOfVowels(sentence));
    printf("Frequency of 'e': %d\n", VowelFreq(sentence, 'e'));
    return 0;
}

