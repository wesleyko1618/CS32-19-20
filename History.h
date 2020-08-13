//
//  History.hpp
//  project 1
//
//  Created by Wes Ko on 1/14/20.
//  Copyright © 2020 Wes Ko. All rights reserved.
//

#ifndef History_hpp
#define History_hpp

#include <stdio.h>
#include "globals.h"

class Arena;
class Vampire;

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
private:
    Arena* m_arena;
    Vampire* m_vampires[MAXVAMPIRES];
    char historyGrid[MAXROWS][MAXCOLS];
    int m_rows;
    int m_cols;
};
#endif /* History_hpp */
