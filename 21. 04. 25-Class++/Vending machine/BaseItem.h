#pragma once

class BaseItem
{
public:
	// �����ڵ�, �Ҹ��ڵ� �Լ�!
	// BaseItem = BaseItem;
	// BaseItem = BaseItem();
	// BaseItem = BaseItem(name, price);	���������� ������ ȣ��
	// ����! �����ڰ� ����� �ؾ� ��
	// ���� �� ���� �����Ϸ��� �Ϲ������� �⺻ �����ڸ� �����
	BaseItem();
	BaseItem(std::string name, int price);
	~BaseItem();

protected:
	// ���ڿ�
	std::string m_Name;
	int m_Price;

public:
	bool isSell;

public:
	std::string GetName() { return m_Name; }
	int GetPrice() { return m_Price; }

	

};

