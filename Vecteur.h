
#define Vecteur_H
class Vecteur {
int Taille ;
		float * T ;
public :
Vecteur() ;
Vecteur(int) ;
Vecteur(const Vecteur &) ;
~Vecteur() ;
void Affiche() ;
bool TailleEgale  (const Vecteur &) ;
Vecteur Somme(const Vecteur &) ;
float operator[](int) ;
friend float operator*( const Vecteur &, const Vecteur &) ;
Vecteur operator*(float) ;
friend Vecteur operator*( float, const Vecteur &) ;
Vecteur& operator=( const Vecteur &) ;
bool operator==( const Vecteur &);
bool operator!=( const Vecteur &) ;
Vecteur operator+(float);
};
