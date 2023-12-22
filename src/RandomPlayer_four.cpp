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
// Set player symbol and name as Random ComputerPlayer
RandomPlayer_four::RandomPlayer_four (char symbol, int xs, int ys) :Player(symbol) {
    this->xs = 6;
    this->ys = 7;
    this->name =
            "Random Computer Player";
    cout << "My names is " << name << endl;
}
// Generate a random move
void RandomPlayer_four::get_move (int& x, int& y) {
    x = (int) (rand()/ (RAND_MAX + 1.0) * 6);
    y = (int) (rand()/ (RAND_MAX + 1.0) * 7);
}
