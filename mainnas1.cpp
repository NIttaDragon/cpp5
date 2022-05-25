#include <iostream>
#include "specnasnew1.h"
using namespace std;

int main()
{
  CPolygon P; //объект класса
  CPolygon T; //объект класса
  CPolygon Q; //объект класса
  CPolygon *P2=new CPolygon; //массив указателей
  CPolygon *T2=new CPolygon; //массив указателей
  CPolygon *Q2=new CPolygon; //массив указателей
  int t[4][2];
  for(int i=0;i<4;i++)
    for(int j=0;j<2;j++)
      t[i][j]=0;
  CTriangle T1(t); //конструктор с параметром
  CQuad Q1(t); //конструктор с параметром
  int k,l,b,n;
  T2->Zap();
  Q2->Zap();
  k=1;
  while (k!=0)
  {
    cout<<endl;
    cout<<"Что хотите сделать с объектами:"<<endl;
    cout<<"1. Вывести состояние Квадрата"<<endl;
    cout<<"2. Вывести состояние Треугольника"<<endl;
    cout<<"3. Ничего, завершить программу"<<endl;
    cout<<"Ваш выбор: ";
    cin>>b;
    switch (b)
    {
      case 1:
      {
        n=4;
        Q2->show(n);
        Q2->Perimetr(n);
        break;
      }
      case 2:
      {
        n=3;
        T2->show(n);
        T2->Perimetr(n);
        break;
      }
      case 3:
      {
        k=0;
        break;
      }
    }
  }
  return 0;
}
