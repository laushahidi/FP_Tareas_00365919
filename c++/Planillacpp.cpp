#include <iostream>
#include <math.h>
using namespace std;

void pedir(string &nombre, double &s, double &he, double &dp){
    
  cout << "Ingrese su nombre\n";
  cin >> nombre;
  cout << "\nIngrese su sueldo\n";
  cin >> s;
  cout << "\nIngrese horas extra\n";
  cin >> he;
  cout << "\nIngrese descuentos de prestamo\n";
  cin >> dp;
    
}

double funcionhe(double &he, double &her){
  her=3*he;
  return her;
}

double funcionso(double &s, double &her, double &so){
  so=s+her;
  return so;
}

double funcionisss(double &so, double &isss){
  
  if(so<1000){
    isss = so * 0.03;  
  }
  else{
    isss=1000*0.03;
  }
  isss= round(100*isss)/100;
  return isss;
}

double funcionafp(double &so, double &afp){

  if(so<6500){
    afp=so*0.0725;
  }
  else{
    afp=6500*0.0725;
  }
  afp= round(100*afp)/100;
  return afp;
}

double funcionri(double &ri, double &so, double &isss, double &afp){
    
  ri=so-isss-afp;
  return ri;
}

double funcionisr(double &ri, double &isr){
    
  if(ri<=472.00){
    isr=0;
  }
  else if(ri<=895.24){
    isr=17.67 + ((ri - 472.00)*0.1);
  }
  else if(ri<=2038.10){
    isr=60.00 + ((ri - 895.24)*0.2);
  }
  else{
    isr=288.57 + ((ri - 2038.10)*0.3);
  }
  isr= round(100*isr)/100;
  return isr;
}

double funciontotaldescuentos(double &td, double &isss, double &afp, double &isr, double &dp){
  td=isss+afp+isr+dp;
  return td;
}
double funcionsueldorecibido(double &sr, double &so, double &isss, double &afp, double &isr, double &dp){
  sr=so-isss-afp-isr-dp;
  return sr;
}

int main()
{
  double s, so, he, her, dp, afp, isss, r, ri, isr, sr, td;
  string nombre;
  
  pedir(nombre, s, he, dp);
  cout<<"\nBoleta de pago de "<<nombre<<"\n";
  cout<<"\nSueldo ordinario: $"<<s<<"\n";
  cout<<"Horas extras: $"<<funcionhe(he, her)<<"\n";
  cout<<"\nTotal de ingresos: $"<<funcionso(s, her, so)<<"\n";
  cout<<"\nDescuentos:\n";
  cout<<"\nISSS: $"<<funcionisss(so, isss)<<"\n";
  cout<<"AFP: $"<<funcionafp(so, afp)<<"\n";
  funcionri(ri, so, isss, afp);
  cout<<"Renta: $"<<funcionisr(ri, isr)<<"\n";
  cout<<"Descuento de préstamo: $"<<dp<<"\n";
  cout<<"\nTotal descuentos: $"<<funciontotaldescuentos(td, isss, afp, isr, dp)<<"\n";
  cout<<"\nTotal recibido: $"<<funcionsueldorecibido(sr, so, isss, afp, isr, dp)<<"\n";

  return 0;
}