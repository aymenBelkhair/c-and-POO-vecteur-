#include <iostream>
#include "Vecteur.h"
using namespace std;
Vecteur:: Vecteur()
{Taille=0 ;
T=NULL ;}


Vecteur:: Vecteur(int t)
{Taille=t ;
T=new float [Taille] ;}

Vecteur:: Vecteur(const Vecteur& Ve)
{ Taille=Ve.Taille ;
T=new float[Taille] ;
for(int i=0 ;i<Taille ;i++)
{ T[i]=Ve.T[i];}
}

Vecteur ::~Vecteur()
{delete T ;
}

void Vecteur ::Affiche()
{
for(int i=0 ;i<Taille ;i++){ cout<< T[i]<<"\t" ;
                                    cout<<endl ;
}
}

bool Vecteur ::TailleEgale  (const Vecteur & Ve)
{ if ( (this)->Taille == Ve.Taille) return true;
else return false;
}


Vecteur Vecteur ::Somme(const Vecteur & Ve)
{ if ( (*this).TailleEgale(Ve) )
{ Vecteur R(Taille) ; 
for(int i= 0 ;i<Taille ;i++)
{R.T[i]= (*this).T[i]+Ve.T[i];}
return R;
}
else cout << " Addition impossible ! il faut des vecteurs de même taille"<<endl ;
}

float Vecteur ::operator[](int i)
{ if ( i>=0 && i <Taille) return T[i];
else cout << "indice invalide"<<endl ;
}

float operator*(  Vecteur & Ve1, const Vecteur & Ve2)
{ int x= Ve1.TailleEgale(Ve2);
if (x )
{ float ps=0 ;
for(int i=0 ;i<Ve2.Taille ;i++)
{ ps+= Ve1.T[i] * Ve2.T[i] ;}
return ps ;
}
else cout << "produit scalaire impossible !les deux vecteurs doivent de même taille"<<endl ;
}


Vecteur Vecteur ::operator*(float s)
{ Vecteur R(Taille) ; 
for(int i= 0 ;i<Taille ;i++)
{R.T[i]= (*this).T[i]*s;}
return R;
}

Vecteur operator*( float s, const Vecteur & Ve)
{return Ve * s ; 
}

Vecteur& Vecteur ::operator=( const Vecteur & Ve)
{ if ( this!=&Ve) 
{ Taille=Ve.Taille ;
delete T ;
T=new float[Taille] ;
for(int i=0 ;i<Taille ;i++)
{ T[i]=Ve.T[i];}
}
return *this ;
}

bool Vecteur ::operator==( const Vecteur & Ve)
{ if ( (*this).TailleEgale(Ve)) 

{
for(int i=0;i< Taille;i++) 
{if (T[i] !=Ve.T[i]) return false;}
return true;
}
else return false; 
}

bool Vecteur ::operator!=( const Vecteur & Ve)
{ return !( (*this)==Ve);
}
Vecteur Vecteur ::operator+(float s)
{ Vecteur R(Taille) ;
for(int i= 0 ;i<Taille ;i++)
{R.T[i]= (*this).T[i]+s;}
return R;
}
