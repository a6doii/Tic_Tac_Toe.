
//File name : RandomPlayer_four.cpp
//purpose   :The Game (Four in a Row )
//Author    : Al-Hussain Abdo Mohamed
//ID        :20220878
//Section   :S23
//Date      :15/12/2023
#include<iostream>
#include<random>
#include<iomanip>
#include<algorithm>
#include"../include/BoardGame_Classes.hpp"
using namespace std;

// Set player symbol and name as Random Computer Player
AI_Player_four::AI_Player_four(char symbol)  : Player(symbol)
{
    this->xs = 6;
    this->ys = 7;
    this->name = "AI player ^_* ";
    cout << "My names is " << name << endl;
}

// Generate a random move
void AI_Player_four :: get_move (int& x, int& y,Board& obj)   {
    obj.n_rows = 6, obj.n_cols = 7;
    for (int i = 0; i < obj.n_rows; i++) {
        for (int j = 0; j < obj.n_cols; j++)
            if(obj.board[5][3]=='0'){
                x=5;y=3;
            }
            else {x=4;y=3;}
        if(obj.board[5][0]=='0'){
            x=5;y=0;
        }
        else if (obj.board[5][6]=='0'){
            x=5;y=6;
        }

    }



}
void AI_Player_four ::best_move(int& x,int& y,Board& obj) {
    for (int i = 0; i <obj.n_rows ; ++i) {
        for (int j = 0; j < obj.n_cols; ++j) {
            if(obj.board[i][j]=='X'){
                x=(i-1);y=j;
            }

        }
    }

}
