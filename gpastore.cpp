#include "gpastore.h"
using namespace std;

GPAStore::GPAStore()
{

}

GPAStore::~GPAStore()
{

}

void GPAStore::addClass(string className)
{
    map<string, double>::iterator mit;
    mit = master.find(className);
    //if the class hasn't been added to database
    if(mit == master.end())
    {
        master.insert(make_pair(className, 0));
    }
    else
    {
        throw invalid_argument("class already exists.");
    }
}

double GPAStore::getClassGPA(string className) const
{
    return (master.find(className))->second;
}

void GPAStore::setClassGPA(string className, double gpa)
{
    (master.find(className))->second = gpa;
}

double GPAStore::computeMaster()
{
    std::map<std::string, double>::iterator it;
    double sum = 0;
    for(it=master.begin();it!=master.end();++it)
    {
        sum += it->second;
    }
    return sum / master.size();
}
