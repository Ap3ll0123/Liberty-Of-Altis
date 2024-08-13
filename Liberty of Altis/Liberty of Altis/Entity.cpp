#include "Entity.h"


Entity::Entity(void)
{
    Health = 0;
    Attack = 0;
    Range = 0;
    Cost = 0;
}

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

int Entity::GetHealth(void)
{
    return Health;
}

int Entity::GetAttack(void)
{
    return Attack;
}

int Entity::GetRange(void)
{
    return Range;
}

int Entity::GetCost(void)
{
    return Cost;
}

void Entity::SetX(int xpos)
{
    PosXY.SetX(xpos);
}

void Entity::SetY(int ypos)
{
    PosXY.SetY(ypos);
}
