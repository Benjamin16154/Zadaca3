#include <algorithm>
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

struct Radnik {
  string ime;
  string prezime;
  short godinaRodjenja;
  string mjestoStanovanja;
  float plata;
};

vector<Radnik> unos() {
  Radnik r;
  bool flag1=0;
  bool flag2=0;
  short brojRadnika;
  short i = 0;
  vector<Radnik> listaRadnika;
  cout << "Koliko radnika zelite unijeti: " << endl;
  cin >> brojRadnika;
  cout << '\n';
  while (i < brojRadnika) {
    cout << "Unesite ime radnika: " << endl;
    cin >> r.ime;
    cout << '\n';
    cout << "Unesite prezime: " << endl;
    cin >> r.prezime;
    cout << '\n';
    cout << "Unesite godinu rodenja radnika: " << endl;
    cin >> r.godinaRodjenja;
    cout << '\n';
    cout << "Unesite mjesto stanovanja radnika: " << endl;
    cin >> r.mjestoStanovanja;
    cout << '\n';
    cout << "Uneiste platu radnika: " << endl;
    cin >> r.plata;
    cout << '\n';
    cout << "Radnik " << r.ime << " " << r.prezime << " uspjesno kreiran!"
         << endl;
    cout << '\n';
    listaRadnika.push_back(r);
    ++i;
  }

  auto poPlati = [](const Radnik& a, const Radnik& b) { return a.plata < b.plata;};
  auto poImenu = [](const Radnik& a, const Radnik& b) { return a.ime < b.ime; };
  auto poStarosti = [](const Radnik& a, const Radnik& b) {return a.godinaRodjenja < b.godinaRodjenja;};

  for (auto it1 = listaRadnika.begin(); it1 != listaRadnika.end(); ++it1) {
    for (auto it2 = listaRadnika.begin() + 1; it2 != listaRadnika.end();++it2) {
     const auto& elementListe = *it1;
      int a = elementListe.plata;
      string bar=elementListe.ime;
     const auto& elementListe2=*it2;
      int b= elementListe2.plata;
      string foo=elementListe2.ime;
      if(a==b)
        flag1=1;
      if(foo==bar)
        flag2=1;
    }
  }

  if(flag1==0 && flag2==0)
    sort(listaRadnika.begin(),listaRadnika.end(),poPlati);
  else if(flag1==1)
    sort(listaRadnika.begin(),listaRadnika.end(),poImenu);
  else if(flag2==1)
    sort(listaRadnika.begin(),listaRadnika.end(),poStarosti);
  return listaRadnika;
}

void ispis(const vector<Radnik>& r) {
  for (const auto& i : r)
    cout << i.ime << " " << i.prezime << " " << i.godinaRodjenja << " "
         << i.mjestoStanovanja << " " << i.plata << endl;
}

int main() {
  vector<Radnik> vec2 = unos();
  ispis(vec2);
  return 0;
}
