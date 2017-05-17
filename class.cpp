#include "class.h"

Class::Class()
    : name_("unnamed_class"), gpa_(-1)
{

}

Class::Class(std::string name, double gpa)
    : name_(name), gpa_(gpa)
{

}

Class::~Class()
{

}

std::string Class::getName() const
{
    return name_;
}

bool Class::operator<(const Class& rhs)
{
    return this->name_ < rhs.getName();
}

void Class::addHw(std::string name, Homework* hw)
{
    std::map<std::string, Homework*>::iterator it;
    it = mapHw.find(name);
    //if hw with this name already exists in map
    if(it != mapHw.end())
    {
        throw std::invalid_argument("homework name exists");
        return;
    }
    mapHw.insert(std::make_pair(name, hw));
}
