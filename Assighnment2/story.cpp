/*
Jace Parks

this program's purpose is to show a story
/**/

#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>

using namespace std;

int main(){
    
    int cho3;
    int cho2;
    int cho;
    int randcho;
                                         //this is the starting point of the adventure
    cout << "Welcome to choose your own adventure!" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Our adventure begins with our hero (you) leaving their home town" << endl;
    cout << "Your quest has been assighned to you by the leader of the town" << endl;
    cout << "The leader of the town pulls you into his house" << endl;
    cout << "He tells you that a dragon has been killing the town's livestock and burning its crops for several weeks" << endl;
    cout << "If the dragon is not slain or stopped the town will starve" << endl;
    cout << "The leader of the town told you start by looking at the area where the town's fields meet the forest" << endl;
    cout << "This is where the dragon is last seen after burning and pilaging the townn's goods" << endl;
    cout << "When you arrive at this area there are three ways to go: To trudge through the dark forest" << endl;
    cout << "To go around the forest towards the snowy moutain" << endl;
    cout << "Or to go around the other side of the forest toward the swamp" << endl;
    cout << "To go left to the swamp press 1 | To go towards the moutain press 2:" << endl;
    cin >> cho;

    if(cho == 1){

       cout << "test 1" << endl;
 
    cout << "You chose to go to the left towards the swamp" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "To complete your quest you must follow your insticts" << endl;
    cout << "To wade through the swamp press 1 | To walk across the bridge press 2:";
    cin >> cho2; 


    srand(time(NULL));
    
     randcho = rand() % 2;      //this part adds the random effect into the game through addition and seeding rand fucntion with the time
     
     randcho  = randcho + cho2;    

        if(randcho == 1) {       //choice 1-3
            
            cout << "You start down the swampy bridge and after taking a few steps you are grabbed by a giant slime creature" << endl;
            cout << "You are pulled into the swamp and your vision is darkened" << endl;
            cout << "Press 1 to resist the force that is fighting you | press 2 to give up: ";
            cin >> cho3;

            if(cho3 == 1){ //final choice

                cout << "You choose to resist the force pulling you down" << endl;
                cout << "You are pulled into the abyss of the swamp" << endl;
                cout << "GAME OVER";
                return 0;
            }
            
            else if(cho3 == 2){  //other final choice
            
                cout << "You fight the force that pulls you down" << endl;
                cout << "You open your eyese to and see the dragon holding you down" << endl;
                cout << "You grab the hilt of your sword, you proceed to hack and slash at the beast and vanquish it" << endl;
                cout << "The beast withers and dies as you are spat back to the surface" << endl;
                cout << "After slaying the beast you head home to a thankful village" << endl;
                cout << "You win!";
             
            }
         }
         else if(randcho == 2) {//choice 2
        
            cout << "You choose to go down the bridge in the swamp" << endl;
            cout << "You start walking down the deteriating bridge" << endl;
            cout << "it creeks and moans as you walk along it" << endl;
            cout << "Suddenly your foot breaks through one of the boards and your leg sinks into in underbelly of the bridge" << endl;
            cout << "To try to pull yourself out of the bridge press 1 | to jump into swamp press 2:" ;
            cin >> cho3;
         
                if(cho3 == 1){  //final choicer
                
                cout << "You pry your foot out of the murky water" << endl;
                cout << "A rumbling comes from under the bridge" << endl;
                cout << "It grows into a roar as the dragon emerges from under the bridge" << endl;
                cout << "You are struck with horror as the dragon approaches you" << endl;
                cout << "GAME OVER" << endl;
                }
       
                else if(cho3 == 2){  //other final choice

                cout << "You jump into the swamp and submerge yourself in the sludge" << endl;
                cout << "after submerging yourself you open your eyese to and see the dragon holding you down" << endl;
                cout << "You grab the hilt of your sword, you proceed to hack and slash at the beast and vanquish it" << endl;
                cout << "The beast withers and dies as you are spat back to the surface" << endl;
                cout << "After slaying the beast you head home to a thankful village" << endl;
                cout << "You win!" << endl;

                }
          }
                
          else if(randcho == 3) { //choice 3
          
              cout << "You jump into the swamp and start wading towards the opposite side of the swamp" << endl;
              cout << "After wading through the swamp you come to a pleasent meadow" << endl;
              cout << "You can head towards the moutain in the distance 1 | Or you can press 2 and wait at the meadow over night:";
              cin >> cho3;
          
                 
              if(cho3 == 1){  //final choice
              
                  cout << "You begin traveling toward the moutain" << endl;
                  cout << "The journey is long and trivial" << endl;
                  cout << "After many hours of hiking you arrive at the moutain" << endl;
                  cout << "You begin to scour the moutain side for the dragon's cave" << endl;
                  cout << "You find a large cave and decide to investigate it" << endl;
                  cout << "after walking 50 ft or so you are face to face with the dragon" << endl;
                  cout << "He seemed to appear out of nowhere" << endl;
                  cout << "GAME OVER" << endl;
                  }
              
              else if(cho3 == 2){ //other final choice
      
                  cout << "You decide to wait in the meadow overnight" << endl;
                  cout << "You fall asleep on the soft turf below you" << endl;
                  cout << "Your dreams are invaded by shadowy figures digging away at your souls" << endl;
                  cout << "You awake face to face with the dragon" << endl;
                  cout << "You're stunned by the scaly face of the dragon" << endl;
                  cout << "GAME OVER" << endl;

                  }



          
         } else{
                              // random sanitizer output
              cout << "invalid input" << endl;
             
            
          }
    }
   
   
 
        
    else if(cho == 2){ // second large choice
 
              cout << "you head towards the moutain in the distance" << endl;
              cout << "As you approach it you're met with the rolling foothills of your country" << endl;
              cout << "You could head through the tundras and arrive at the moutain relatively quick" << endl;
              cout << "The other option is to head towards the vast desert in the rain shadow of the moutain" << endl;
              cout << "press 1 for the tundra | press 2 to go towards desert:";
              cin >> cho2;

              if(cho2 == 1){ // sub choice 1-2

                  cout << "You head through the tundra and are surprised with how cold the air is" << endl;
                  cout << "Your fingers start to go numb and you start feeling tired" << endl;
                  cout << "press 1 to to take cover at a nearby cave | press 2 to keep heading towards" << endl;
                  cin >> cho3;
        
                      if(cho3 == 1){ //final choice 1
                      
                          cout << "You decide to head towards the cave" << endl;
                          cout << "Out of nowhere the dragon swoops in from nowhere and lands in front of you" << endl;
                          cout << "He glares at you as you stumble grabbing for your sword" << endl;
                          cout << "When you find the hilt of your weapon the dragon bends his neck toward you and starts to breathe fire" << endl;
                          cout << "GAME OVER" << endl; 
 
                      }

                      else if(cho3 == 2){ //final choice 2

                          cout << "Decide to push past the pain in your hands ans feet" << endl;
                          cout << "You start to move faster which helps to keep warm" << endl;
                          cout << "You come upon an abandoned quarry" << endl;
                          cout << "You peer over the side of the quarry and see the dragon dwelling at the bottom" << endl;
                          cout << "This is your chance to slay the beast" << endl;
                          cout << "You compose yourself and prepare to jump onto the dragon" << endl;
                          cout << "You take a deep breadth and jump off the ledge" << endl;
                          cout << "You Win!" << endl;

                      }

              }
              else if(cho2 == 2){  // sub choice 2
 
                  cout << "You decide to head towards the dry desert" << endl;
                  cout << "The sun is beating on your back and do not know if you can wear your armor any longer" << endl;
                  cout << "Press 1 to take off armor | Press 2 to keep armor on" << endl;
                  cin >> cho3;
                  
                      if(cho3 == 1){ //final choice 1
                       
                         cout << "You decide to take off your armor" << endl;
                         cout << "You feel lighter, more agile and most importantly cooler" << endl;
                         cout << "You start to feel better" << endl;
                         cout << "All of a sudden you feel something grab your leg" << endl;
                         cout << "You look down and see the claw of the dragon wrapped around your leg" << endl;
                         cout << "It sharply yanks you into the depths of the sand" << endl;
                         cout << "GAME OVER" << endl;

                      }
                      else if(cho3 == 2){ //final choice 2

                          cout << "You decide to push through the heat and keep your armor on" << endl;
                          cout << "The dragon could be lurking under the sand below you" << endl;
                          cout << "You trudge towards the edge of the desert and you see feel the dragon's shadow on your back" << endl;
                          cout << "It flys over you and lands about 100 yards away ontop of a deer" << endl;
                          cout << "Your armor must have disguised you" << endl;
                          cout << "The dragon's back is to you and begin to approach it" << endl;
                          cout << "eventually you get to the rear of the dragon" << endl;
                          cout << "You grab your weapon and raise it high" << endl;
                          cout << "You Win" << endl;


                      }

              }
} else {
 cout << "invalid" << endl;
   }

return 0;
            
}




     
     
 
