#include "Entity.h"


bool Entity::isEntityAlive(void)
{
    //check if health below zero 
    if (Health <= 0) {
        //false if entity died
        return false;
    }
    //if alive return true
    return true;

}

int Entity::GetX(void)
{
    return PosXY.GetX();
}

int Entity::GetY(void)
{
    return PosXY.GetY();
}
