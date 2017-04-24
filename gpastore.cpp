#include "gpastore.h"
using namespace std;

GPAStore::GPAStore()
{

}

GPAStore::~GPAStore()
{

}

void GPAStore::addClass(std::string className)
{
    std::map<std::string, double>::iterator mit;
    mit = master.find(className);
    //if the class hasn't been added to database
    if(mit == master.end())
    {
        master.insert(make_pair(className, 0));
    }
}
