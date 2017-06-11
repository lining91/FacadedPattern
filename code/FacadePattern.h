//	���ģʽ

//	��Ʊ��
class CStock{
public:
	void Sell() { cout << " ���۹�Ʊ! "<< endl; }
	void Buy() { cout << " �����Ʊ! " << endl; }
};

//	��ծ��
class CNationalDebt{
public:
	void Sell() { cout << " ���۹�ծ! " << endl; }
	void Buy() { cout << " �����ծ! " << endl; }
};

//	���ز���
class CRealty{
public:
	void Sell() { cout << " ���۷��ز�! " << endl; }
	void Buy() { cout << " ���򷿵ز�!" << endl; }
};

class CFacade{
public:
	CFacade()
	{
		pStock = new CStock();
		pNationalDebt = new CNationalDebt();
		pRealty = new CRealty();
	}

	~CFacade()
	{
		delete pStock;
		delete pNationalDebt;
		delete pRealty;
	}

	void Buy()
	{
		pStock->Buy();
		pNationalDebt->Buy();
		pRealty->Buy();
	}

	void Sell()
	{
		pStock->Sell();
		pNationalDebt->Sell();
		pRealty->Sell();
	}

public:
	CStock*				pStock;
	CNationalDebt*		pNationalDebt;
	CRealty*			pRealty;
};