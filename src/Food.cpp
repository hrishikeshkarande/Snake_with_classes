#include "Food.h"

#define WIDTH 50
#define HEIGHT 25

void Food::gen_food()
{
    pos.X = rand() %50;
    pos.Y = rand() %20;
}

COORD Food::get_pos() { return pos; }