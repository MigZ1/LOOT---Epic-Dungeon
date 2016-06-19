#pragma once
#include <stdint.h>
#include "system.h"
#include "world.h"
#include "player.h"

class Render
{
  private:
    System * ab;
    World * world;
    Player * player;

    bool wallShow[11] = {};
  public:
    int8_t renderPos;

    Render(System & ab,World & world,Player & player);

    void init();
    void step();
    void draw();

    bool wallCheck(int8_t x,int8_t y);
    void calculateView(int8_t x,int8_t y,uint8_t dir);
    void drawView();
    void drawMap();
    void drawStats();
};