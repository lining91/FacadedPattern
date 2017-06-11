#include <iostream>
using namespace std;

#include "FacadePattern.h"

void main()
{
	CFacade* pPerson = new CFacade();
	if ( pPerson == NULL )
		return;

	pPerson->Buy();
	pPerson->Sell();

	delete pPerson;
	pPerson = NULL;

	system("pause");
	return;
}