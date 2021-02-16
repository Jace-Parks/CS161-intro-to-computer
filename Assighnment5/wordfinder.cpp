#include <iostream>
#include <string.h>
#include <string> 

bool compare(char* stor, char* word){
    for(int i = 0;i < strlen(word); i++){
        if(stor[i] != word[i]){
            return false;
        }
    } return true;
} 

int main(){

    int count = 0;
    cout << "what phrase or paragragh would you like to enter?: ";
    char* sentence = getString();
    cout << "What is the word you are checking for?" << endl;
    char* word = getString();

    for(int i=0; i<strlen(sentence); i++){
        if(sentence[i] != ' ' ){
            char* stor = new char [10];
            
            do{
                stor[i] = sentence[i];
                i++;
            }while(sentence[i] != ' ');
        }
        if(compare(stor, word)){
             count = count + 1;
    
    }
    cout << "The number of occurances in the paragragh are " << count << endl;
    
return 0;
}
