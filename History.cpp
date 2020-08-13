//
//  History.cpp
//  project 1
//
//  Created by Wes Ko on 1/14/20.
//  Copyright © 2020 Wes Ko. All rights reserved.
//

#include <iostream>
#include "History.h"
#include "Vampire.h"
#include "Arena.h"
#include "globals.h"

using namespace std;

History::History(int nRows, int nCols)
{
    int r, c;
    m_rows = nRows;
    m_cols = nCols;
    for (r = 1; r <= m_rows; r++)
        for (c = 1; c <= m_cols; c++)
            historyGrid[r-1][c-1] = '.';
}

bool History::record(int r, int c)
{    
    if (r < 1 || r > m_rows || c < 1 || c > m_cols)
    {
        return false;
    }
    if (historyGrid[r-1][c-1] == '.')
        historyGrid[r-1][c-1] = 'A';
    
    if (historyGrid[r-1][c-1] >= 'A' && historyGrid[r-1][c-1] < 'Z')
        historyGrid[r-1][c-1] += 1;
    else
        historyGrid[r-1][c-1] = 'Z';
    
    return true;
}

void History::display() const
{
    clearScreen();
    
    for (int r = 1; r <= m_rows; r++)
        for (int c = 1; c <= m_cols; c++)
            cout << historyGrid[r-1][c-1];
    cout << endl;
}
