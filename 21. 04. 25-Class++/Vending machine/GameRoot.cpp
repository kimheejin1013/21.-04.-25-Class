#include "GameRoot.h"
#include "stdafx.h"

GameRoot::GameRoot() // 생성자
{
	pCharacter = new CharacInfo();
	pCharacter->SetCoin(10000);

	for (int i = 0; i < 10; ++i)
	{
		m_Cokes[i] = Coke("Coke", 1000);
		m_Sidas[i] = Sida("Sida", 1500);
	}
}

GameRoot::~GameRoot() // 소멸자
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
		// 음료수 개수 확인
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
			// 재고가 없어
			break;
		}


		// 플레이어 돈 확인
		if (pCharacter->GetCoin() >= m_Cokes[index].GetPrice())
		{
			// 돈 먼저 계산
			int coin = pCharacter->GetCoin();
			pCharacter->SetCoin(coin - m_Cokes[index].GetPrice());
			
			// 아이템 지급
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
	std::cout << "남은 돈: " << pCharacter->GetCoin() << std::endl;
	std::cout << "================" << std::endl;

}
