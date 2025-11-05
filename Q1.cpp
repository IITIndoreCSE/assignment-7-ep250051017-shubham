/* Write a program that allows users to enter five words (in the form of c-type strings) and concatenates these words in an alphabetical order 
   with the first character of each word determining the order. For example, if there is a word “africa” and another word “europe”; africa would come before europe in the concatenated string.*/


#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //we need to make a 2D matrix
    char str[6][100];//5 words and 1 null terminating character.
    for (int i =0; i<5; i++){
        cout<<"Enter word "<<i+1<<" : ";
        cin.getline(str[i], 100);
    //using bubble sort
    }
    for (int i =0; i<5; i++){
        for (int j =0; j<5-i; j++){
            if (str[j][0]>str[j+1][0]){
                swap(str[j],str[j+1]);
            }
        }
    }
    for (int i =1; i<6; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
}
