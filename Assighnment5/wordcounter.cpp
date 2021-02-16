#include <iostream>
#include <string.h>
#include <stdio.h> 

using namespace std;

string getstring(){
    
    string phrase;

    cout << "Enter a phrase you would like: ";
    getline(cin, phrase);
   

return phrase;
}

string getwords(){

    int word = 0;
 
    cout << "How many words would you like to enter?: ";
    cin >> word;

    string* words = new string[word];

    for(int i = 0;i < word;i++){
    
        words[i] = getstring();
    }

return *words;
}

int count_spaces_of_string(char *array){

    int length = strlen(array);
    int spaces = 0;   

    for(unsigned int i = 0; i < length;i++){
        if(array[i] == ' ')
            spaces++;

    }

return spaces;
}

void convert_string_to_char_array(string phrase,char* outboi){

    int length = phrase.length();

    char char_array[length+1];

    strcpy(char_array, phrase.c_str());

    for(int i = 0;i < length;i++){

    outboi[i] = char_array[i];
    }
    
}

void convert_string_to_string_array(string phrase,char** outboi){

    int length = phrase.length();    
    int i = 0;   

    char* phrase_array;
    phrase_array = new char [length+1];
    convert_string_to_char_array(phrase,phrase_array);
    int length1 = count_spaces_of_string(phrase_array);
    char *string_array[length1];

    string_array[i] = strtok(phrase_array, " .");

    while (string_array[i] != NULL){

        string_array[i++] = strtok(NULL,"/");
    }       
    
    for(int i=0;i < length1;i++){
        outboi[i] = string_array[i];
    }
    
delete[] phrase_array;
delete[] outboi;
}

void fill(int words,char** outboi){

    string word;
    char** string_array;
    *string_array = new char [words];

    cout << endl;
    cout << "What words would you like to input?: ";
    cout << "Input them like so: the hat that ect" << endl;   
    getline(cin, word);
        
    convert_string_to_string_array(word, string_array);

    for(int i = 0;i < words;i++){

        outboi[i] = string_array[i];
   
    }    
    
delete[] string_array;
delete[] outboi;
}
int main(){
   
    int length = 0;
    int words = 0; 
    string phrase;
    char ** string_array;
    

    cout << "Enter the phrase to convert to string array: ";
    getline(cin, phrase);

    cout << "How many words would you like to look for?: ";
    cin >> words;

    fill(words, string_array);

    convert_string_to_string_array(phrase, string_array);
  
     
    delete []string_array;
return 0;
}

