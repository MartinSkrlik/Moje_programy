#include<iostream>
int main()
{
	using namespace std;
	cout << "basics";
	//#include <iostream>
		//int main()
		//{
		//    using namespace std;
		//    int a, b;
		//    int c = 0;
		//    cin >> a;
		//    cin >> b;
		//    for (a; a <= b; a++)
		//        c += a;
		//    cout << "sum of all interers is " << c << endl;
		//    return 0;
		//
		//}
	cout << "struktura, dynamicke alokovanie pamäte";
	//#include <iostream>
		//
		//struct car { char name[20]; int year; };
		//
		//int main(void)
		//{
		//    using namespace std;
		//    int n;
		//    cout << "How many cars do you wish to catalog?: ";
		//
		//    (cin >> n).get();
		//
		//
		//    car* pc = new car[n];
		//
		//    int i;
		//    for (int i = 0; i < n; i++)
		//    {
		//        cout << "Car #" << i + 1 << endl;
		//        cout << "Insert the maker ";
		//        cin.get(pc[i].name, 20).get();
		//        cout << "Insert the year of made";
		//        cin >> pc[i].year;
		//        cin.get();
		//    }
		//    cout << "Here is your collection\n ";
		//
		//
		//    for (int i = 0; i < n; i++)
		//    {
		//        cout << "car " << i + 1 << " " << pc[i].name << pc[i].year << endl;
		//    }
		//    delete[] pc;
		//
		//    return 0;
		//}
		//	
	cout << "cykly";
	//#include<cstring>;
		//#include<iostream>;
		//#include<string>;
		//int main()
		//{
		//	using namespace std;
		//	string pole;
		//
		//	cout << "Please insert text file \n";
		//	int pocet = 0;
		//	cin >> pole;
		//	int i = 0;
		//	for (i = 0; pole != "hotovo"; i++)
		//	{
		//		++pocet;
		//		cin >> pole;
		//	}
		//	cout << "You have inserted " << pocet << " slov ";
		//
		//	return 0;
		//
		//}
		//#include <iostream>
		//
		//int main()
		//{
		//    using namespace std;  //introduces namespace std
		//    int rows;
		//    int row;
		//    int col;
		//    int periods;
		//
		//    cout << "Enter number of rows: ";
		//    cin >> rows;
		//
		//    for (row = 1; row <= rows; row++)
		//    {
		//        periods = rows - row;
		//        for (col = 1; col <= periods; col++)
		//            cout << '.';
		//        // col already has correct value for next loop
		//        for (; col <= rows; col++)
		//            cout << '*';
		//        cout << endl;
		//    }
		//
		//    return 0;
		//}
	cout << "if, else, while";
	//#include <iostream>
		//#include<cctype>
		//int main()
		//{
		//    using namespace std;
		//    char nacitavat_data;
		//    char zobrazennie;
		//    int i = 0;
		//    cin.get(nacitavat_data);
		//    while (nacitavat_data != '@')
		//    {
		//        if (!isdigit(nacitavat_data))
		//        {
		//            if (islower(nacitavat_data))
		//                nacitavat_data = toupper(nacitavat_data);
		//
		//            else if (isupper(nacitavat_data))
		//                nacitavat_data = tolower(nacitavat_data);
		//            cout << nacitavat_data;
		//        }
		//        cin.get(nacitavat_data);
		//
		//
		//
		//
		//    }
		//    cout << "program skoncil";
		//
		//
		//
		//
		//    return 0;
		//}
	cout << "for, swithc, if";
	//// sumafile.cpp -- functions with an array argument
		//#include <iostream>
		//#include<cctype>
		//int main()
		//{
		//    using namespace std;
		//
		//    const int velkost_pola = 10;
		//    double cisla[velkost_pola];
		//    double priemer;
		//    double pocty;
		//    int i = 0;
		//    int k = 0;
		//    double spolu = 0;
		//    cout << "enter donation value ";
		//    for (; i < velkost_pola && cin >> pocty; i++)
		//    {
		//        cisla[i] = pocty;
		//        spolu += pocty;
		//        cout << "enter the next donation value ";
		//    }
		//    if (i != 0)
		//    {
		//        priemer = spolu / i;
		//        for (int j = 0; j < i; j++)
		//        {
		//            if (cisla[j] > priemer)
		//                k++;
		//
		//        }
		//        cout << "average is " << priemer << " and digits bigger than average is " << k++;
		//
		//
		//    }
		//    else
		//        cout << "ooops something goes wraong";
		//
		//    return 0;
		//}
		//#include<iostream>
		//int main()
		//{
		//	using namespace std;
		//	cout << "Please choice from this five options\n";
		//	cout << "m) carnivore			p)pianist\n";
		//	cout << "s) tree                h)game\n";
		//	char ch;
		//	cin >> ch;
		//	while (ch != 'm' and ch != 'p' and ch != 's' and ch != 'h')
		//	{
		//		cout << "Please enter only m,p,s,h";
		//		cin >> ch;
		//
		//	}
		//	switch (ch)
		//	{
		//	case 'm': cout << "carnivore "; break;
		//	case 'P': cout << "pianist "; break;
		//	case 's': cout << "tree "; break;
		//	case 'h': cout << "game "; break;
		//	default: cout << "nothing "; break;
		//
		//	}
		//
		//	return 0;
		//
		//}
	cout << "pole struktur, swithc";
	//#include<iostream>
		//int main()
		//{
		//	using namespace std;
		//	const int velkost_pola = 20;
		//	const int size = 5;
		//	struct rvp
		//	{
		//		char cele_meno[velkost_pola];
		//		char pracovne_zaradenie[velkost_pola];
		//		char rvp_meno[velkost_pola];
		//		int volba;
		//	};
		//
		//	rvp pole_struktur[size]
		//	{
		//		{"mato", "Miki", "Maja", 5},
		//		{"MILAN", "MAT", "KAKAC", 1},
		//		{"MOMO", "PETA", "SASO", 2},
		//		{"PAO", "PAOA", "SAKMA", 1,},
		//		{"KAKA", "DANA", "KIKI", 2}
		//	};
		//
		//	cout << "Benevolent Order of Programmers Report\n"
		//            " a. display by name\t b. display by title\n"
		//            " c. display by bopname\t d. display by preference\n"
		//			" q. quit\n";
		//
		//	cout << "Enter your choice\n ";
		//	char ch;
		//	cin >> ch;
		//	while (ch != 'q')
		//	{
		//		switch (ch)
		//		{
		//		case 'a': 
		//		{
		//			for (int i = 0; i < size; i++)
		//				cout << pole_struktur[i].cele_meno << endl; break;
		//		}
		//		case 'b':
		//		{
		//			for (int i = 0; i < size; i++)
		//				cout << pole_struktur[i].pracovne_zaradenie << endl; break;
		//		}
		//		case 'c':
		//		{
		//			for (int i = 0; i < size; i++)
		//				cout << pole_struktur[i].rvp_meno << endl; break;
		//		
		//		}
		//		case 'd': {
		//			for (int i = 0; i < size; i++)
		//				switch (pole_struktur[i].volba)
		//				{
		//				case 0: cout << pole_struktur[i].cele_meno << endl; break;
		//				case 1: cout << pole_struktur[i].pracovne_zaradenie << endl; break;
		//				case 2: cout << pole_struktur[i].rvp_meno << endl; break;
		//				}
		//			break; }
		//
		//
		//
		//
		//
		//		}
		//		cout << "next choice :";
		//		cin >> ch;
		//	}
		//	cout << "you ended program ";
		//
		//	return 0;
		//
		//	}
	cout << "if, if else";
	//#include<iostream>
		//int main()
		//{
		//	using namespace std;
		//
		//	const double prvy = 5000;
		//	const double druhy = 10000;
		//	const double treti = 20000;
		//	const double strvty = 35000;
		//	double vklad = 0;
		//	cin >> vklad;
		//	while (vklad != (-vklad) and vklad >= 0)
		//	{
		//		if (vklad <= prvy)
		//			cout << "tax is " << 0 << endl;
		//		else if (vklad <= 15000 and vklad > 5000)
		//			cout << (vklad - 5000) * 0.10;
		//		else if (vklad < 35000 and vklad > 15000)
		//			cout << (10000 * 0.10) + (vklad - 15000) * 0.15;
		//		else if (vklad > 35000)
		//			cout << (10000 * 0.1) + (20000) * 0.15 + (vklad - 35000) * 0.2;
		//		cout << "next ";
		//		cin >> vklad;
		//	}
		//
		//
		//	return 0;
		//}
	cout << "dynamicke alokovanie, if else, if";
	//#include<string>
		//#include<iostream>
		//struct zaznamy
		//{
		//	std::string meno;
		//	double suma;
		//};
		//
		//
		//int main()
		//{
		//	using namespace std;
		//
		//	cout << "vloz pocet uzivatelov ";
		//	int pocet = 0;
		//	int dnd = 0;
		//	int cnt = 0;
		//	(cin >> pocet).get();
		//	zaznamy* pd = new zaznamy[pocet];
		//	for (int i = 0; i < pocet; i++)
		//	{
		//		cout << "meno c " << i + 1 << endl;
		//		getline(cin, pd[i].meno);
		//		cout << "amount of donation " << endl;
		//		(cin >> pd[i].suma).get();
		//	}
		//	cout << " Grant patrons\n";
		//	for (int i = 0; i < pocet; i++)
		//	{
		//		if (pd[i].suma > 10000)
		//		{
		//			cout << pd[i].meno << pd[i].suma << endl;
		//			cnt++;
		//		}
		//
		//	}
		//	if (cnt == 0)
		//		cout << "You have none grand patrons\n";
		//	cout << "Patrons\n";
		//	for (int i = 0; i < pocet; i++)
		//	{
		//		if (pd[i].suma < 10000)
		//		{
		//			cout << pd[i].meno << pd[i].suma << endl;
		//			dnd++;
		//		}
		//
		//	}
		//	if (dnd == 0)
		//		cout << "you have none patrons";
		//
		//	delete[] pd;
		//	return 0;
		//}
	cout << "switch a case";
	//#include<cctype>
		//#include<iostream>
		//#include<string>
		//
		//int main()
		//{
		//	using namespace std;
		//
		//
		//	int samohlasky = 0;
		//	int spoluhlasky = 0;
		//	int ostatne = 0;
		//	string ch;
		//	cout << "Please insert your text \n";
		//	cin >> ch;
		//	while (ch != "q")
		//	{
		//
		//		if (isalpha(ch[0]))
		//		{
		//			switch (ch[0])
		//			{
		//			case 'a': case 'A': case 'e': case 'E':
		//			case 'i': case 'I': case 'O': case 'o':
		//			case 'y': case 'Y': case 'u': case 'U':
		//				samohlasky++; break;
		//			default: spoluhlasky++; break;
		//
		//			}
		//
		//		}
		//		else
		//			ostatne++;
		//		cin >> ch;
		//	}
		//	cout << "pocet samohlasok v prvom slove " << samohlasky << endl;
		//	cout << "pocet spoluhlasok v provm slove " << spoluhlasky << endl;
		//	cout << "pocet ostatnych pismen " << ostatne << endl;
		//
		//	return 0;
		//}
	cout << "vkaldanie do suboru";
	//include<fstream>
		//#include<iostream>
		//#include <cstdlib>
		//
		//int main()
		//{
		//	using namespace std;
		//	const char velkost = 80;
		//	ifstream otvor;
		//	char pole[velkost];
		//	cin.getline(pole, velkost);
		//	otvor.open(pole);
		//	if (!otvor.is_open())
		//	{
		//		cout << "Openning your files is failed ";
		//		cout << "your file is terminated";
		//		exit(EXIT_FAILURE);
		//	}
		//	char ch;
		//	otvor >> ch;
		//	int pocet_pismen = 0;
		//	while (otvor.good())
		//	{
		//		++pocet_pismen;
		//		otvor >> ch;
		//	}
		//	otvor.close();
		//	cout << "the number of finging charactericts is" << pocet_pismen << endl;
		//	return 0;
		//}
	cout << "citanie zo suboru";
	//#include<string>
//#include<fstream>
//#include<iostream>
//struct zaznamy
//{
//	std::string meno;
//	double suma;
//};
//
//
//int main()
//{
//	using namespace std;
//	ifstream otvarak;
//	otvarak.open("test.txt");
//	if (!otvarak.is_open())
//	{
//		cout << "Could not open the file: \"test_6_9.txt\"" << endl;
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//	
//	int pocet = 0;
//	int dnd = 0;
//	int cnt = 0;
//	(otvarak >> pocet).get();
//	zaznamy* pd = new zaznamy[pocet];
//	for (int i = 0; i < pocet; i++)
//	{
//		
//		getline(otvarak, pd[i].meno);
//		
//		(otvarak >> pd[i].suma).get();
//	}
//	cout << " Grant patrons\n";
//	for (int i = 0; i < pocet; i++)
//	{
//		if (pd[i].suma > 10000)
//		{
//			cout << pd[i].meno << pd[i].suma << endl;
//			cnt++;
//		}
//
//	}
//	if (cnt == 0)
//		cout << "You have none grand patrons\n";
//	cout << "Patrons\n";
//	for (int i = 0; i < pocet; i++)
//	{
//		if (pd[i].suma < 10000)
//		{
//			cout << pd[i].meno << pd[i].suma << endl;
//			dnd++;
//		}
//
//	}
//	if (dnd == 0)
//		cout << "you have none patrons";
//
//	otvarak.close();
//	delete[] pd;
//	return 0;
//}
	cout << "funkcie pre vypocet";
	//#include <iostream>
	//
	//double h_mean(double x, double y);
	//
	//int main(void)
	//{
	//	using namespace std;
	//	double x, y;
	//
	//	cout << "Enter two numbers (a 0 terminates): ";
	//	while (cin >> x >> y && x * y != 0)
	//		cout << "harmonic mean of " << x << " and "
	//		<< y << " = " << h_mean(x, y) << "\n";
	//
	//	cout << "Bye\n";
	//	return 0;
	//}
	//
	//double h_mean(double x, double y)
	//{
	//	return 2.0 * x * y / (x + y);
	//}
	cout << "funkcie pre nacitanie do pola, funkciam sa predavaju polia ";
	//#include <iostream>
	//
	//void fill_ar(double pole[], int limit);
	//void average(double pole[], int limit);
	//void show(const double pole[], int limit);
	//
	//int main(void)
	//{
	//	using namespace std;
	//
	//	const int ako = 10;
	//	double moje[ako];
	//	fill_ar(moje, ako);
	//	show(moje, ako);
	//	average(moje, ako);
	//
	//	return 0;
	//}
	//
	//void fill_ar(double pole[], int limit)
	//{
	//	using namespace std;
	//	int i, tempt;
	//	cout << "please enter up to 10 golf scores: \n";
	//	for (i = 0; i < limit; i++)
	//	{
	//		cout << "hodnota: " << (i + 1) << " =";
	//		cin >> tempt;
	//		if (!cin)
	//		{
	//			cin.clear();
	//			while (cin.get() != '\n')
	//				continue;
	//			cout << "bad input; input process terminated.\n";
	//			break;
	//		}
	//		else if (tempt < 0)
	//			break;
	//		pole[i] = tempt;
	//
	//	}
	//
	//	return;
	//
	//}
	//
	//void average(double pole[], int limit)
	//{
	//	using namespace std;
	//	double average = 0.0;
	//	for (int i = 0; i < limit; i++)
	//	{
	//		average += pole[i];
	//	}
	//	cout << "average score :" << average / 10;
	//
	//}
	//
	//void show(const double pole[], int limit)
	//{
	//	using namespace std;
	//	for (int i = 0; i < limit; i++)
	//		cout << "vysledok #" << (i + 1) << " =" << pole[i] << endl;
	//}
	cout << "funciam sa predavaju struktury a adresy struktur";
	//#include <iostream>
//
//
//struct box
//{
//	char znacka[40];
//	float vyska;
//	float sirka;
//	float delka;
//	float objem;
//};
//void zobraz_clen(box b);
//void rataj_clen(box* bp);
//
//int main(void)
//{
//	using namespace std;
//	box clen = { "bingo boxer", 2, 3, 5 };
//	rataj_clen(&clen);
//	zobraz_clen(clen);
//	
//
//	return 0;
//}
//void zobraz_clen(box b)
//{
//	using namespace std;
//	cout << b.znacka << endl
//		<< b.vyska << endl
//		<< b.sirka << endl
//		<< b.delka << endl
//		<< b.objem << endl;
//}
//
//void rataj_clen(box* bp)
//{
//	using namespace std;
//	bp->objem = bp->sirka * bp->vyska * bp->delka;
//}
	cout << "Vypocet pravdepodobosti, jedna funkcia je volana dva krat ";
	//	// lotto.cpp -- probability of winning
//#include <iostream>
//// Note: some implementations require double instead of long double
//	long double probability(unsigned numbers, unsigned picks);
//	int main()
//	{
//		using namespace std;
//		double prva = 0.0;
//		double druha = 0.0;
//		double tretia = 0.0;
//		double total, choices;
//		cout << "Enter the total number of choices on the game card and\n"
//			"the number of picks allowed:\n";
//		while ((cin >> total >> choices) && choices <= total)
//		{
//
//			prva = probability(total, choices);
//			break;
//			cout << " of winning.\n";
//			cout << "Next two numbers (q to quit): ";
//		}
//		cout << "Enter the total number of choices on the game card and\n"
//			"the number of picks allowed:\n";
//		while ((cin >> total >> choices) && choices <= total)
//		{
//
//			druha = probability(total, choices);
//			break;
//			cout << " of winning.\n";
//			cout << "Next two numbers (q to quit): ";
//		}
//		tretia = prva * druha;
//		cout << "vysledna pravdepodobnost je " << tretia;
//		return 0;
//	}
//
//	// the following function calculates the probability of picking picks
//	// numbers correctly from numbers choices
//	long double probability(unsigned numbers, unsigned picks)
//	{
//		long double result = 1.0;  // here come some local variables
//		long double n;
//		unsigned p;
//
//		for (n = numbers, p = picks; p > 0; n--, p--)
//			result = result * n / p;
//		return result;
//	}
	cout << "Vypocet rekurzivnej funkcie ";
	//#include <iostream>
//	unsigned long int factor(int n);
//	int main()
//	{
//		std::cout << "Enter non-negative value (q to quit): ";
//		int val;
//		while (std::cin >> val && val >= 0)
//			std::cout << val << "! " << factor(val) << "\nNext value: ";
//		return 0;
//	}
//	unsigned long int factor(int n)
//	{
//		if (n == 0)
//			return 1;
//		else
//			return n * factor(n - 1);
//
//	}
	cout << "3x funkcia ktora prebera pole a jeho velkost a vypisuje hodnoty ";
	//#include <iostream>
//
//	int pole(double ar[], int n);
//	void pole_2(double ar[], int n);
//	void pole_3(double ar[], int n);
//
//	int main()
//	{
//		using namespace std;
//		const int moja = 10;
//		double nasepole[moja];
//		int pocet = pole(nasepole, moja);
//		cout << pocet << " je pocet hodnot \n";
//		pole_2(nasepole, moja);
//		cout << " otocene hodnoty\n ";
//		pole_3(nasepole, moja);
//		pole_2(nasepole, moja);
//		cout << "otocene hodnoty bez prveho a posledneho\n ";
//		pole_3(nasepole + 1, moja - 2);
//		pole_2(nasepole, moja);
//		return 0;
//	}
//
//	int pole(double ar[], int n)
//	{
//		using namespace std;
//		int i = 0;
//		cout << "vloz do pola ";
//		for (i; i < n; i++)
//		{
//
//			cin >> ar[i];
//			if (!cin)
//				break;
//		}
//
//		return i;
//	}
//	void pole_2(double ar[], int n)
//	{
//		using namespace std;
//		for (int i = 0; i < n; i++)
//		{
//			cout << " Hodnota v poli " << i << " je " << ar[i] << endl;
//		}
//	}
//	void pole_3(double ar[], int n)
//	{
//		int j, i;
//		double tempt;
//		for (i = 0, j = n - 1; i < j; i++, j--)
//		{
//			tempt = ar[i];
//			ar[i] = ar[j];
//			ar[j] = tempt;
//		}
//	}
//
//
//
//
//	return 0;
//}
	cout << "3x funkcia ktora prebera ukazovatele miesto nazvu pola a jeho velkosti";
	//#include <iostream>
//const int Max = 5;
//double* fill_array(double*, const double*);
//void show_array(const double*, const double*);
//void revalue(double, double*, const double*);
//
//int main()
//{
//	using namespace std;
//	double properties[Max];
//
//	double* pt_max = fill_array(properties, properties + Max);
//	show_array(properties, pt_max);
//	if ((pt_max - properties) > 0)
//	{
//		cout << "Enter revaluation factor: ";
//		double factor;
//		while (!(cin >> factor))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; Please enter a number: ";
//		}
//		revalue(factor, properties, pt_max);
//		show_array(properties, pt_max);
//	}
//	cout << "Done.\n";
//	cin.get();
//	cin.get();
//	return 0;
//}
//
//double* fill_array(double* begin, const double* end)
//{
//	using namespace std;
//	double temp;
//	double* pt;
//	for (pt = begin; pt != end; pt++)
//	{
//		cout << "Enter value #" << (pt - begin) + 1 << ": ";
//		cin >> temp;
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated.\n";
//			break;
//		}
//		else if (temp < 0)
//			break;
//		*pt = temp;
//	}
//	return pt;
//}
//
//
//void show_array(const double* begin, const double* end)
//{
//	using namespace std;
//	const double* pt;
//	for (pt = begin; pt != end; pt++)
//	{
//		cout << "Property #" << (pt - begin) + 1 << ": $";
//		cout << *pt << endl;
//	}
//}
//
//// multiplies each element of ar[] by r
//void revalue(double r, double* begin, double* end)
//{
//	double* pt;
//	for (pt = begin; pt != end; pt++)
//		*pt *= r;
//}
	cout << "Funkcia ktora prebera strukturu a ukazovatel na strukturu";
	//#include <iostream>
//	using namespace std;
//	const int SLEN = 30;
//	struct student
//	{
//		char fullname[SLEN];
//		char hobby[SLEN];
//		int ooplevel;
//	};
//
//	int getinfo(student pa[], int n);
//	void display1(student st);
//	void display2(const student* ps);
//	void display3(const student pa[], int n);
//	int main()
//	{
//
//		cout << "Insert amount of class";
//		int class_size;
//		cin >> class_size;
//		while (cin.get() != '\n')
//			continue;
//		student* ptr_stu = new student[class_size];
//		int entered = getinfo(ptr_stu, class_size);
//		for (int i = 0; i < entered; i++)
//		{
//			display1(ptr_stu[i]);
//			display2(&ptr_stu[i]);
//		}
//		display3(ptr_stu, entered);
//		delete[] ptr_stu;
//		cout << " done\n";
//		return 0;
//	}
//
//	int getinfo(student pa[], int n)
//	{
//
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cout << "student #" << i + 1 << "\n Full name";
//			if (!(cin.get(pa[i].fullname, SLEN))) return i;
//			while (cin.get() != '\n') continue;
//			cout << " hobby: ";
//			cin.getline(pa[i].hobby, SLEN);
//			cout << " OOPlevel: ";
//			cin >> pa[i].ooplevel;
//			cin.get();
//		}
//		return i;
//	}
//
//	void display1(student st)
//	{
//
//		cout << " \nfull name " << st.fullname
//			<< "\nhobby " << st.hobby
//			<< "\nOOP level" << st.ooplevel << endl;
//	}
//	void display2(const student* ps)
//	{
//
//		cout << " \nfull name " << ps->fullname
//			<< "\nhobby " << ps->hobby
//			<< "\nOOP level" << ps->ooplevel << endl;
//	}
//	void display3(const student pa[], int n)
//	{
//
//		for (int i = 0; i < n; i++)
//		{
//			cout << "\nfull name " << pa[i].fullname
//				<< "\nhobby " << pa[i].hobby
//				<< "\nOOP level" << pa[i].ooplevel << endl;
//		}
//	}
//
//
//
//	return 0;
//} 
	cout << "Funkcia vola funkciu cez ukazovatel ";
	//	/*using namespace std;
//#include <iostream>
//void calculate(double a, double b, double (*pf[])(double, double), int n);
//double calculate2(double a, double b);
//double calculate3(double a, double b);
//double calculate4(double a, double b);
//int main()
//{
//	double vysledok;
//	double (*pf[3]) (double, double) = { calculate2, calculate3, calculate4 };
//	double a, b;
//	const int size = 3;
//	cout << "insert two numbers\n ";
//	while (cin >> a >> b)
//	{
//		cout << "result (caluculate2, 3 ,4)\n";
//		calculate(a, b, pf, size);
//		cout << "next values \n";
//	}
//	
//	return 0;
//}
//
//void calculate(double a, double b, double (*pf[])(double, double), int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << pf[i](a, b) << endl;
//
//}
//
//double calculate2(double a, double b)
//{
//	return a + b;
//}
//
//double calculate3(double a, double b)
//{
//	return a * b;
//}
//
//double calculate4(double a, double b)
//{
//	return a - b;
//}*/
	cout << "Implicitny argument";
	//	/*#include <iostream>
//int cnt = 0;
//void show(const char*, int n = 0);
//int main(void)
//{
//    char str[20] = "hello, world!";
//    show(str);
//    show(str);
//    show(str, 1);
//    return 0;
//}
//void show(const char* str, int n)
//{
//    
//    if (!n) std::cout << str << "\n";
//    else
//        for (int i = 0; i < cnt; i++)
//            std::cout << str << "\n";
//    cnt++;
//}*/
	cout << "Implicitny argument2";
	//#include <iostream>
//#include <cstring>
//	using namespace std;
//	struct CandyBar
//	{
//		char znacka[20];
//		double vaha;
//		int pocet_kalorii;
//	};
//
//	void funkcia(CandyBar&, const char* str = "Milenium Munich", double w = 2.85, int a = 350);
//	void zobrazenie(const CandyBar&);
//	int main()
//	{
//		CandyBar ako;
//		funkcia(ako);
//		zobrazenie(ako);
//		funkcia(ako, "gold star", 3.85, 580);
//		zobrazenie(ako);
//		return 0;
//	}
//
//	void funkcia(CandyBar& name, const char* str, double w, int a)
//	{
//		strcpy_s(name.znacka, str);
//		name.vaha = w;
//		name.pocet_kalorii = a;
//	}
//	void zobrazenie(const CandyBar& name)
//	{
//		cout << "\nName:                 " << name.znacka
//			<< "\npocet kalorii:         " << name.pocet_kalorii
//			<< "\nvaha                   " << name.vaha;
//	}
	cout << "Funkcia prebera odkaz na triedu string a vracia velke pismena retazca";
	//#include<iostream>
//#include<string>
//	using namespace std;
//	void funkcia(string&);
//
//	int main()
//	{
//
//		string str;
//		cout << "enter your string and I will transform your letters to upper (q is quit)\n";
//		getline(cin, str);
//		while (str != "q")
//		{
//
//			funkcia(str);
//			cout << str;
//			cout << "Next string please ";
//			getline(cin, str);
//
//		}
//		return 0;
//	}
//	void funkcia(string& str)
//	{
//		for (int i = 0; i < str.length(); i++)
//			str[i] = toupper(str[i]);
//	}
	cout << "Sablona, funkcia lahky vypocet(najvacsi prvok z pola)";
	//#include <iostream>
//	using namespace std;
//
//	template <class T>
//	T funkcia(T agr[]);
//
//	int main()
//	{
//		double pole[5] = { 88.8, 25.8, 48.8, 1.8, 5.8 };
//		int polle[5] = { 1,2,3,4,5 };
//
//		cout << "najvacsie cislo z pola je\n";
//		cout << funkcia(pole);
//		cout << "najvacsie cislo z pola je\n";
//		cout << funkcia(polle);
//		return 0;
//	}
//
//	template <class T>
//	T funkcia(T agr[])
//	{
//		T ako = agr[0];
//
//		for (int i = 0; i < 5; i++)
//		{
//			if (ako < agr[i])
//				ako = agr[i];
//		}
//
//		return ako;
//	}
	cout << "sablona, specifikacia, ";
	//#include <iostream>
//#include<cstring>
//	using namespace std;
//
//	template <typename T>
//	T maxn(T agr[], int);
//
//	template <> const char* maxn(const char* ar[], int);
//
//
//	int main()
//	{
//		int polle[6] = { 1, 2, 3, 9, 5, 6, };
//		double pole[4] = { 1.2, 9.5, 7.8, 8.7 };
//		const char* poole[5] = { "fiat", "BMW", "ferrari", "volvo", "buggati" };
//		cout << maxn(polle, 6);
//		cout << maxn(pole, 4);
//		cout << maxn(poole, 5);
//		return 0;
//	}
//
//	template <typename T>
//	T maxn(T agr[], int pocet)
//	{
//		T ako = agr[0];
//		for (int i = 0; i < pocet; i++)
//			if (ako < agr[i])
//				ako = agr[i];
//		return ako;
//	}
//	template<>const char* maxn(const char* ar[], int pocet)
//	{
//		const char* str = ar[0];
//		for (int i = 0; i < pocet; i++)
//			if (strlen(str) < strlen(ar[i]))
//				str = ar[i];
//		return str;
//	}
	cout << "dve sablony, spocitavaju obsah pola a pola ukazovatelov";
	//#include <iostream>
//
//	template <typename T>            // template A
//	T ShowArray(T arr[], int n);
//
//	template <typename T>            // template B
//	T ShowArray(T* arr[], int n);
//
//	struct debts
//	{
//		char name[50];
//		double amount;
//	};
//
//	int main()
//	{
//		using namespace std;
//		int things[6] = { 13, 31, 103, 301, 310, 130 };
//		struct debts mr_E[3] =
//		{
//			{"Ima Wolfe", 2400.0},
//			{"Ura Foxe", 1300.0},
//			{"Iby Stout", 1800.0}
//		};
//		double* pd[3];
//
//		// set pointers to the amount members of the structures in mr_E
//		for (int i = 0; i < 3; i++)
//			pd[i] = &mr_E[i].amount;
//
//		cout << "Listing Mr. E's counts of things:\n";
//		// things is an array of int
//		cout << ShowArray(things, 6) << endl;  // uses template A
//		cout << "Listing Mr. E's debts:\n";
//		// pd is an array of pointers to double
//		cout << ShowArray(pd, 3) << endl;      // uses template B (more specialized)
//		// cin.get();
//		return 0;
//	}
//
//	template <typename T>
//	T ShowArray(T arr[], int n)
//	{
//		T premenna = 0;
//		using namespace std;
//		cout << "template A\n";
//		for (int i = 0; i < n; i++)
//			premenna += arr[i];
//		return premenna;
//	}
//
//	template <typename T>
//	T ShowArray(T* arr[], int n)
//	{
//		T premenna = 0;
//		using namespace std;
//		cout << "template B\n";
//		for (int i = 0; i < n; i++)
//			premenna += *arr[i];
//		return premenna;
//
//	}
	cout << "jmenne priestory, 3 subory, prototyp, definicia, funkcny kod";
	//	/*const int Len = 40;
//	struct golf
//	{
//		char fullname[Len];
//		int handicap;
//	};
//	void setgolf(golf& g, const char* name, int hc);
//	int setgolf(golf& g);
//	void handicap(golf& g, int hc);
//	void showgolf(const golf& g);
//
//
//
//
//#include <iostream>
//#include <cstring>
//
//	void setgolf(golf& g, const char* name, int hc)
//	{
//		strcpy_s(g.fullname, name);
//		g.handicap = hc;
//	}
//	int setgolf(golf& g)
//	{
//		std::cout << "vloz meno ";
//		std::cin.getline(g.fullname, Len);
//		if (g.fullname[0] == '\0')
//			return 0;
//		std::cout << "vloz hendical ";
//		while (!(std::cin >> g.handicap))
//		{
//			std::cin.clear();
//			std::cout << "Please enter an integer ";
//		}
//		while (std::cin.get() != '\n')
//			continue;
//		return 1;
//	}
//
//	void handicap(golf& g, int hc)
//	{
//		g.handicap = hc;
//	}
//
//	void showgolf(const golf& g)
//	{
//		std::cout << "Pan golfer" << g.fullname << std::endl;
//		std::cout << "Handicap " << g.handicap << std::endl;
//
//	}
//
//	const int mems = 5;
//	int main(void)
//	{
//		using namespace std;
//		golf team[5];
//
//		cout << "Enter up to " << mems << "golf players: \n ";
//		int i;
//		for (i = 0; i < mems; i++)
//			if (setgolf(team[i]) == 0)
//				break;
//		for (int j = 0; j < i; j++)
//			showgolf(team[j]);
//		setgolf(team[0], "Fred Norman", 5);
//		showgolf(team[0]);
//		handicap(team[0], 3);
//		showgolf(team[0]);
//		return 0;
//
//	}*/
	cout << "Funkcia prebera objekt triedy string a vracia velkost retazca";
	//#include <iostream>
//#include <string>
//	using namespace std;
//	void strcount(string str);
//
//	int main()
//	{
//		using namespace std;
//		string mato;
//
//		cout << "Enter a line:\n";
//		getline(cin, mato);
//
//		while (cin)
//		{
//			// dispose of remainder
//			strcount(mato);
//
//			cout << "Enter next line (empty line to quit):\n";
//			getline(cin, mato);
//
//		}
//		cout << "Bye\n";
//
//		return 0;
//	}
//
//	void strcount(string str)
//	{
//		using namespace std;
//		static int total = 0;        // static local variable
//		int count = str.length();               // automatic local variable
//
//		cout << "\"" << str << "\" contains ";
//
//		total += count;
//		cout << count << " characters\n";
//		cout << total << " characters total\n";
//	}
	cout << "Trojsuborovy program = hlavickvy subor, zdrojovy kod, program";
	//	//#include <iostream>
////	using namespace std;
////
////	const int QUARTERS = 4;
////	struct Sales
////	{
////		double sales[QUARTERS];
////		double average;
////		double max;
////		double min;
////	};
////	void setSales(Sales& s, const double ar[], int n);
////	void setSales(Sales& s);
////	void showSales(const Sales& s);
////
////	// namespace SALES
////
////
////
////
////
////	void setSales(Sales& s, const double ar[], int n)
////	{
////		double max, min, total = 0;
////		for (int i = 0; i < QUARTERS; i++)
////		{
////			if (n > i) s.sales[i] = ar[i];
////			else s.sales[i] = 0;
////			total += s.sales[i];
////		}
////		max = min = s.sales[0];
////		for (int i = 0; i < QUARTERS; i++)
////		{
////			if (max < s.sales[i]) max = s.sales[i];
////			if (min > s.sales[i]) min = s.sales[i];
////		}
////		s.max = max;
////		s.min = min;
////		s.average = (n < QUARTERS) ? total / n : total / QUARTERS;
////	}
////	void setSales(Sales& s)
////	{
////		double max, min, total = 0;
////		for (int i = 0; i < QUARTERS; i++)
////		{
////			cout << "vloz udaj\n";
////			cin >> s.sales[i];
////			total += s.sales[i];
////		}
////		max = min = s.sales[0];
////		for (int i = 0; i < QUARTERS; i++)
////		{
////			if (max < s.sales[i]) max = s.sales[i];
////			if (min > s.sales[i]) min = s.sales[i];
////		}
////		s.max = max;
////		s.min = min;
////		s.average = total / QUARTERS;
////	}
////	void showSales(const Sales& s)
////	{
////		for (int i = 0; i < QUARTERS; i++)
////		{
////			cout << "\nsales # " << i + 1 << endl;
////			cout << s.sales[i] << " average " << s.average <<
////				" max " << s.max << " min " << s.min;
////		}
////	}
////
////	int main()
////	{
////		Sales objekt1, objekt2;
////		setSales(objekt1);
////		showSales(objekt1);
////		double ar[4] = { 478.2, 302.5, 177.5, 78.8 };
////		setSales(objekt2, ar, 3);
////		showSales(objekt2);
////		return 0;
	cout << "Definovana trieda, funkcie, premenne, maly program na prijem a predaj akcii";
	////stocks.cpp -- celý program
//	//#include <iostream>
//	//#include <cstring>
//
//	//class Stock 	// deklarace tøídy
//	//{
//	//private:
//	//	char company[30];
//	//	int shares; // pocet akcii
//	//	double share_val; // cena jednej akcie
//	//	double total_val; // celkova cena vsetkych akcii
//	//	void set_tot() { total_val = shares * share_val; }
//	//public:
//	//	void acquire(const char* co, int n, double pr);
//	//	void buy(int num, double price);
//	//	void sell(int num, double price);
//	//	void update(double price);
//	//	void show();
//	//}; 					// støedník na konci!
//
//	//void Stock::acquire(const char* co, int n, double pr)
//	//{
//	//	std::strncpy(company, co, 29); // zkrácení co podle company
//	//	company[29] = '\0';
//	//	if (n < 0)
//	//	{
//	//		std::cout << "Pocet akcii nemuze byt zaporny; "
//	//			<< company << "nastaveni shares na 0.\n";
//	//		shares = 0;
//	//	}
//	//	else
//	//		shares = n;
//	//	share_val = pr;
//	//	set_tot();
//	//}
//
//	//void Stock::buy(int num, double price)
//	//{
//	//	if (num < 0)
//	//	{
//	//		std::cerr << "Pocet nakupovanych akcii nemuze byt zaporny. "
//	//			<< "Transakce ukoncena.\n";
//	//	}
//	//	else
//	//	{
//	//		shares += num;
//	//		share_val = price;
//	//		set_tot();
//	//	}
//	//}
//
//	//void Stock::sell(int num, double price)
//	//{
//	//	using std::cerr;
//	//	if (num < 0)
//	//	{
//	//		cerr << "Pocet prodavanych akcii nemuze byt zaporny. "
//	//			<< "Transakce ukoncena.\n";
//	//	}
//	//	else if (num > shares)
//	//	{
//	//		cerr << "Nemuzete prodat vic akcii nez mate! "
//	//			<< "Transakce ukoncena.\n";
//	//	}
//	//	else
//	//	{
//	//		shares -= num;
//	//		share_val = price;
//	//		set_tot();
//	//	}
//	//}
//
//	//void Stock::update(double price)
//	//{
//	//	share_val = price;
//	//	set_tot();
//	//}
//
//	//void Stock::show()
//	//{
//	//	using std::cout;
//	//	using std::endl;
//	//	cout << "Spolecnost: " << company
//	//		<< "  Akcie: " << shares << endl
//	//		<< "  Cena akcie: $" << share_val
//	//		<< "  Celkova hodnota: $" << total_val << endl;
//	//}
//
//	//int main()
//	//{
//	//	using std::cout;
//	//	using std::ios_base;
//	//	Stock stock1;
//	//	stock1.acquire("NanoSmart", 20, 12.50);
//	//	cout.setf(ios_base::fixed); 				// #.## formát
//	//	cout.precision(2); 							// #.## formát
//	//	cout.setf(ios_base::showpoint); 		// #.## formát
//	//	stock1.show();
//	//	stock1.buy(15, 18.25);
//	//	stock1.show();
//	//	stock1.sell(400, 20.00);
//	//	stock1.show();
//	//	return 0;
//	//}










