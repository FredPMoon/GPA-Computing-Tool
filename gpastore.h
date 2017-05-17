#ifndef GPASTORE_H
#define GPASTORE_H

#include <iostream>
#include <stdexcept>
#include <vector>
#include <map>
#include <set>

class GPAStore
{
public:
    GPAStore();
    ~GPAStore();
    void addClass(std::string className);
    double getClassGPA(std::string className) const;
    void setClassGPA(std::string className, double gpa);
    double computeMaster();
private:
    std::map<std::string, double> master;

};

#endif // GPASTORE_H
