#ifndef PARTNER_H
#define PARTNER_H
#include "elf.h"

class partner :public Elf
{
public:
    partner();

    virtual void skill();

    virtual void evolution();

    int price;


    ~partner();


};

#endif // PARTNER_H
