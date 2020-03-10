// Card-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include "GameManager.h"
using namespace std;

void displayMainMenu();
int getMenuSelection();
void quit();
void createGame();

int main()
{
    int input = 0;

    do {
        displayMainMenu();
        input = getMenuSelection();
        switch (input) {
            case 1:
                createGame();
                break;

            case 2:
                quit();
                break;

            default:
                cout << "Invalid input, please try again" << endl;
                break;
        }
    } while (input != 1 && input != 2);
}

void displayMainMenu() {
    cout << "------------------------------" << endl;
    cout << "      Welcome to Card-G!      " << endl;
    cout << "           1. Play            " << endl;
    cout << "           2. Quit            " << endl;
    cout << "------------------------------" << endl;
    cout << endl;
    cout << "Please enter your option (1 or 2):" << endl;
}

int getMenuSelection() {
    int input;
    cin >> input;
    return input;
}

void createGame() {
    GameManager gameManager = GameManager(2);
}

void quit() {
    exit(0);
}