/* Write a program that allows users to enter five words (in the form of c-type strings) and concatenates these words in an alphabetical order 
   with the first character of each word determining the order. For example, if there is a word “africa” and another word “europe”; africa would come before europe in the concatenated string.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    string word[5];

    cout << "Enter 5 words:\n";
    for (int i = 0; i < 5; i++) {
        cin >> word[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            char first1 = tolower(word[j][0]);
            char first2 = tolower(word[j + 1][0]);

            if (first1 > first2) {
                string temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }

    cout << "Words after sorting: "<<endl;
    for (int i = 0; i < 5; i++) {
        cout << word[i] << " ";
    }
    cout << endl;

    return 0;
}
	











