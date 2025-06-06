#pragma once

#include "..\..\Utilities\Containers\Vector2D.h"

class GameObject {
private:
    Vector2D<int> coordinates;
public:
    GameObject(Vector2D<int> coordinates);
    Vector2D<int>& get_coordinates();
    Vector2D<int> get_coordinates() const;
    void make_turn();
};