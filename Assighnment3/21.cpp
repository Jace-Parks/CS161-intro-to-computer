/*Author of program: Jace Parks
 *Date: 2/3/2019
 *Class: Computer science 161
 *School: Oregon state university
 *Assighnment 3
 *Descrition: This program is based off the game of blackjack
 *you are given a set amount of money and are asked to place abet.
 *your goal is to gert 21 or to have a higher sum than the dealer
 *everytime you win you get the money you put in back.
 *You can play up to 4 people in one game.
 *input: integers only
 *output: various instructions and integers
 ******************************************************************************
 *Function: This game is ment for reaction and to get a good grade on assighnment3
 ******************************************************************************/ 








#include <iostream>
#include <stdlib.h>

using namespace std;

void suck();  //declard in order to be used in the rest of the program

int main();   // declared in order to be used in other functions

int playagain1(){  // fucntion for 1st mode with one player

int choice;
int money;
int mode;
int path;
int dealermon;
int player1mon;
int player2mon;
int player3mon;           //these are all the variables used is THIS function
int player4mon;
int p1total = 0;
int p2total;
int p3total;
int p4total;
int dealertotal;
int i;
int card;
int dcard;
int bet;

 
  
   srand(time(NULL));    //Randomizies the rand() function
    
    cout << "how much money do you want to start with?: ";
    cin >> money;

    player1mon = money;
    dealermon = money;      //sets the money of the dealer and the player as the same

    while( player1mon > 0){   //plays until player has no money
 
    p1total = (rand()%11) + 1; //random number between 1 and 11
    dealertotal = (rand()%26) + 1;  // dealer is between 1-26 because in traditional B.J dealer must stay on 17 
                                    //so 27 is impossible to get

    

    cout << "How much do you want to bet?: " << endl;
    cin  >> bet;
    cout << "your card was: " << p1total << endl;           //user input
    cout << "You have " << player1mon << " dollars" << endl;
    cout << "would you like to hit?" << endl;
    cout << "press 1 to hit | press 2 to stay: ";
    cin >> choice;
        if(choice == 1){
            while(p1total <= 21){
                card = (rand()%11) + 1;
                p1total = p1total + card;             //This is loop is ment to let the user keep hitting until they want to stop then exit


                cout << "Your total is: " << p1total << endl;
                cout << "Would you like to hit again?" << endl;
                cout << "press 1 to hit | press 2 to stay: ";
                cin >> choice;
                if(choice == 2){
                    break;
                }
                else if(choice == 1){
                    cout << "you chose to hit" << endl;
                }
                else{
                    suck();
                }

            }}
        
        else if(choice == 2){
            cout << "you chose to stay" << endl;
        }
        else{ //error handling for choice
            suck();

}
       
  
if((dealertotal > 21) && (p1total < 21)){
    player1mon = player1mon + bet;
    cout << "You won " << bet << " dollars!" << endl;
}
else if(p1total > 21){
    player1mon = player1mon - bet;
    cout << "You lost" << bet << " dollars" << endl;
}
else if(p1total == dealertotal){
    cout << "nothing happens" << endl;                     //This block of code is ment to tell the user their winning 
}
else if (p1total > dealertotal){
    player1mon = player1mon + bet;
    cout << "You won " << bet << " dollars!" << endl;
}
else if (dealertotal > p1total){
    player1mon = player1mon - bet;
    cout << "You lost" << bet << " dollars" << endl;
}
else{
    suck();
}}

    return 0;
    }

void playagain2(){  //refer to playagain1 for comments all diagram

    int player1total = 0;
    int player2total = 0;
    int dealertotal = 0;
    int money = 0;
    int player1mon = 0;
    int player2mon = 0;
    int bet1 = 0;
    int bet2 = 0;
    int choice = 0;
    int card = 0;

    srand(time(NULL));

    cout << "How much money do you want to start with?: ";
    cin >> money;
    
    player1mon = money;
    player2mon = money;

    if(money > 0){

    while((player1mon > 0) && (player2mon > 0)){

        player2total = (rand() % 11) + 1; 
        player1total = (rand() % 11) + 1;
        dealertotal = (rand() % 26) + 1;
    
        cout << "Player 1 how much do you want to bet?: ";
        cin >> bet1;
        cout << "Player 1 your card was:  " << player1total << endl;
        cout << "Player 2 how much do you want to bet?: ";
        cin >> bet2;
        cout << "Player 2 your card was " << player2total << endl;
        cout << "Player 1 press 1 to hit | press 2 to stay: ";
        cin >> choice;
        
        if(choice == 1){
  
            while(player1total <= 21){
                  
                 card = (rand() % 11) + 1;
                 player1total = player1total + card;
                 cout << "Player 1 your total is " << player1total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck(); 
                 }   
            }
  
        }
        else if(choice == 2){
            cout << "You decied to stay" << endl;
        }
        else{
            suck();        
        }
        if((dealertotal > 21) && (player1total < 21)){
            player1mon = player1mon + bet1;
            cout << "You won " << bet1 << " dollars!" << endl;
        }
        else if(player1total > 21){
            player1mon = player1mon - bet1;
            cout << "You lost" << bet1 << " dollars" << endl;
        }
        else if(player1total == dealertotal){
            cout << "nothing happens" << endl;
        }  
        else if (player1total > dealertotal){
            player1mon = player1mon + bet1;
            cout << "You won " << bet1 << " dollars!" << endl;
        }  
        else if (dealertotal > player1total){
            player1mon = player1mon - bet1;
            cout << "You lost" << bet1 << " dollars" << endl;
        }  
        else{
            suck();
        }

    //end of player 1 turns 
    //beginning of player 2's turn

        cout << "Player 2 your total is " << player1total << endl;
        cout << "Press 1 to hit | press 2 to stay: ";
        cin >> choice;
    
        if(choice == 1){
            while(player2total <= 21){
                 
                 card = (rand() % 11) + 1;
                 player2total = player2total + card;
                 cout << "Player 2 your total is " << player2total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else
                     suck();
            }


        }
        else if(choice == 2){
            cout << "You decided to stay" << endl;
        }
        else{
            suck();
        }
        if((dealertotal > 21) && (player2total < 21)){
            player2mon = player2mon + bet2;
            cout << "You won " << bet1 << " dollars!" << endl;
        }
        else if(player2total > 21){
            player2mon = player2mon - bet2;
            cout << "You lost" << bet2 << " dollars" << endl;
        }
        else if(player2total == dealertotal){
             cout << "nothing happens" << endl;
        }
        else if (player2total > dealertotal){
            player2mon = player2mon + bet2;
            cout << "You won " << bet2 << " dollars!" << endl;
        }
        else if (dealertotal > player2total){
            player2mon = player2mon - bet2;
            cout << "You lost" << bet2 << " dollars" << endl;
        }
        else{
            suck();
        }

    }   //this is the end of the player money while loop

    }
    else
        suck();

}

void playagain3(){

    int player1total = 0;
    int player2total = 0;
    int player3total = 0;
    int dealertotal = 0;
    int card = 0;
    int player1mon = 0;
    int player2mon = 0;
    int player3mon = 0;
    int money = 0;
    int choice = 0;
    int bet1 = 0;
    int bet2 = 0;
    int bet3 = 0;

    srand(time(NULL));

    cout << "How much money do you want to start with?: ";
    cin >> money;

    player1mon = money;
    player2mon = money;
    player3mon = money;

    while((player1mon > 0) && (player2mon > 0) && (player3mon > 0)){
    
        player1total = (rand() % 11) + 1;
        player2total = (rand() % 11) + 1;
        player3total = (rand() % 11) + 1;
        dealertotal = (rand() % 26) + 1;

        cout << "Player 1 how much do you want to bet?: ";
        cin >> bet1;
        cout << "Player 2 how much do you want to bet?: ";
        cin >> bet2;
        cout << "Player 3 how much do you want to bet?: ";
        cin >> bet3;
        cout << "Player 1 would you like to hit?" << endl;
        cout << "Press 1 to hit press 2 to stay: ";
        cin >> choice;

        if(choice == 1){
        
               while(player1total <= 21){

                 card = (rand() % 11) + 1;
                 player1total = player1total + card;
                 cout << "Player 1 your total is " << player1total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck();
                 }
            }

        }
        else if(choice == 2){
            cout << "You chose to stay" << endl;
        }
        else
            suck();
        
    cout << "Player 2 would you like to hit?" << endl;
    cout << "Your total is " << player2total << endl;
    cout << "Your bet was " << bet2 << endl;
    cout << "Press 1 to hit | press 2 to stay: ";
    cin >> choice;

    if(choice == 1){
           while(player2total <= 21){

                 card = (rand() % 11) + 1;
                 player2total = player2total + card;
                 cout << "Player 2 your total is " << player2total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck();
                 }
            }

    }
    else if(choice == 2){
    
        cout << "You chose to stay" << endl;

    }
    else
        suck(); 

    cout << "Player 3 would you like to hit?" << endl;
    cout << "Your bet was " << bet3 << endl;
    cout <<"Press 1 to hit | press 2 to stay: ";
    cin >> choice;
    
    if(choice == 1){
         while(player3total <= 21){

                 card = (rand() % 11) + 1;
                 player3total = player3total + card;
                 cout << "Player 3 your total is " << player3total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck();
                 }
            }
 
     }
     else if(choice == 2){
         cout << "You decided to stay" << endl;
     }
     else 
         suck();

     if((dealertotal > 21) && (player1total < 21)){
         player1mon = player1mon + bet1;
         cout << "player 1 you won " << bet1 << " dollars!" << endl;
     }
     else if(player1total > 21){
         player1mon = player1mon - bet1;
         cout << "Player 1 you lost" << bet1 << " dollars" << endl;
     }
     else if(player1total == dealertotal){
         cout << "nothing happens" << endl;
     }
     else if (player1total > dealertotal){
         player1mon = player1mon + bet1;
         cout << "Player 1 you won " << bet1 << " dollars!" << endl;
     }
     else if (dealertotal > player1total){
         player1mon = player1mon - bet1;
         cout << "Player 1 you lost" << bet1 << " dollars" << endl;
     }
     else{
         suck();
     }
     
     if((dealertotal > 21) && (player2total < 21)){
         player2mon = player2mon + bet2;
         cout << "Player 2 you won " << bet2 << " dollars!" << endl;
     }
     else if(player2total > 21){
         player2mon = player2mon - bet2;
         cout << "Player 2 you lost" << bet2 << " dollars" << endl;
     }
     else if(player2total == dealertotal){
         cout << "nothing happens" << endl;
     }
     else if (player2total > dealertotal){
         player2mon = player2mon + bet2;
         cout << "Player 2 you won " << bet2 << " dollars!" << endl;
     }
     else if (dealertotal > player2total){
         player2mon = player2mon - bet2;
         cout << "Player 2 you lost" << bet2 << " dollars" << endl;
     }
     else{
         suck();
     }

     if((dealertotal > 21) && (player3total < 21)){
         player3mon = player3mon + bet3;
         cout << "Player 3 you won " << bet3 << " dollars!" << endl;
     }
     else if(player3total > 21){
         player3mon = player3mon - bet3;
         cout << "Player 3 you lost" << bet3 << " dollars" << endl;
     }
     else if(player3total == dealertotal){
         cout << "nothing happens" << endl;
     }
     else if (player3total > dealertotal){
         player3mon = player3mon + bet3;
         cout << "Player 3 you won " << bet3 << " dollars!" << endl;
     }
     else if (dealertotal > player3total){
         player3mon = player3mon - bet3;
         cout << "Player 3 you lost" << bet3 << " dollars" << endl;
     }
     else{
         suck();
     }


       
     } 
}

void playagain4(){
    
     int player1total = 0;
     int player2total = 0;
     int player3total = 0;
     int player4total = 0;
     int dealertotal = 0;
     int card = 0;
     int player1mon = 0;
     int player2mon = 0;
     int player3mon = 0;
     int player4mon = 0;
     int money = 0;
     int choice = 0;
     int bet1 = 0;
     int bet2 = 0;
     int bet3 = 0;
     int bet4 = 0;

     srand(time(NULL));

     cout << "How much money do you want to start with?: ";
     cin >> money;

     player1mon = money;
     player2mon = money;
     player3mon = money;
     player4mon = money;
   
     while((player1mon > 0) && (player2mon > 0) && (player3mon > 0) && (player4mon > 0)){
     
         player1total = (rand() % 11) + 1;
         player2total = (rand() % 11) + 1;
         player3total = (rand() % 11) + 1;
         player4total = (rand() % 11) + 1;
         dealertotal = (rand() % 26) + 1;
         
         cout << "Player 1 how much do you want to bet?: ";
         cin >> bet1;
         cout << "Player 2 how much do you want to bet?: ";
         cin >> bet2;
         cout << "Player 3 how much do you want to bet?: ";
         cin >> bet3;
         cout << "Player 4 how much do you want to bet?: ";
         cin >> bet4;
         cout << "Player 1 would you like to hit?" << endl;
         cout << "Press 1 to hit | press 2 to stay: ";
         cin >> choice;

         if(choice == 1){
             while(player1total <= 21){

                 card = (rand() % 11) + 1;
                 player1total = player1total + card;
                 cout << "Player 1 your total is " << player1total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck();
                 }
            }


         }
         else if(choice == 2){
             cout << "You chose to stay" << endl;
         }
         else
            suck();

         cout << "Player 2 would you like to hit?" << endl;
         cout << "Your bet was " << bet2 << endl; 
         cout << "Press 1 to hit | press 2 to stay: ";
         cin >> choice;
        
         if(choice == 1){
             while(player2total <= 21){

                 card = (rand() % 11) + 1;
                 player2total = player2total + card;
                 cout << "Player 2 your total is " << player2total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck();
                 }
            }

             
         }
         else if(choice == 2) 
             cout << "You chose to hit" << endl;
         else
             suck();

         cout << "Player 3 would you like to hit?" << endl;
         cout << "Your bet was " << bet3 << endl;
         cout << "Press 1 to hit | Press 2 to stay: ";
         cin >> choice; 
 
         if(choice == 1){
             while(player3total <= 21){

                 card = (rand() % 11) + 1;
                 player3total = player3total + card;
                 cout << "Player 3 your total is " << player3total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck();
                 }
            }

         }
         else if(choice == 2)
             cout << "You chose to stay" << endl;
         else
             suck();
   
         cout << "Player 4 would you like to hit?" << endl;
         cout << "Your bet was" << bet4 << endl;
         cout << "Press 1 to hit | Press 2 to stay: ";
         cin >> choice;

         if(choice == 1){
             while(player4total <= 21){

                 card = (rand() % 11) + 1;
                 player4total = player4total + card;
                 cout << "Player 4 your total is " << player4total << endl;
                 cout << "Press 1 if you would like to hit | Press 2 to stay: ";
                 cin >> choice;

                 if(choice == 1){
                     cout << "You chose to hit" << endl;
                 }
                 else if(choice == 2){
                     break;
                 }
                 else{
                     suck();
                 }
            }

         }
         else if(choice == 2){
             cout << "You decided to stay" << endl;
         } 
         else
             suck();
 
         if((dealertotal > 21) && (player1total < 21)){
             player1mon = player1mon + bet1;
             cout << "Player 1 you won " << bet1 << " dollars!" << endl;
         }
         else if(player1total > 21){
             player1mon = player1mon - bet1;
             cout << "Player 1 you lost" << bet1 << " dollars" << endl;
         }
         else if(player1total == dealertotal){
             cout << "nothing happens" << endl;
         }
         else if (player1total > dealertotal){
             player1mon = player1mon + bet1;
             cout << "Player 1 you won " << bet1 << " dollars!" << endl;
         }
         else if (dealertotal > player1total){
             player1mon = player1mon - bet1;
             cout << "Player 1 you lost" << bet1 << " dollars" << endl;
         }
         else{
             suck();
         }

         if((dealertotal > 21) && (player2total < 21)){
             player2mon = player2mon + bet2;
             cout << "Player 2 you won " << bet2 << " dollars!" << endl;
         }
         else if(player2total > 21){
             player2mon = player2mon - bet1;
             cout << "Player 2 you lost" << bet2 << " dollars" << endl;
         }
         else if(player2total == dealertotal){
             cout << "nothing happens" << endl;
         }
         else if (player2total > dealertotal){
             player2mon = player2mon + bet2;
             cout << "Player 2 you won " << bet2 << " dollars!" << endl;
         }
         else if (dealertotal > player2total){
             player2mon = player2mon - bet2;
             cout << "Player 2 you lost" << bet1 << " dollars" << endl;
         }
         else{
             suck();
         }  
 
         if((dealertotal > 21) && (player3total < 21)){
             player3mon = player3mon + bet3;
             cout << "Player 3 you won " << bet3 << " dollars!" << endl;
         }
         else if(player3total > 21){
             player3mon = player3mon - bet3;
             cout << "Player 3 you lost" << bet3 << " dollars" << endl;
         }
         else if(player3total == dealertotal){
             cout << "nothing happens" << endl;
         }
         else if (player3total > dealertotal){
             player3mon = player3mon + bet3;
             cout << "Player 3 you won " << bet3 << " dollars!" << endl;
         }
         else if (dealertotal > player3total){
             player3mon = player3mon - bet3;
             cout << "Player 3 you lost" << bet3 << " dollars" << endl;
         }
         else{
             suck();
         }  

         if((dealertotal > 21) && (player4total < 21)){
             player4mon = player4mon + bet4;
             cout << "Player 4 you won " << bet4 << " dollars!" << endl;
         }
         else if(player4total > 21){
             player4mon = player4mon - bet4;
             cout << "Player 4 you lost" << bet4 << " dollars" << endl;
         }
         else if(player4total == dealertotal){
             cout << "nothing happens" << endl;
         }
         else if (player4total > dealertotal){
             player4mon = player4mon + bet4;
             cout << "Player 4 you won " << bet4 << " dollars!" << endl;
         }
         else if (dealertotal > player4total){
             player4mon = player4mon - bet4;
             cout << "Player 4 you lost" << bet1 << " dollars" << endl;
         }
         else{
             suck();
         }  

     }

}



void suck(){ //this is a fail  safe function for when the user does something that sucks

    int path;

    for(;;){
        cout << "press 1 to exit | press 2 to retry: " << endl;
        cin >> path;

        if(path == 1){
            exit(0);
        }
        else if(path == 2){
            main();
        }
            else
              exit(0);
    }
}

int main(){

int choice;
int money;
int mode;
int path;
int dealermon;
int player1mon;
int player2mon;
int player3mon;
int player4mon;
int p1total;
int p2total;
int p3total;
int p4total;
int dealertotal;
int i;
int card;
int dcard;
int bet;

srand(time(NULL));
                           //prompts user for players and money
cout << "How many players would you like?: ";
cin >> mode;

//1 player vs dealer
if(mode == 1){

    playagain1(); // this the branch that deals with the player 1 

    cout << "Would you like to play again?" << endl;
    cout << "Press 1 to choose A different mode press 1 | press 2 to play this mode again | press 3 to exit: ";
    cin >> choice;
    
    if(choice == 1){
        main();
    }
    else if(choice == 2){
        playagain1();
    }
    else if(choice == 3){
        exit(0);
    }
    else{
        suck();
    }


}

//2 players vs dealer
else if(mode == 2){

    playagain2();

    cout << "Would you like to play again?" << endl;
    cout << "Press 1 to choose A different mode press 1 | press 2 to play this mode again | press 3 to exit: ";
    cin >> choice;

    if(choice == 1){
        main();
    }
    else if(choice == 2){
        playagain2();
    }
    else if(choice == 3){
        exit(0);
    }
    else{
        suck();
    }

}
//3 players vs dealer
else if(mode == 3){

    playagain3();

    cout << "Would you like to play again?" << endl;
    cout << "Press 1 to choose A different mode press 1 | press 2 to play this mode again | press 3 to exit: ";
    cin >> choice;

    if(choice == 1){
        main();
    }
    else if(choice == 2){
        playagain3();
    }
    else if(choice == 3){
        exit(0);
    }
    else{
        suck();
    }


}
//4 players vs dealer
else if(mode == 4){

    playagain4();

    cout << "Would you like to play again?" << endl;
    cout << "Press 1 to choose A different mode press 1 | press 2 to play this mode again | press 3 to exit: ";
    cin >> choice;

    if(choice == 1){
        main();
    }
    else if(choice == 2){
        playagain4();
    }
    else if(choice == 3){
        exit(0);
    }
    else{
        suck();
    }



}

else if((mode > 4) || (mode < 1)){

    cout << "You have inputed the wrong mode" << endl;
    suck();
}

return 0;
}
