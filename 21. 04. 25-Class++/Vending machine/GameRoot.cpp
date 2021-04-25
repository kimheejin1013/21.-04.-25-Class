#include "GameRoot.h"
#include "stdafx.h"

GameRoot::GameRoot() // ������
{
	pCharacter = new CharacInfo();
	pCharacter->SetCoin(10000);

	for (int i = 0; i < 10; ++i)
	{
		m_Cokes[i] = Coke("Coke", 1000);
		m_Sidas[i] = Sida("Sida", 1500);
	}
}

GameRoot::~GameRoot() // �Ҹ���
{
	delete pCharacter;
}

void GameRoot::Update()
{
	system("cls");
	PrintCharacterInfo();
}

void GameRoot::LateUpdate(int input)
{
	switch (input)
	{
	case 0:
	{
		// ����� ���� Ȯ��
		int index = -1;
		for (int i = 0; i < 10; ++i)
		{
			// if (m_Cokes[i].isSell == false)
			if (!m_Cokes[i].isSell) 
			{
				index = i;
				break;
			}
		}
		
		if (index == -1)
		{
			// ��� ����
			break;
		}


		// �÷��̾� �� Ȯ��
		if (pCharacter->GetCoin() >= m_Cokes[index].GetPrice())
		{
			// �� ���� ���
			int coin = pCharacter->GetCoin();
			pCharacter->SetCoin(coin - m_Cokes[index].GetPrice());
			
			// ������ ����
			pCharacter->AddItem(m_Cokes[index]);
			m_Cokes[index] = Coke();
		}


		


	} break;

	default:
		break;
	}

}

void GameRoot::PrintCharacterInfo()
{
	std::cout << "================" << std::endl;
	std::cout << "���� ��: " << pCharacter->GetCoin() << std::endl;
	std::cout << "================" << std::endl;

}
