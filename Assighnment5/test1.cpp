/***************************************
 * 
 * Jace Parks
 *
 *
 */






#include <iostream>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <cctype>

using namespace std;

int main(){

    string phrase;
    string strang;
    string * wordarray;
    char * words;
    int n = 0;
    int word;
    
    cout << "enter your paragragh:";
    getline(cin, phrase);

    cout << "How many words do you want to look for?: ";
    cin >> word;

    wordarray = new string [word];

    for(int i = 0; i < word; i++){
        cout << "What word would you like to look for?: ";
        getline(cin, wordarray[i]);
    }
   
    int length = phrase.length();
    
    int longth = length;

    char char_array[length+1];

    strcpy(char_array, phrase.c_str());

    for(i = 0; i < word; i++){

    length = wordarray[i].length();
    
    char word_array[length+1];

    strcpy(word_array, wordarray[i].c_str());

        for(int j = 0; j < longth; j++){
  
        if(

        } 

    }   

return 0;
}

