#pragma once
#include "BaseItem.h"
class Coke : public BaseItem
{
public:
	Coke() : BaseItem() {}
	Coke(std::string name, int price);
	~Coke();
};

