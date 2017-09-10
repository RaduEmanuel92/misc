#ifndef PACKAGE_H
#define PACKAGE_H
#include<memory>
#include "box4.h"

template <typename T> using ptr = std::shared_ptr<T>;

class Package
{
private:
    ptr<Box> pbox;
    ptr<Package> pnext;
public:
    //constructors

    Package(ptr<Box> pb) : pbox{pb}, pnext{nullptr}
    {

    }
    ptr<Box>& getBox()
    {
        return pbox;
    }
    ptr<Package>& getNext()
    {
        return pnext;
    }
    void setNext(ptr<Package>& pPackage)
    {
        pnext= pPackage;
    }

};
#endif // PACKAGE_H_INCLUDED
