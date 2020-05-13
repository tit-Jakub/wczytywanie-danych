#include <iostream>
#include <fstream>
using namespace std;
int a,b,c,d,e,n=50;
int T[50];
fstream pliczek, odczyt;
void sortowanie(int T[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(T[j-1]>T[j])
			swap(T[j-1], T[j]);
}


int main()
{


   cout<< "Program Jakuba Mytowskiego" << endl;
   cout<< "Chcesz zobaczyc ilosc liczb parzystych i nieparzystych wybierz: 1 "<< endl;
   cout<< "Chcesz posortowac liczby wybierz: 2"<< endl;
    cin>> a;
    cout<< "Wybrales opcje: "<< a<< endl;


    switch(a)
{
    case 1:
    odczyt.open("odczyt.txt", ios::in);
    while(odczyt.good())
    {
        odczyt>>b;
        if(b%2==0) c++; else d++;

    }
    cout << "ilosc liczb parzystych: "<< c<< endl;
    cout<< "ilosc liczb nieparzystych: "<< d<< endl;
    odczyt.close();
    break;

    case 2:
    cout<<"Posortowane liczby: "<<endl;
    odczyt.open("odczyt.txt", ios::in);
    for(int i=0;i<50; i++)
    {
       odczyt>>T[e];
        e++;
    }
    odczyt.close();
    sortowanie(T,n);
	for(int i=0;i<n;i++)
          cout<<T[i]<<", ";
    break;
    default: cout<<"Podana opcja nie istnieje."<< endl;
    main();

}

    return 0;
}
