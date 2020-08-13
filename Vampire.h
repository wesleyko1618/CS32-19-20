//
//  Vampire.hpp
//  project 1
//
//  Created by Wes Ko on 1/8/20.
//  Copyright © 2020 Wes Ko. All rights reserved.
//

#ifndef Vampire_hpp
#define Vampire_hpp

#include <stdio.h>

class Arena;        //needed this because of the pointer for Arena

class Vampire
{
public:
    // Constructor
    Vampire(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;
    
    // Mutators
    void move();
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};

#endif /* Vampire_hpp */
