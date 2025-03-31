#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type)
{
    return;
}

Weapon::~Weapon()
{

}

std::string Weapon::getType(void) const
{
    return _type;
}

void Weapon::setType(std::string const type)
{
    _type = type;
}
