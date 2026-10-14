#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float w;
    float h;
    cin>>w;
    cin>>h;
    cout<<"Перимитер: "<<2*(w+h)<<" Площа: "<<w*h<<"\n";
    cout<<"кінец 1 программи\n";

 
    float total = 0;
    float input;
    int months = 0;
    string c;
    while (c!="s"){
        cout<<"ваша зарплата в этот месяц?\n";
        cin>>input;
        total+=input;
        months++;
        cout<<"что-бы закончить подсчет напишите s\n";
        cin>>c;
    }
    cout<<"средняя зарплата за " << months << " месяцев " <<total/months;
    return 0;
}