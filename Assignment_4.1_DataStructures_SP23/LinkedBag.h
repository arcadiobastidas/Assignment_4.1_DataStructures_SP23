#ifndef _LINKED_BAG
#define _LINKED_BAG

#include "BagInterface.h"
#include "Node.cpp"

#include <iostream>
using namespace std;

template<class ItemType>
class LinkedBag : public BagInterface<ItemType>
{
private:
    Node<ItemType>* headPtr; // Pointer to first node
    int itemCount;           // Current count of bag items
   
    // Returns either a pointer to the node containing a given entry
    // or the null pointer if the entry is not in the bag.
    Node<ItemType>* getPointerTo(const ItemType& target) const;
   
public:
    LinkedBag();
    LinkedBag(const LinkedBag<ItemType>& aBag); // Copy constructor
    virtual ~LinkedBag();                       // Destructor should be virtual
    int getCurrentSize() const override;
    bool isEmpty() const override;
    bool add(const ItemType& newEntry) override;
    bool remove(const ItemType& anEntry) override;
    void clear() override;
    bool contains(const ItemType& anEntry) const override;
    int getFrequencyOf(const ItemType& anEntry) const override;
    vector<ItemType> toVector() const override;
}; // end LinkedBag

#endif