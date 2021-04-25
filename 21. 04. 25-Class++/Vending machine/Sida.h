#pragma once
#include "BaseItem.h"
class Sida : public BaseItem
{
public:
	Sida() : BaseItem() {}
	Sida(std::string name, int price);
	~Sida();

};

