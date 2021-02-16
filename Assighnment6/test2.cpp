#include <iostream>
#include <cstdlib>

using namespace std;

int main();

void twod();

void error();

void print_array(float **diffusion,int time,float time_i,int seg);

void repeat();

void repeat(){

    int choice = 0;

    cout << "Would you like to repeat the program?" << endl;

    for(;;){

    cout << "Press 1 to restart | Press 2 to exit: ";
    cin >> choice;

    if(choice == 1)
        main();
    else if(choice == 2)
        exit(0);
    else
        error();

    }   

}

void error(){

    int choice = 0;

    cout << "An error has occured would you like to restart the program?" << endl;

    for(;;){
        cout << "Press 1 to restart | Press 2 to exit";
        cin >> choice;

        if(choice == 1)
            main();
        else if(choice == 2)
            exit(0);
        else
            error();
    }
}

void oned(){

    float **array;
    float thermal_conductivity = 0;
    float material_density = 0;
    float specific_heat = 0;
    float length = 0;
    float segments = 0;
    int intervals = 0;
    float time = 0;
    float constant = 0;
    float delta_time = 0;
    float delta_position = 0;
    float delta_u = 0;
    float left_temp = 0;
    float right_temp = 0;
    
    
    cout << "Welcome to the 1-d diffusion calculator!" << endl;
    cout << "What is the thermal conductivity of the material?: ";
    cin >> thermal_conductivity;
    
    cout << "What is the material density of the object?: ";
    cin >> material_density;
    
    cout << "What is the specific heat of the object?: ";
    cin >> specific_heat;
    
    cout << "Please enter the length of the object: ";
    cin >> length;

    cout << "How many segments do you want?: ";
    cin >> segments;
    
    cout << "How many intervals do you want?: ";
    cin >> intervals;
    
    cout << "How long will the reaction take?: ";
    cin >> time;
    
    cout << "What is the temp of the left side?: ";
    cin >> left_temp;
    
    cout << "What is the temp of the right side?: ";
    cin >> right_temp;
    
    constant = (thermal_conductivity / (specific_heat * material_density));
    
    delta_time = (time / intervals);
    
    delta_position = (length / segments);
    
    for(int i = 0;i < intervals;i++){
        array = new float*;
    }
    
    for(int i = 0;i <= intervals;i++){
        for(int j = 0;j < segments;j++){
        
            array[i] = new float;
        }
    }
    
    for(int i = 0;i < intervals;i++){
    
        for(int j =0;j < segments;j++){
        
            array[i][j] = 0;
            
        }
    }
    
    for(int i = 0;i < intervals;i++){
        array[i][0] = left_temp;
        array[i][intervals-1] = right_temp;
    }

 
    
    for(int i = 0;i < intervals;i++){
        
        for(int j = 1;j < segments - 1;j++){
            delta_u = (array[i][j + 1] - (2*array[i][j]) - array[i][j - 1]);
            array[i][j] = ((delta_time * constant * delta_u) / (delta_position * delta_position));
            delta_position = delta_position + delta_position;
        }
        delta_time = delta_time + delta_time;
    }
    
    for(int i = 0;i < intervals;i++){
    
        cout << endl;
    
        for(int j = 0;j < segments;j++){
        
            cout << array[i][j] << " ";
        
        
        }
    
    }
    
    for(int i = 0;i < intervals;i++){
    
        delete [] array[i];
    
    }
    
    delete [] array;
}

void twod(){
    
    return;
}


int main(){
         
    int choice = 0; 
         
    cout << "Welcome to thermal diffussion calculator!" << endl;
    cout << "Would you like to calculate the diffussion of 1-D or 2-D object?" << endl;
    cout << "Press 1 for 1-D | Press 2 for 2-D: ";
    cin >> choice;

    if(choice == 1) 
        oned();
    else if(choice == 2)
        twod();
    else
        error();       
    
    
return 0;
}


