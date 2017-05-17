#include "homework.h"

Homework::Homework()
    : name_("unnamed_homework"), num_(-1), actualPoints_(-1), maxPoints_(-1), score_(-1), percentage_(0)
{

}

Homework::Homework(std::string name, int num, double actualPoints, double maxPoints, double percentage)
    : name_(name), num_(num), actualPoints_(actualPoints), maxPoints_(maxPoints), score_(actualPoints / maxPoints), percentage_(percentage)
{

}

Homework::~Homework()
{

}

int Homework::getNum() const
{
    return num_;
}

bool Homework::operator<(const Homework& rhs)
{
    return this->num_ < rhs.getNum();
}
