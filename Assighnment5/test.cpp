#include <iostream>

using namespace std;

main(){

   char * foo;
   int words;   
   int n = 0; 

   cout << "How many words would you like to look for?: ";
   cin >> words;

   foo = new char[words];

   for(int i = 0; i <= words; i++){
   cout << "What word would you like to look for?: ";
   cin.getline(foo[n], 20);
   n++;
   }

   cout << &foo[1];
   
return 0;
}
