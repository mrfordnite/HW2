#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
    char input;
//Print out the main menu
    cout << "What would you like to do on break?" << endl <<
         "1. Sleep" << endl <<
         "2. Play video games" << endl <<
         "3. Do something productive (ex. Homework, Chores, etc.)" << endl <<
         "4. Workout" << endl <<
         "5. Go outside and see the sun" << endl;

    cin >> input;


    switch(input)
    {

        case '1':{
            cout << "How many hours do you plan on sleeping?" << endl;
            int sleepInput;
            cin >> sleepInput;
            if(sleepInput < 6)
            {
                cout << "Yikes! That's not much sleep! Better hit the sack then! Goodnight!" << endl;
            }
            else if(sleepInput < 12)
            {
                cout << "Sounds like a healthy amount of sleep. Goodnight!" << endl;
            }
            else if(sleepInput < 0)
            {
                cout << "Silly goose! You cant sleep negative hours!" << endl;
            }
            else
            {
                cout << "Holy cow! That's a lot of sleep! Goodnight Rip Van Winkle!" << endl;
            } break;
        }

        case '2': {
            cout << "What would you like to play?" << endl
                 << "1. Call of Duty" << endl
                 << "2. Rocket League" << endl
                 << "3. League of Legends" << endl
                 << "4. Pong" << endl
                 << "5. I'm not sure, you tell me!" << endl;

            int gameInput;
            cin >> gameInput;

            switch (gameInput) {
                case 1:
                    cout << "You've selected Call of Duty. You own this game on Steam. Go have fun!" << endl; break;
                case 2:
                    cout << "You've selected Rocket League. You own this game on Xbox (DVD). Go have fun!" << endl; break;
                case 3:
                    cout << "You've selected League of Legends. This game should be on your desktop. Go have fun!" << endl; break;
                case 4:
                    cout << "You've selected Pong! What a great classic! You can find this game on online game websites. Go have fun!" << endl; break;
                case 5: {
                    srand(time(0));
                    int randomSelect = rand() % 4 + 1;

                    switch (randomSelect) {

                        case 1:
                            cout << "I have selected Call of Duty. You own this game on Steam. Go have fun!" << endl; break;
                        case 2:
                            cout << "I have selected Rocket League. You own this game on Xbox (DVD). Go have fun!" << endl; break;
                        case 3:
                            cout << "I have selected League of Legends. This game should be on your desktop. Go have fun!" << endl; break;
                        case 4:
                            cout << "I have selected Pong! What a great classic! You can find this game on online game websites. Go have fun!" << endl; break;
                        default:
                            cout << "Error" << endl; break;
                    }
                }
            } break;
        }


        case '3':
            cout << "Go get shit done!" << endl; break;
        case '4':
            cout << "Hit the grind!" << endl; break;
        case '5':
            cout << "Wear sunblock!" << endl; break;
        default:
            cout << "Try again! You did something wrong!" << endl; break;

    }
    cout << "The program is finished running! Have a good day!" << endl;

    return 0;





}
