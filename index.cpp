#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
  double orePune, pagaPerOre, pagaBruto, tatimi, pagaNeto, bonusi = 0;
    const double normaTatimit = 0.15; // 15% tatim
    const double bonusPerOre = 10.0; // Bonus për çdo orë mbi 40
    
    cout << "=====================================" << endl;
    cout << "        KALKULATORI I PAGES         " << endl;
    cout << "=====================================" << endl;
    
    cout << "Jepni numrin e oreve te punes: ";
    cin >> orePune;


 
 cout << "\n-------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Paga Bruto: " << pagaBruto << " EUR" << endl;
    cout << "Bonusi i përfshirë: " << bonusi << " EUR" << endl;
    cout << "Tatimi (15%): " << tatimi << " EUR" << endl;
    cout << "Paga Neto: " << pagaNeto << " EUR" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Faleminderit qe perdoret kalkulatorin e pages!" << endl;

  cout << "Jepni pagen per ore: ";
    cin >> pagaPerOre;
    
    pagaBruto = orePune * pagaPerOre;
    
    if (orePune > 40) {
        bonusi = (orePune - 40) * bonusPerOre;
        pagaBruto += bonusi;
    }
    
    tatimi = pagaBruto * normaTatimit;
    pagaNeto = pagaBruto - tatimi;
    

  return 0;
}


