#ifndef GPASTORE_H
#define GPASTORE_H

#include <iostream>
#include <vector>
#include <map>


class GPAStore
{
public:
    GPAStore();
    ~GPAStore();
    void addClass(std::string className);
private:
    std::map<std::string, double> master;

};

#endif // GPASTORE_H
