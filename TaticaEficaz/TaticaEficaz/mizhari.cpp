#include "pch.h"
#include "mizhari.h"
namespace Silva
{
	int a;
	int b;
}
namespace Neves {
	double a;
	double b;
}
void mizhari::principal() {
	Silva::a = 4;
	Silva::a = 7;
	Neves::a = 5.453;
	Neves::b = 2.13e4;
	cout << "Silva::a" << Silva::a << endl
		<< "Silva::b" << Silva::b << endl
		<< "Neves::a" << Neves::a << endl
		<< "Neves::b" << Neves::b << endl;

	cout << "\n\n\n";
	cout << '\n' << "Lapis  " << lapis;
	cout << '\n' << "Borrachas  " << borrachas;
	cout << '\n' << "Canetas  " << canetas;
	cout << '\n' << "Cadernos  " << cadernos;
	cout << '\n' << "Fitas  " << fitas;
	cout << endl;

	cout << "\n\n\n";
	cout << '\n' << "Lapis  " << setw(12) << lapis;
	cout << '\n' << "Borrachas  " << setw(12) << borrachas;
	cout << '\n' << "Canetas  " << setw(12) << canetas;
	cout << '\n' << "cadernos  " << setw(12) << cadernos;
	cout << '\n' << "fitas  " << setw(12) << fitas;

	cout << setfill('.'); //handler
	cout << '\n' << "Lapis  " << setw(12) << lapis;
	cout << '\n' << "Borrachas  " << setw(12) << borrachas;
	cout << '\n' << "Canetas  " << setw(12) << canetas;
	cout << '\n' << "cadernos  " << setw(12) << cadernos;
	cout << '\n' << "fitas  " << setw(12) << fitas;

	cout << "\n\n\n";
	cout << setiosflags(ios::fixed) //point decimal(not exponencial)
		<< setiosflags(ios::showpoint) //ever print the decimal point
		<< setprecision(2); //two decimal casas
	cout << '\n' << "Lapis  " << setw(12) << lapis2;
	cout << '\n' << "Borrachas  " << setw(12) << borrachas2;
	cout << '\n' << "Canetas  " << setw(12) << canetas2;
	cout << '\n' << "cadernos  " << setw(12) << cadernos2;
	cout << '\n' << "fitas  " << setw(12) << fitas2;

	cout << '\n' << "OBJETO  " << setw(12) << "CODIGO" << endl;
	cout << '\n' << "Lápis  " << setw(12) << "WQR" << endl;
	cout << '\n' << "Borrachas  " << setw(12) << "ASO" << endl;
	cout << '\n' << "Canetas  " << setw(12) << "KPX" << endl;
	cout << '\n' << "Cadernos  " << setw(12) << "FJI" << endl;
	cout << '\n' << "Fitas  " << setw(12) << "TYE" << endl;

	n = 65;
	cout << '\n' << "Hexadecimal: " << hex << n;
	cout << '\n' << "Octal      :" << oct << n;
	cout << '\n' << "Decimal      :" << dec << n;
	cout << endl;

	system("cls"); // Limpa a tela
	cout << "\n\n";

	// Inicia a impressão do carro
	cout << "\n\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC";
	cout << "\n\t\xDFO\xDF\xDF\xDF\xDFO\xDF";
	// Fim da impressão do carro
	cout << "\n\n";
	//Inicia a impressão da caminhonete
	cout << "\n\t\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB";
	cout << "\n\t\xDFO\xDF\xDF\xDF\xDF\xDFO\xDF";
	// Fim da impressão da caminhote
	cout << "\n\n";
	cout << endl;
	system("PAUSE");

	system("cls"); // Limpa a tela
	cout << "\n\n";
	cout << "\n\t\xC9\xCD\xBB";
	cout << "\n\t\xBA \xBA";
	cout << "\n\t\xC8\xCD\xBC";
	cout << "\n\n";
	cout << endl;
	system("PAUSE");
	system("cls"); // Limpa a tela, frame exercise 24, with 4 width
	cout << "\n\n";
	cout << "\n\t\xC9\xCD\xCD\xBB";
	cout << "\n\t\xBA  \xBA";
	cout << "\n\t\xBA  \xBA";
	cout << "\n\t\xC8\xCD\xCD\xBC";
	cout << "\n\n";
	cout << endl;
	system("PAUSE");
	system("cls"); // Limpa a tela, frame exercise 25
	cout << "um" << "\n" << "\t\tdois" << "\n" << "\t\t\ttrês\n";
	system("PAUSE");
	system("cls"); // Limpa a tela, frame exercise 26
	cout << "Programação Orientada a Objetos. Linguagem Cplus plus.";
	cout << "\nProgramação orientada a objetos.";
	cout << "\n";
	cout << "Linguagem C plus plus.";
	cout << "\n\n";
	cout << "\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
	cout << "\n\t\xBAProgramação Orientada a Objetos.\xBA";
	cout << "\n\t\xBALinguagem C plus plus           \xBA";
	cout << "\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
	cout << "\n\n";
	cout << endl;
	system("PAUSE");
	x = 9;
	y = 10;
	x++ + y;
	cout << x << y;
}
