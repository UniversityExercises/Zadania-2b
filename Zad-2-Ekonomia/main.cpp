#include <iostream>

using namespace std;

int main()
{
    double stany = 46000;
    double chiny = 3920;
    int rok=2010;

    cout<<"Year\tUSA\t\tChina"<<endl;

    for ( ;stany>chiny;rok++)
    {
        if((rok%5)==0)
        {
        cout<<rok<<"  \t$"<<stany<<"  \t$"<<chiny<<endl;
        }

        stany=stany*1.025;
        chiny=chiny*1.09;
    }
    cout<<"Chinczycy beda bogatsi od Amerykanow juz w " << rok << " roku.";
    return 0;
}
