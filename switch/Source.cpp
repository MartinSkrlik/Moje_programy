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