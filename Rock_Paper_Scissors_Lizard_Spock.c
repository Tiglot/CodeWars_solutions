#include <stdio.h>

//Work in progress
/*In this kata, your task is to implement an extended version of the famous rock-paper-scissors game. The rules are as follows:

    Scissors cuts Paper
    Paper covers Rock
    Rock crushes Lizard
    Lizard poisons Spock
    Spock smashes Scissors
    Scissors decapitates Lizard
    Lizard eats Paper
    Paper disproves Spock
    Spock vaporizes Rock
    Rock crushes Scissors

Task:

Given two values from the above game, return the Player result as "Player 1 Won!", "Player 2 Won!", or "Draw!".
Inputs

Values will be given as one of "rock", "paper", "scissors", "lizard", "spock".*/

typedef enum tool {ROCK, PAPER, SCISSORS, LIZARD, SPOCK};
typedef enum outcome {P1_WON, P2_WON, DRAW};

enum outcome play (enum tool p1, enum tool p2);

int main(int argc, char *argv[])
{
    
    return 0;
}

enum outcome play (enum tool p1, enum tool p2)
{
    return 0;
}
