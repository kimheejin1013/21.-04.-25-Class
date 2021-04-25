#pragma once
#include "BaseItem.h"

#define MAX_INVENTORY_COUNT 10

class CharacInfo
{
public:
	
	CharacInfo();
	~CharacInfo();

private:
	int m_Coin; //돈
	int m_EatCount; //먹은 개수
	//내가 구매한 물건들 (item)

	BaseItem m_inventory[MAX_INVENTORY_COUNT];

public:
	int GetCoin() { return m_Coin; } //접근자
	void SetCoin(int coin) { m_Coin = coin; } //설정자

	void AddItem(BaseItem item)
	{
		//아이템창이 가득 찼을 경우
		int index = -1; //일부러 값을 -1(임의) 티나게!
		for (int t = 0; i < MAX_INVENTORY_COUNT; ++i)
		{
			if (m_inventory[i].GetPrice() == 0)
			{
				index = i;
				break;
			}
		}

		if (index == -1)
		{
			return;
		}
		//아이템을 넣어 준다
		m_inventory[index] = item;
	}

};

