#pragma once
#include "BaseItem.h"

#define MAX_INVENTORY_COUNT 10

class CharacInfo
{
public:
	
	CharacInfo();
	~CharacInfo();

private:
	int m_Coin; //��
	int m_EatCount; //���� ����
	//���� ������ ���ǵ� (item)

	BaseItem m_inventory[MAX_INVENTORY_COUNT];

public:
	int GetCoin() { return m_Coin; } //������
	void SetCoin(int coin) { m_Coin = coin; } //������

	void AddItem(BaseItem item)
	{
		//������â�� ���� á�� ���
		int index = -1; //�Ϻη� ���� -1(����) Ƽ����!
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
		//�������� �־� �ش�
		m_inventory[index] = item;
	}

};

