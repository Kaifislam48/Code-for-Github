/* Mukesh is building a language translation program. He needs to implement a program that counts of  the vowels in a sentence entered by the user. Use the pointer-to-pointer concept to iterate through the sentence and count the vowels.


Note: This is a sample question asked in an Amcat interview.
Input format :

The input consists of a list of words or sentences.
Output format :

The output prints the count of the vowels that are present in the given sentence or sentences.
Code constraints :

1 <= Total number of characters in the sentence(s) <= 1000

The vowels are not case-sensitive.

use only lowercase and uppercase case letters
Sample test cases :
Input 1 :

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed pretium risus eu dolor laoreet, id suscipit enim bibendum.

Output 1 :

42

Input 2 :

the sun

Output 2 :

2

Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.  */

#include <iostream>
using namespace std;

int countVowels(char* sentence) {
    int count = 0;
    char* ptr = sentence;

    while (*ptr != '\0') {
        char c = tolower(*ptr); // Convert to lowercase for case-insensitivity
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    const int maxChars = 1000;
    char sentence[maxChars];
    
    cin.getline(sentence, maxChars);

    int vowelsCount = countVowels(sentence);

    cout << vowelsCount << endl;

    return 0;
}
