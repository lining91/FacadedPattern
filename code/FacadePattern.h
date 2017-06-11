//	外观模式

//	股票类
class CStock{
public:
	void Sell() { cout << " 出售股票! "<< endl; }
	void Buy() { cout << " 购买股票! " << endl; }
};

//	国债类
class CNationalDebt{
public:
	void Sell() { cout << " 出售国债! " << endl; }
	void Buy() { cout << " 购买国债! " << endl; }
};

//	房地产类
class CRealty{
public:
	void Sell() { cout << " 出售房地产! " << endl; }
	void Buy() { cout << " 购买房地产!" << endl; }
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