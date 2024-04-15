#include <bits/stdc++.h>
using namespace std;
string nameuser = "Guest";
long long point=100;
int tieptuc=1;
bool dinhdang=true;
void welcome() {
    cout << "===============================" << endl;
    cout << "    WELCOME TO MINIGAME" << endl;
    cout << "Hi '" << nameuser << "' welcome" << endl;
}

void homepage() {
    cout << "=============================" << endl;
    cout << "ENTER YOUR CHOICE" << endl;
    cout << "1).Setup profile" << endl;
    cout << "2).Check your ponit" << endl;
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
    cout << "2).Your task is to guess the result of that calculation."<< endl;
    cout << "   There are 5 levels: Common, Epic, Mythical, Master and Great Saint." << endl;
    cout << "3).You will have 100 starting points." << endl;
    cout << "   Each round you will bet that number of points and the bet level." << endl;
    cout << "4).If you win, you will get (number of bet points*bet level) points." << endl;
    cout << "   If you lose, you will lose (number of bet points/bet level) points." << endl;
    cout << "=============================" << endl;
}
void checkpoint(){
     cout<<endl<<"Your point is: " << point << "point" << endl << endl;
}
int main(){
    welcome();
    homepage();
    int luachon = 0;
    cout << "Enter your choice: ";
    cin >> luachon;

    if (luachon < 1 || luachon > 6) {
        cout << "Invalid choice! Please choose between 1 and 6." << endl;
        return main();
    }

    switch (luachon) {
        case 1:
            setupprofile();
            return main();
        case 2:
            checkpoint();
            return main();
        case 3:
            howtoplay();
            return main();

        case 5:
            return 0;
        case 6:
            credit();
            return main();

        case 4:
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
            }
            while (level < 1 || level > 5);{
                if(level==1){
                    cout<<"WAIT UPDATE"<<endl;
                }
                else if(level==2){
                    cout<<"WAIT UPDATE"<<endl;
                }
                else if(level==3){
                    cout<<"WAIT UPDATE"<<endl;
                }
                else if(level==4){
                    cout<<"WAIT UPDATE"<<endl;
                }
                else if(level==5){
                    cout<<"WAIT UPDATE"<<endl;
                }
            }

       
    }

}

