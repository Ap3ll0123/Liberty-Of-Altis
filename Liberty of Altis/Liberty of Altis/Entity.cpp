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

int Entity::hpgetter()
{
    return Health;
}

int Entity::attackgetter()
{
    return Attack;
}

int Entity::rangegetter()
{
    return Range;
}

void Entity::Forestrange(bool a)
{
    //for forest range (dont call if theres no forest range
    if (a == true) {
        Range = Range / 2;
    }
}

int Entity::costgetter()
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
