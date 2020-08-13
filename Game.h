//
//  Game.hpp
//  project 1
//
//  Created by Wes Ko on 1/14/20.
//  Copyright © 2020 Wes Ko. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>

using namespace std;

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nVampires);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
    
    // Helper functions
    string takePlayerTurn();
};

#endif /* Game_hpp */
