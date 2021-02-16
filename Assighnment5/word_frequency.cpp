#include <iostream>
#include <stdlib.h>
#include <string> 
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std; 

int main(){

    string phrase;
    string strang; 
    int word = 0;
  
    cout << "enter your paragragh:";
    getline(cin, phrase);

    cout << "How many words do you want to look for?: ";
    cin >> word;


    string * word_array;
    word_array = new string[word+1];

    cout << "Enter the words you would like to enter: ";
    
    for(int i = 0;i < 5;i++){

        getline(cin,word_array[1]);
                                     //array of strings
    }

    int n = 0;

    n = phrase.length();
    char phrase_array[n+1];

    strcpy(phrase_array, phrase.c_str());

    char * array;
    array = strtok (phrase_array," .");
    int j = 0;
    while (array != NULL){
            
       // printf ("%s\n",array);
       // array = strtok (NULL, " .");
        j++;
    }

    cout << array[1] << endl;

return 0;
}





















