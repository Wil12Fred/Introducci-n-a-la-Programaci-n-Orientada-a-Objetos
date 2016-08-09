#include <iostream>
#include <stdio.h>
#include <ttmath/ttmath.h>
#include <gmpxx.h>
typedef ttmath::UInt <2096> MyBig;

//Solucion fibonacci usando exponencicion rapida matricial

using namespace std;
int main(){
  MyBig m11=1,m12=1,m22=0,r11=1,r12=0,r22=1,n;
  cin>>n;
  while (n>1){
    if (n%2==1){
      r11=m12*r12+m11*r11;
      r22=m12*r12+m22*r22;
      r12=r11-r22;
    }
    n=n/2;
    m11=m12*m12+m11*m11;
    m22=m12*m12+m22*m22;
    m12=m11-m22;
  }
  //cout << m11*r12+ m12*r22 << endl ;
  return 0;
}
