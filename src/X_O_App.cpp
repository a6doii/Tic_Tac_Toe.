// Class definition for XO_App class
// Author:  Mohammad El-Ramly
// Date:    10/10/2022
// Version: 1

#include <iostream>
#include"../include/BoardGame_Classes.hpp"
using namespace std;

int main() {
    int choice;
    Player* players[2];
    players[0] = new Player (1, 'x');

    cout << "Welcome to FCAI X-O Game. :)\n";
    cout<<"Choose Game: "<<'\n';
    cout<<"Enter 1 for normal XO: "<<'\n';
    cout<<"Enter 2 for Pyramid XO: "<<'\n';
    cout<<"Enter 3 for Four in a row XO: "<<'\n';
    int choice2;
    cin>>choice2;
    cout << "Press 1 if you want to play with computer: \n Press 2 if you want to play with AI";
    cin >> choice;
    if (choice != 1&&choice != 2)
        players[1] = new Player (2, 'o');
    else if (choice==1) {
        //Player pointer points to child
        players[1] = new RandomPlayer_four('o', 6, 7);
    }
    else if (choice==2){
        players[1] = new  AI_Player_four ('o');
    }

    if(choice2==1){
        GameManager x_o_game (new X_O_Board(), players);
        x_o_game.run();
    }
    else if(choice2==2) {
        GameManager x_o_game(new Pyramic_X_O(), players);
        x_o_game.run();
    }
    else if (choice2==3){
        GameManager x_o_game(new four_in_a_row(), players);
        x_o_game.run();
    }
    system ("pause");
}

