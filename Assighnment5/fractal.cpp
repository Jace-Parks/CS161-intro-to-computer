/**********************************************
 * Fractal.cpp
 * Jace Parks
 * 2/3/2019
 * This program uses recusion to make fractals based off of a number.
 * input: integer
 * output: astrics and spaces in the form of s fractal
 *
 *********************************************/

#include <iostream>

using namespace std;

void fractal(int pat, int z){

    if(z > 0)              //this is the recurvsive function 
    ;
    else if(z < 0)          // this part does nothing if z = 0
    ;
    else
        return;

    fractal(pat, z/2);     //goes into the fractal

    int i = 0;
    do{ 
        cout << " ";       //output spaces based off the number
        i++;
    }while(i < pat);
    
    i=0;
    do{
        cout << "* ";      //this part outputs atrics 
        i++;
    }while(i < z);
    cout << endl;

    fractal(pat + z/2, z/2); //keeps dividing z until it goes to zero

}

int main(){

    int x = 0;
    
    cout << "Enter number for pattern: ";
    cin >> x;
    
    fractal(0,x);    

return 0;
}
