///////////////////////////////////////////////////////////
//  Alarme c++.h
//  Implementation of the Class Alarme
//  Created on:      04-jun-2018 11:44:53
//  Original author: Gabriel Carvalho
///////////////////////////////////////////////////////////

#if !defined(EA_4347A17B_5C44_4df9_8E70_105C0E20E2FD__INCLUDED_)
#define EA_4347A17B_5C44_4df9_8E70_105C0E20E2FD__INCLUDED_

class Alarme
{

public:
	Alarme();

	char *Exibir_Mensagem(bool);

private:
	bool Comparador;
	char Nome[20];

};
#endif // !defined(EA_4347A17B_5C44_4df9_8E70_105C0E20E2FD__INCLUDED_)
