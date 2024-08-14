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
bool Entity::Entitycollision(Entity& other)
{

    int XEntity = PosXY.GetX();
    int YEntity = PosXY.GetY();
    int XOther = other.PosXY.GetX();
    int YOther = other.PosXY.GetY();

    //check if other is UD direction of entity 
    if ((XEntity == XOther) && ((YEntity == YOther - 1) || (YEntity == YOther + 1))) {
        //return true if collsion 
        return true;
    }
    //check if other is LR direction of entity 
    else if ((YEntity == YOther) && ((XEntity == XOther - 1) || (XEntity == XOther + 1))) {
        //return true if collsion 
        return true;
    }
    else
        return false;
}

//set xy position
void Entity::SetPosition(int x, int y)
{
    PosXY.SetX(x);
    PosXY.SetY(y);
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

char Entity::Draw_Icon(void)
{
    return 'E';
}