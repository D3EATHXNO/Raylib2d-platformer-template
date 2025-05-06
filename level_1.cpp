#include "level_1.h"

void Level::DrawLevel()
{
    platform = 
    {
        0,    //x
        500,    //y
        9999999,    //width
        20      //height
    }; 
    DrawRectangleRec(platform,DARKGRAY);
}