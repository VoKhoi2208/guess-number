#include <iostream>
#include <limits>
#include <random>
#include <ctime>
using namespace std;

string nameuser = "Guest";
long long point = 100;
mt19937 gen(time(nullptr));
mt19937 gen2(time(nullptr));

int random_number(int min, int max) {
    uniform_int_distribution<int> res(min, max);
    return res(gen);
}

int random_dau(int min, int max) {
    uniform_int_distribution<int> res2(min, max);
    return res2(gen2);
}

void welcomegame() {
    cout << "===============================" << endl;
    cout << "    PLAYZONE" << endl;
    cout << "Hi '" << nameuser << "' your point is: " << point << " pts" << endl;
}

void welcome() {
    cout << "===============================" << endl;
    cout << "    WELCOME TO MINIGAME" << endl;
    cout << "Hi '" << nameuser << "' welcome" << endl;
}

void homepage() {
    cout << "=============================" << endl;
    cout << "ENTER YOUR CHOICE" << endl;
    cout << "1).Setup profile" << endl;
    cout << "2).Check your point" << endl;
    cout << "3).How to play?" << endl;
    cout << "4).Start game" << endl;
    cout << "5).Exit" << endl;
    cout << "6).Credit" << endl;
    cout << "WARNING!!! PLEASE READ THE CONTENT IN THE CREDIT" << endl;
    cout << "=============================" << endl;
}

void setupprofile() {
    cout << endl << "=============================" << endl;
    cout << "SET UP PROFILE ZONE" << endl;
    cout << "Hi welcome to Setup profile page" << endl;
    cout << "Let's tell us your name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nameuser);
    cout << "I will remember, your name is " << nameuser << endl;
    cout << "Thank you so much" << endl << endl;
}

void credit() {
    cout << endl << "==================================" << endl;
    cout << "          **CREDIT PAGE**" << endl;
    cout << "    ***PLEASE READ IT CAREFULLY***" << endl;
    cout << "1).This project is just for fun. #J4F" << endl;
    cout << "2).The project has NO incentive to gamble" << endl;
    cout << "3).Project written by Khoi" << endl;
    cout << "==================================" << endl << endl << endl;
}

void howtoplay() {
    cout << "=============================" << endl;
    cout << "HOW TO PLAY?-INTRODUCTION" << endl;
    cout << "1).You will have random number form computer" << endl;
    cout << "2).Your task is to guess the result of that calculation." << endl;
    cout << "   There are 5 levels: Common, Epic, Mythical, Master and Great Saint." << endl;
    cout << "3).You will have 100 starting points." << endl;
    cout << "   Each round you will bet that number of points and the bet level." << endl;
    cout << "4).If you win, you will get (number of bet points*bet level) points." << endl;
    cout << "   If you lose, you will lose (number of bet points/bet level) points." << endl;
    cout << "=============================" << endl;
}

void checkpoint() {
    cout << endl << "Your point is: " << point << "point" << endl << endl;
}

int main() {
    welcome();
    homepage();

    while (true) {
        int luachon = 0;
        cout << "Enter your choice: ";
        cin >> luachon;

        switch (luachon) {
            case 1:
                setupprofile();
                break;
            case 2:
                checkpoint();
                break;
            case 3:
                howtoplay();
                break;
            case 5:
                return 0;
            case 6:
                credit();
                break;
            case 4: {
                cout << "===============================" << endl;
                cout << "Enter your level" << endl;
                cout << "1).Common" << endl;
                cout << "2).Epic" << endl;
                cout << "3).Mythical" << endl;
                cout << "4).Master" << endl;
                cout << "5).Great Saint" << endl;

                int level;
                do {
                    cout << "Enter your choice: ";
                    cin >> level;
                    if (level < 1 || level > 5) {
                        cout << "Invalid choice! Please choose between 1 and 5." << endl;
                    }
                } while (level < 1 || level > 5);

                if (level == 1) {
                    while (true) {
                        int pointbet = 0, nbet = 0;
                        welcomegame();

                        while (true) {
                            cout << "Enter amount of points you want to bet: ";
                            cin >> pointbet;
                            if (pointbet > point) {
                                cout << "The amount of betting points is too large compared to the current score. Try again." << endl;
                            } else {
                                break;
                            }
                        }

                        while (true) {
                            cout << "Enter the number of times you want to double your bet (1 to 3): ";
                            cin >> nbet;
                            if (nbet < 1 || nbet > 3) {
                                cout << "Invalid input. Please enter a number from 1 to 3." << endl;
                            } else {
                                break;
                            }
                        }

                        int pheptinh1 = random_number(0,101);
                        int pheptinh2 = random_number(0,101);
                        int daupheptinh = random_number(1,4);
                        switch(daupheptinh){
                            case 1:{
                                cout << "===============" << endl;
                                cout << "   GAME START  " << endl;
                                cout << "===============" << endl;
                                int anstam = pheptinh1 + pheptinh2;
                                cout << "Solve this problem" << endl;
                                cout << pheptinh1 << " + " << pheptinh2 << " = ? ";
                                int luachonpheptinh;
                                cin >> luachonpheptinh;
                                if (luachonpheptinh == anstam) {
                                    cout << "You win" << endl;
                                    point += (pointbet * nbet);
                                    cout << "Your point is: " << point << endl;
                                } else {
                                    cout << "You lose" << endl;
                                    cout << "Answer is: " << anstam << endl;
                                    point -= (pointbet / nbet);
                                    cout << "Your point is: " << point << endl;
                                }
                                    cout<<endl;
                                cout << "Do you want to continue playing? "<<endl;
                                cout << "Press 1 to continue"<<endl;
                                cout << "Press 2 to return to main menu"<<endl;
                                cout << "Press 3 to exit: ";
                                int choice;
                                cin >> choice;
                                if (choice == 1) {
                                    continue;
                                } else if (choice == 2) {
                                    break;
                                } else if (choice == 3) {
                                    return 0;
                                }
                                break;
                            }
                            case 2:{
                                cout << "===============" << endl;
                                cout << "   GAME START  " << endl;
                                cout << "===============" << endl;
                                int anstam = pheptinh1 - pheptinh2;
                                cout << "Solve this problem" << endl;
                                cout << pheptinh1 << " - " << pheptinh2 << " = ? ";
                                int luachonpheptinh;
                                cin >> luachonpheptinh;
                                if (luachonpheptinh == anstam) {
                                    cout << "You win" << endl;
                                    point += (pointbet * nbet);
                                    cout << "Your point is: " << point << endl;
                                } else {
                                    cout << "You lose" << endl;
                                    cout << "Answer is: " << anstam << endl;
                                    point -= (pointbet / nbet);
                                    cout << "Your point is: " << point << endl;
                                }
                                    cout<<endl;
                                cout << "Do you want to continue playing? "<<endl;
                                cout << "Press 1 to continue"<<endl;
                                cout << "Press 2 to return to main menu"<<endl;
                                cout << "Press 3 to exit: ";
                                int choice;
                                cin >> choice;
                                if (choice == 1) {
                                    continue;
                                } else if (choice == 2) {
                                    break;
                                } else if (choice == 3) {
                                    return 0;
                                }
                                break;
                            }
                            case 3:{
                                         cout << "===============" << endl;
                                cout << "   GAME START  " << endl;
                                cout << "===============" << endl;
                                int anstam = pheptinh1 * pheptinh2;
                                cout << "Solve this problem" << endl;
                                cout << pheptinh1 << " * " << pheptinh2 << " = ? ";
                                int luachonpheptinh;
                                cin >> luachonpheptinh;
                                if (luachonpheptinh == anstam) {
                                    cout << "You win" << endl;
                                    point += (pointbet * nbet);
                                    cout << "Your point is: " << point << endl;
                                } else {
                                    cout << "You lose" << endl;
                                    cout << "Answer is: " << anstam << endl;
                                    point -= (pointbet / nbet);
                                    cout << "Your point is: " << point << endl;
                                }
                                cout<<endl;
                                cout << "Do you want to continue playing? "<<endl;
                                cout << "Press 1 to continue"<<endl;
                                cout << "Press 2 to return to main menu"<<endl;
                                cout << "Press 3 to exit: ";
                                int choice;
                                cin >> choice;
                                if (choice == 1) {
                                    continue;
                                } else if (choice == 2) {
                                    break;
                                } else if (choice == 3) {
                                    return 0;
                                }
                                break;
                            }
                            case 4: {

                                cout << "===============" << endl;
                                cout << "   GAME START  " << endl;
                                cout << "===============" << endl;
                                double anstam = round((double)pheptinh1 / pheptinh2);
                                cout << "Solve this problem" << endl;
                                cout << pheptinh1 << " / " << pheptinh2 << " = ? ";
                                double luachonpheptinh;
                                cin >> luachonpheptinh;
                                if (luachonpheptinh == anstam) {
                                cout << "You win" << endl;
                                point += (pointbet * nbet);
                                cout << "Your point is: " << point << endl;
                        } else {
                                cout << "You lose" << endl;
                                cout << "Answer is: " << anstam << endl;
                                point -= (pointbet / nbet);
                                cout << "Your point is: " << point << endl;
                        }
                                cout<<endl;
                                cout << "Do you want to continue playing? "<<endl;
                                cout << "Press 1 to continue"<<endl;
                                cout << "Press 2 to return to main menu"<<endl;
                                cout << "Press 3 to exit: ";
                                int choice;
                                cin >> choice;
                                if (choice == 1) {
                                    continue;
                                } else if (choice == 2) {
                                    break;
                                } else if (choice == 3) {
                                    return 0;
                                }

                                    break;
                        }


                        }
                    }
                } else {
                    cout << "WAIT UPDATE" << endl;
                }
                break;
            }
            default:
                cout << "Invalid choice! Please choose between 1 and 6." << endl;
                break;
        }
    }
}
