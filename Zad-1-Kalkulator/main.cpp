#include <iostream>

using namespace std;


void wybor(int zmienna)
{
    double x;
    double y;


    switch (zmienna)
    {
    case 1:
        cout<<"podaj liczbe x:\n";
        cin>>x;
        cout<<"podaj liczbe y:\n";
        cin>>y;
        cout<<"wynik="<<x+y<<endl;
        break;

    case 2:
        cout<<"podaj liczbe x:\n";
        cin>>x;
        cout<<"podaj liczbe y:\n";
        cin>>y;
        cout<<"wynik="<<x*y<<endl;
        break;

    case 3:
        cout<<"podaj liczbe x:\n";
        cin>>x;
        cout<<"podaj liczbe y:\n";
        cin>>y;
        cout<<"wynik="<<x-y<<endl;
        break;

    case 4:
        cout<<"podaj liczbe x:\n";
        cin>>x;
        cout<<"podaj liczbe y:\n";
        cin>>y;
        if (y==0)
        {
            cout<<"nie wolno dzielic przez zero"<<endl;
            return;
        }

        cout<<"wynik="<<x/y<<endl;
        break;

    }

}


int main()
{
    int k;

    for(;;)
    {
        cout<<"Menu:"<<endl;
        cout<<"Dodaj 1"<<endl;
        cout<<"Pomnoz 2"<<endl;
        cout<<"Odejmij 3"<<endl;
        cout<<"Podziel 4"<<endl;
        cout<<"Wyjdz 5"<<endl;

        cin>>k;

        if (k==5)
        {
            return 0;
        }
        else
        {
            wybor (k);
        }
    }

    return 0;
}
