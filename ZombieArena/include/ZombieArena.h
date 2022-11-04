#pragma once
#ifndef ZOMBIEARENA_H
#define ZOMBIEARENA_H

#include "Zombie.h"

using namespace sf;

int createBackground(VertexArray& rVA, IntRect arena);
Zombie* createHorde(int numZombies, IntRect arena);

#endif // TEXTUREHOLDER_H
