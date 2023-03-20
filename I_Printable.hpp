#ifndef _I_PRINTABLE_HPP_
#define  _I_PRINTABLE_HPP_
#include<iostream>

class I_Printable      // Interface for printing Account objects
{
    friend std :: ostream & operator<<(std :: ostream &os, const I_Printable& obj);
    public:
    virtual void print(std :: ostream &os) const = 0 ;
    virtual ~I_Printable() = default;
};

#endif  // _I_PRINTABLE_HPP_
