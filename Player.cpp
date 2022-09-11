#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

Player::Player() {
  recentMove = 'r';
  numMoves = 0;
}

char Player::getMove() { return recentMove; }

bool Player::win(Player* opponent) {
    char recent = recentMove;
    char op = opponent->getMove();


    if((recent == 'r' && op == 's') || (recent == 's' && op == 'p') || (recent == 'p' && op == 'r')) {
        return true;
    } else {
        return false;
    }
    return false;
}

Player::~Player() {}