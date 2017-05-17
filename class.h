#ifndef CLASS_H
#define CLASS_H

#include "homework.h"

class Class
{
public:
    Class();
    Class(std::string name, double gpa);
    ~Class();
    std::string getName() const;
    //overload less-than operator to make it sortable in set
    bool operator<(const Class& rhs);
    void addHw(std::string name, Homework* hw);
private:
    std::string name_;
    /*GPA scale:
        A = 4.0 points
        A– = 3.7 points
        B+ = 3.3 points
        B = 3.0 points
        B– = 2.7 points
        C+ = 2.3 points
        C = 2.0 points
        C– = 1.7 points
        D+ = 1.3 points
        D = 1.0 points
        D– = 0.7 points
        F = 0 points
        UW = 0 points
        IX = 0 points
    */
    //overall gpa of this class, should be 0 ~ 4.0
    double gpa_;
    //key follows the convention of homework name
    std::map<std::string, Homework*> mapHw;
};

#endif // CLASS_H
