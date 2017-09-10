#include<iostream>
#include<vector>
#include<memory>
#include "box4.h"
#include "package.h"
#include "truckload.h"
#include <cstdlib> // For random number generator
#include <ctime>

Truckload::Truckload(const std::vector< ptr<Box> >& boxes)
{
    for(auto pBox: boxes)
    {
        addBox(pBox);
    }
}
void Truckload::addBox(ptr<Box> pBox)
{
    auto pPackage = std::make_shared<Package>(pBox); // Create a Package

    if (pHead) // Check list is not empty
     pTail->setNext(pPackage); // Add the new object to the tail
    else // List is empty
     pHead = pPackage; // so new object is the head

   pTail = pPackage; // Store its address as tail
}

ptr<Box> Truckload::getFirstBox()
{
pCurrent = pHead->getNext();
return pHead->getBox();
}

ptr<Box> Truckload::getNextBox()
{
if (!pCurrent) // If there's no current...
return getFirstBox(); // ...return the 1st
auto pPackage = pCurrent->getNext(); // Save the next package
if (pPackage) // If there is one...
{
pCurrent = pPackage; // Update current to the next
return pPackage->getBox();
}
pCurrent = nullptr; // If we get to here...
return nullptr; // ...there was no next
}
void Truckload::listBoxes()
{
pCurrent = pHead;
size_t count {};
while (pCurrent)
{
pCurrent->getBox()->listBox();
pCurrent = pCurrent->getNext();
if(! (++count % 5)) std::cout << std::endl;
}
if (count % 5) std::cout << std::endl;
}

// Function to generate a random integer 1 to count
inline size_t random(size_t count)
{
return 1 + static_cast<size_t> (count*static_cast<double>(std::rand())/(RAND_MAX + 1.0));
}
int main()
{
const size_t dimLimit {99}; // Upper limit on Box dimensions
std::srand((unsigned)std::time(0)); // Initialize the random number generator
Truckload load1;

// Add 12 random Box objects to the list
const size_t boxCount {12};
for (size_t i {} ; i < boxCount ; ++i)
load1.addBox(std::make_shared<Box>(random(dimLimit), random(dimLimit), random(dimLimit)));
std::cout << "The first list:\n";
load1.listBoxes();
// Find the largest Box in the list
ptr<Box> pBox {load1.getFirstBox()};
ptr<Box> pNextBox {};
while (pNextBox = load1.getNextBox()) // Assign & then test pointer to next Box
if (pBox->compare(*pNextBox) < 0)
pBox = pNextBox;
std::cout << "\nThe largest box in the first list is:";
pBox->listBox();
std::cout << std::endl;
std::cout << "\nAfter deleting the largest box, the list contains:\n";
load1.listBoxes();
const size_t nBoxes {20}; // Number of vector elements
std::vector< ptr<Box> > boxes; // Array of Box objects
for (size_t i {} ; i < nBoxes ; ++i)
boxes.push_back(std::make_shared<Box>(
random(dimLimit), random(dimLimit), random(dimLimit)));
Truckload load2(boxes);
std::cout << "\nThe second list:\n";
load2.listBoxes();
pBox = load2.getFirstBox();
while (pNextBox = load2.getNextBox())
if (pBox->compare(*pNextBox) > 0)
pBox = pNextBox;
std::cout << "\nThe smallest box in the second list is";
pBox->listBox();
std::cout << std::endl;
}


