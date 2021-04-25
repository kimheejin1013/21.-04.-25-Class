#include "stdafx.h"
#include "CharacInfo.h"

CharacInfo::CharacInfo()
	:m_EatCount(0)
{
	for (int i = 0; i < MAX_INVENTORY_COUNT; ++i)
		m_inventory[i] = BaseItem();


}

CharacInfo::~CharacInfo()
{

}
