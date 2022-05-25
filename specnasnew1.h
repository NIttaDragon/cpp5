#include <iostream>
#include <math.h>
using namespace std;
class CPolygon //объявление класса
{
public:
  int v[4][2];
  float d[4];
  float per=0;
  CPolygon() {}//конструктор класса
  CPolygon(int t[4][2]) //конструктор с параметром
  {
    for(int i=0;i<4;i++)
      for(int j=0;j<2;j++)
        v[i][j]=t[i][j];
  }
  virtual void Zap()
  {
    v[0][0]=0; v[0][1]=0;
    v[1][0]=7; v[1][1]=0;
    v[2][0]=0; v[2][1]=3;
    v[3][0]=5; v[3][1]=6;
  }
  virtual void Perimetr(int n) //вычисление периметра
  {
    for(int i=1;i<n;i++)
        d[i]=sqrt(pow((v[i][0]-v[i-1][0]),2)+pow((v[i][1]-v[i-1][1]),2));
    d[0]=sqrt(pow((v[1][0]-v[0][0]),2)+pow((v[1][1]-v[0][1]),2));
    for(int i=0;i<n;i++)
      per=per+d[i];
    cout<<"Периметр = "<<per<<endl;
  };
  virtual void show(int n) //вывод основных характеристик
  {
    cout<<endl<<"Вершины: "<<endl;
    for(int i=0;i<n;i++)
          cout<<"x= "<<v[i][0]<<"   "<<"y= "<<v[i][1]<<endl;
  }
  ~CPolygon() //деструктор
  {/*cout<<"Многоугольник удален"<<endl;*/}
};

class CTriangle:public CPolygon //объявление класса
{
public:
  CTriangle():CPolygon(){}; //конструктор класса
  CTriangle(int t[4][2]):CPolygon(t){}; //конструктор с параметром
  ~CTriangle() //деструктор
  {/*cout<<"Треугольник удален"<<endl;*/}
};

class CQuad:public CPolygon //объявление класса
{
public:
  CQuad():CPolygon(){}; //конструктор класса
  CQuad(int t[4][2]):CPolygon(t){}; //конструктор с параметром
  ~CQuad() //деструктор
  {/*cout<<"Квадрат удален"<<endl;*/}
};
