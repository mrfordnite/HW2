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
         "3. Do something productive" << endl <<
         "4. Go to the drive thru" << endl <<
         "5. Go outside and see the sun" << endl;

    // Get user input and perform equivalency logic on input
    cin >> input;
    switch(input)
    {

        //Case for sleep selection
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
        //Case for Video Games selection
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
                            cout << "Looks like you'll be cleaning house!" << endl; break;
                                }
                } break;
                default: cout << "Looks like you'll be cleaning house!" << endl;
            } break;
        }
        //Case for productivity selection
        case '3':
        {
            cout << "What would you like to get done?" << endl
            <<      "1. Homework / Studying" << endl
            <<      "2. Chores" << endl
            <<      "3. Start a new project" << endl
            <<      "4. Organize" << endl;
            int productiveInput;
            cin >> productiveInput;

            switch(productiveInput)
            {
                case 1:
                    cout << "You've chosen to do homework. Don't forget to take some brain breaks!" << endl; break;
                case 2:
                    cout << "Good choice! Get caught up on some chores." << endl; break;
                case 3:
                    cout << "A good project always tends to stir up aspiration. Go for it!" << endl; break;
                case 4:
                    cout << "Sometimes some good organization is good for the mind. Go crazy with that label maker!" << endl; break;
                default:
                    cout << "Look's like you'll be cleaning house!" << endl;
            }
            break;
        }
        //Case for drive thru selection
        case '4': {

            cout << "How many adult meals will you be buying?" << endl;
            int foodInput; cin >> foodInput;
            float foodOutput = foodInput * 6.95;

            cout << "Your drive thru total will be: $" << fixed << setprecision(2) << foodOutput << endl;

            break;
        }
        //Case for outside selection
        case '5': {
            cout << "How cold is it outside? (Degrees F, integer)" << endl;
            int outsideInput;
            cin >> outsideInput;

            if (outsideInput < 50) {
                cout << "You've selected to go outside. It's a little chilly! Better bring a coat!" << endl;
            } else if (outsideInput < 75) {
                cout << "You've selected to go outside. It's a beautiful day for it!" << endl;
            } else {
                cout << "You've selected to go outside. It's hot! Better bring some water." << endl;
            }

            break;
        }
        //Case for invalid input
        default:
            cout << "Look's like you'll be cleaning the house!" << endl; break;

    }

    return 0;
}
