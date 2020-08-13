//
//  Player.hpp
//  project 1
//
//  Created by Wes Ko on 1/14/20.
//  Copyright © 2020 Wes Ko. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
using namespace std;

class Arena;

class Player
{
public:
    // Constructor
    Player(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;
    
    // Mutators
    string dropPoisonVial();
    string move(int dir);
    void   setDead();
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    bool   m_dead;
};

#endif /* Player_hpp */
