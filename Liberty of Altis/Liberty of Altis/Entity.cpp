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

//Check collisons
bool Entity::collisioncheck(Entity& other)
{
    // ur pos = other pos - 1
    if (PosXY.GetX() == other.PosXY.GetX()) {
        return true;
    }
    else
        return false;
}

void Entity::Movement(char direction)
{

}

void Entity::Attacking(char direction)
{

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

