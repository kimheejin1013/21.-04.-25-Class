#include "stdafx.h"
#include "BaseItem.h"

BaseItem::BaseItem()
	: m_Price(0), isSell(false)
{
}

BaseItem::BaseItem(std::string name, int price)
	:m_Name(name), m_Price(price), isSell(false)
{

}

BaseItem::~BaseItem()
{
}
