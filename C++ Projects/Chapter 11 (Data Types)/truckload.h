#ifndef TRUCKLOAD_H
#define TRUCKLOAD_H
#include "package.h"

class Truckload
{
private:
    ptr<Package> pHead;
    ptr<Package> pTail;
    ptr<Package> pCurrent;
public:

Truckload() {} // No-arg constructor empty truckload

Truckload(ptr<Box> pBox) // Constructor - one Box
{
    pHead = pTail = std::make_shared<Package>(pBox);
}

Truckload(const std::vector< ptr<Box> >& boxes); // Constructor - vector of Boxes

ptr<Box> getFirstBox(); // Get the first Box

ptr<Box> getNextBox(); // Get the next Box

void addBox(ptr<Box> pBox); // Add a new Box

bool deleteBox(ptr<Box> pBox); // Delete a Box

void listBoxes();

};


#endif // TRUCKLOAD_H