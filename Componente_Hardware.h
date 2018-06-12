///////////////////////////////////////////////////////////
//  Componente_Hardware c++.h
//  Implementation of the Class Componente_Hardware
//  Created on:      04-jun-2018 11:40:02
//  Original author: Gabriel Carvalho
///////////////////////////////////////////////////////////

#if !defined(EA_9E6458CD_1BBC_4e1f_A964_69A5F15F6675__INCLUDED_)
#define EA_9E6458CD_1BBC_4e1f_A964_69A5F15F6675__INCLUDED_

class Componente_Hardware
{

public:
	Componente_Hardware();
	float Temperatura_Limite;

	void Exibir_Temperatura(float Temperatura);
	void Plotar_Temperatura(float Temperatura);

private:
	char Nome[20];
	float Temperatura;

};
#endif // !defined(EA_9E6458CD_1BBC_4e1f_A964_69A5F15F6675__INCLUDED_)
