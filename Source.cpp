#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "RU");
	int topic;
	int varint;
	int cena;
	cout << "Ñòîèìîñòü îäíîé îòêðûòêè 2 ðóáëÿ" << endl;
	cout << "Âûáåðèòå òåìó îòêðûòêè:" << endl <<
		"1.Íîâîãîäíÿÿ" << endl <<
		"2.Ñ Äíåì Ðîæäåíèÿ" << endl <<
		"3.Ñ Äíåì Çàùèòíèêà îòå÷åñòâà" << endl;
		cin >> topic;
		cout << "Âûáåðèòå âàðèàíò îôîðìëåíèÿ:" << endl <<
			"1.A" << endl <<
			"2.B" << endl <<
			"3.C" << endl;
		cin >> varint;
		cout << "Âíåñåíèå ñóììû:" << endl <<
			"1.5 ðóáëåé" << endl <<
			"2.10 ðóáëåé" << endl <<
			"3.20 ðóáëåé" << endl;
		cin >> cena;
		if (topic == 1)
		{
			cout << "Âûáðàííàÿ òåìà: Íîâîãîäíÿÿ" << endl;
			if (varint == 1)
			{
				cout << "Âûáðàíûé âàðèàíò: A" << endl;
			}
			if (varint == 2)
			{
				cout << "Âûáðàíûé âàðèàíò: B" << endl;
			}
			if (varint == 3)
			{
				cout << "Âûáðàíûé âàèàíò: Ñ" << endl;
			}
		}
		if (topic == 2)
		{
			cout << "Âûáðàííàÿ òåìà: C Äíåì Ðîæäåíèÿ" << endl;
			if (varint == 1)
			{
				cout << "Âûáðàíûé âàðèàíò: A" << endl;
			}
			if (varint == 2)
			{
				cout << "Âûáðàíûé âàðèàíò: B" << endl;
			}
			if (varint == 3)
			{
				cout << "Âûáðàíûé âàèàíò: Ñ" << endl;
			}
		}
		if (topic == 3)
		{
			cout << "Âûáðàííàÿ òåìà: C Äíåì Çàùèòíèêà Îòå÷åñòâà" << endl;
			if (varint == 1)
			{
				cout << "Âûáðàíûé âàðèàíò: A" << endl;
			}
			if (varint == 2)
			{
				cout << "Âûáðàíûé âàðèàíò: B" << endl;
			}
			if (varint == 3)
			{
				cout << "Âûáðàíûé âàðèàíò: Ñ" << endl;
			}
			if (varint > 3)
			{
				cout << "Âàðèàíò îòñóòñòâóåò" << endl;
			}
		}
		if (topic > 3)
		{
			cout << "Òåìà îòñóòñòâóåò" << endl;
		}
		if (cena == 1)
		{
			cout << "Ñäà÷à:"<<endl<<
				"3 ðóáëÿ";
		}
		if (cena == 2)
		{
			cout << "Ñäà÷à:" << endl <<
				"8 ðóáëåé" << endl;
		}
		if (cena == 3)
		{
			cout << "Cäà÷à:" << endl <<
				"18 ðóáëåé" << endl;
		}
		if (cena > 3)
		{
			cout << "Ðàçìåð êóïþðû îòñóòñòâóåò" << endl;
		}
		system("pause");
		return 0;


}
