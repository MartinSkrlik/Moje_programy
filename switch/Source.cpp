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