//#include <iostream>
//int main()
//{
//	using namespace std;
//	const int cislo = 10;
//	double pole[cislo];
//	double priemer = 0, pocet = 0;
//	double cyklus;
//	cout << "prosim zadaj desat cisel a ja ti vypocitam ich priemer a vzpisem kolko cisel bolo vacsich ako priemer" << endl;
//	int i = 0;
//	for (; i < 10 && cin >> cyklus;i++)
//	{
//		pole[i] = cyklus; 
//		priemer += cyklus;
//		cout << "zadaj dalsie cislo ";
//		
//	}
//	if (i != 0)
//	{
//		double avr = priemer / i;
//		for (int j = 0; j < i; j++)
//		{
//			if (pole[j] > avr)
//			
//				pocet++;
//			
//
//		}
//		cout << "priemer je " << avr << "cisel vacsich ako priemer je " << pocet << "to je vse pratele " << endl;
//	}	else
//		cout << "bla" << endl;
//
//
//
//
//
//	return 0;
//}
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int SIZE = 10;
//    double arr[SIZE];
//    double donat, sum = 0.0;
//    int cnt = 0, i = 0;
//    cout << "Enter donation values: ";
//    for (; i < SIZE && cin >> donat; i++)
//    {
//        arr[i] = donat;
//        sum += donat;
//        cout << "Enter donation values: ";
//    }
//    if (i != 0)
//    {
//        double avr = sum / i;
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] > avr)
//                cnt++;
//        }
//        cout << "Average = " << avr << "; Numbers larger than average = "
//            << cnt << endl;
//    }
//    else
//        cout << "Ooops.. No data." << endl;
//    return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	cout << "prosim zadaj jednu z nasledujucich moznosti" << endl;
//	cout << "m) masozravec p) pianist\n"
//	     <<	"s) strom h) hra" << endl;
//	char ch;
//	cin >> ch;
//	while (ch != 'm' && ch != 'p' && ch != 's' && ch != 'h')
//	{
//		cout << "musis zadat m, p, s alebo h ";
//		cin >> ch;
//	}
//	switch (ch)
//	{
//		case 'm': cout << "masozravec"; break;
//		case 'p': cout << "pianist"; break;
//		case 's': cout << ch << "strom"; break;
//		case 'h': cout << "hra"; break;
//		default: cin >> ch;
//	}
//	return 0;
//
//}

//#include<iostream>
//
//struct rvp
//{
//	char celejmeno[20];
//	char praczaraz[20];
//	char rvpjmeno[20];
//	int volba;
//};
//  
//
//int main()
//{
//	using namespace std;
//	const char velretezce = 20;
//
//	rvp volba[3] =
//	{
//		{"mato", "hobliar", "gadzo"},
//		{"stevo", "cukrar", "sedlis"},
//		{"majko", "budkar", "trubiroh"}
//	};
//
//	cout << "serus brasko zadaj cislo\n ";
//	cout << "a. vypis mena b. vypis pracovne zaradenie \n" ;
//	cout <<	"c. vypis mena RVP d. vypis podla volby k. koniec";
//	
//	char vloz;
//	cin >> vloz;
//	while (vloz = 'a' || 'b' || 'c' || 'd')
//	{
//		if (vloz = 'a')
//			cout << volba[0].celejmeno, volba[1].celejmeno, volba[2].celejmeno;
//		else if (vloz = 'b')
//			cout << volba[0].praczaraz, volba[1].praczaraz, volba[2].praczaraz;
//		else if (vloz = 'c')
//			cout << volba[0].rvpjmeno, volba[1].rvpjmeno, volba[2].rvpjmeno;
//		
//			
//	}
//
//	cout << "ahoj, zadal si zle pismeno";
//	return 0;
//
//}

//#include <iostream>
//const int strsize = 20;
//const int SIZE = 5;
//struct bop {
//    char fullname[strsize];
//    char title[strsize];
//    char bopname[strsize];
//    int preference;
//};
//int main()
//{
//    using namespace std;
//    bop arrbop[SIZE]{
//        {"Wimp Macho", "Engineer", "STAR", 0},
//        {"Raki Rhodes", "Junior Programmer", "SUN", 1},
//        {"Celia Laiter", "Broker", "MIPS", 2},
//        {"Hoppy Hipman", "Analyst Trainee", "MAGIC", 1},
//        {"Pat Hand", "Electrician", "LOOPY", 2}
//    };
//    cout << "Benevolent Order of Programmers Report\n"
//        " a. display by name\t b. display by title\n"
//        " c. display by bopname\t d. display by preference\n"
//        " q. quit\n";
//    cout << "Enter your choice: ";
//    char ch;
//    cin >> ch;
//    while (ch != 'q')
//    {
//        switch (ch)
//        {
//        case 'a': {
//            for (int i = 0; i < SIZE; i++)
//                cout << arrbop[i].fullname << endl;
//            break; }
//        case 'b': {
//            for (int i = 0; i < SIZE; i++)
//                cout << arrbop[i].title << endl;
//            break; }
//        case 'c': {
//            for (int i = 0; i < SIZE; i++)
//                cout << arrbop[i].bopname << endl;
//            break; }
//        case 'd': {
//            for (int i = 0; i < SIZE; i++)
//                switch (arrbop[i].preference)
//                {
//                case 0: cout << arrbop[i].fullname << endl; break;
//                case 1: cout << arrbop[i].title << endl; break;
//                case 2: cout << arrbop[i].bopname << endl; break;
//                }
//            break; }
//        }
//        cout << "Next choice: ";
//        cin >> ch;
//    }
//    cout << "Bye!" << endl;
//    return 0;
//}

//#include<iostream>
//int main()
//{
//	const int pocet = 5;
//	const char kolko = 20;
//
//	struct nasa
//	{
//		char fullname[kolko];
//		char title[kolko];
//		char bopname[kolko];
//		int preference;
//
//	};
//	using namespace std;
//
//	nasa bob[pocet] =
//	{
//		{"a", "b", "c", 1},
//		{"a", "b", "c", 2},
//		{"a", "b", "c", 0},
//		{"a", "b", "c", 2},
//		{"a", "b", "c", 1}
//	};
//	cout << "Benevolent Order of Programmers Report\n"
//		        " a. display by name\t b. display by title\n"
//		        " c. display by bopname\t d. display by preference\n"
//		        " q. quit\n";
//	char ch;
//	cin >> ch;
//	while (ch != 'q') 
//	{
//		switch (ch)
//		{
//		case 'a' : {
//			for (int i = 0; i < pocet; i++)
//				cout << bob[i].fullname << endl; break;
//			}
//		case 'b': {
//			for (int i = 0; i < pocet; i++)
//				cout << bob[i].title << endl; break;		
//			}
//		case 'c': {
//			for (int i = 0; i < pocet; i++)
//				cout << bob[i].bopname << endl; break;
//			}
//		case 'd': {
//			for (int i = 0; i < pocet; i++)
//				switch (bob[i].preference)
//				{
//				case 0: cout << bob[i].bopname << endl; break;
//				case 1: cout << bob[i].fullname << endl; break;
//				case 2: cout << bob[i].title << endl; break;
//				}
//
//			break; }
//		}
//		cout << "next choice\n";
//		cin >> ch;
//
//	}
//	cout << "bye bye";
//	return 0;
//}
//#include<cctype>
//#include<iostream>
//int main()
//{
//	using namespace std;
//	double chechtak;
//	cout << "ahoj zadaj cislo a ja ti vypocitam dat chechtakovu\n";
//	cin >> chechtak;
//	double maladan;
//	while (chechtak >= 0)
//	{
//		if (chechtak <= 5000)
//			cout << "dan je nula";
//		else if (chechtak > 5000 && chechtak <= 15000)
//			maladan = chechtak * 0.10;
//		else if (chechtak >= 15000 && chechtak <= 35000)
//			maladan = chechtak * 0.15;
//		else if (chechtak > 35000)
//			maladan = chechtak * 0.20;
//
//		cout << "dan z tvojho cisla je " << maladan;
//		cin >> chechtak;
//	}
//	cout << "zadal si nieco nespravne";
//	return 0;
//
//}

//#include<iostream>;
//struct inflatable
//{
//char name;
//double sum;
//};
//int main()
//{
//	using namespace std;
//	cout << "ahoj zadaj pocet a meno a velkost prispevku patronov" << endl;
//	int prispievatiela;
//	inflatable* ps = new inflatable;
//
//
//	
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//struct donors {
//    string name;
//    double donat;
//};
//int main()
//{
//    
//    cout << "Enter members: ";
//    int mem, cnt = 0;
//    (cin >> mem).get();
//    donors* patron = new donors[mem];
//    for (int i = 0; i < mem; i++)
//    {
//        cout << i + 1 << ". Name: ";
//        getline(cin, patron[i].name);
//        cout << "Contribution: ";
//        (cin >> patron[i].donat).get();
//    }
//    cout << "\nGrand Patron:\n";
//    for (int i = 0; i < mem; i++)
//    {
//        if (patron[i].donat >= 10000)
//        {
//            cout << patron[i].name << "\t" << patron[i].donat << endl;
//            cnt++;
//        }
//    }
//    if (cnt == 0)
//        cout << " none\n";
//    cout << "Patron:\n";
//    if (cnt == mem)
//        cout << " none\n";
//    else {
//        for (int i = 0; i < mem; i++)
//        {
//            if (patron[i].donat < 10000)
//                cout << patron[i].name << "\t" << patron[i].donat << endl;
//        }
//    }
//    delete[] patron;
//    return 0;
//}

#include<iostream>
#include<string>
using namespace std;
struct donors {
	std :: string name;
	double amount;
};
int main() {
	cout << "insert how much donors exist";
	int pocet_prispievatelov;
	int pocet_velkychprispievatelov;
	(cin >> pocet_prispievatelov).get();
	donors* pamat = new donors[pocet_prispievatelov];
	for (int i = 0; i < pocet_prispievatelov; i++)
	{
		cout << "Name " << i + 1 << " ";
		getline(cin, pamat[i].name);
		cout << "Amount ";
		(cin >> pamat[i].amount).get();
	}
	cout << "\nGrand Patron:\n";
	for (int i = 0; i < pocet_prispievatelov; i++)
	{
		if (pamat[i].amount > 10000)
		{
			cout << pamat[i].amount << "\t" << pamat[i].name;
			pocet_velkychprispievatelov;
		}
	}
	
	cout << "Patrone: \n ";
	if (pocet_velkychprispievatelov == pocet_prispievatelov)
		cout << "none ";












	delete[] pamat;
	return 0;
}
