#ifndef HOMEWORK_H
#define HOMEWORK_H

#include <set>
#include <map>
#include <vector>
#include <string>
#include <stdexcept>

class Homework
{
public:
    Homework();
    Homework(std::string name, int num, double actualPoints, double maxPoints, double percentage);
    ~Homework();
    int getNum() const;
    //overload less-than operator to make it sortable in set
    bool operator<(const Homework& rhs);
private:
    //homework name convention: i.e. "hw1", "hw2"
    std::string name_;
    //# of homework should be >= 1
    int num_;
    //points scored
    double actualPoints_;
    //the maximum points of this homework
    double maxPoints_;
    //the score of this homework = actualPoints / maxPoints
    double score_;
    //how much this homework is weighted, should be 0 ~ 1 (0% ~ 100%)
    double percentage_;
};

#endif // HOMEWORK_H
