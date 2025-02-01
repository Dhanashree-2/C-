#include <iostream>
using namespace std;
int main(){
    double sales = 95000;
    cout << "sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "stateTax: $" << stateTax << endl;

    const double countryTaxRate = .02;
    double countryTax = sales * countryTaxRate;
    cout << "countryTax: $" << countryTax << endl;

    double totalTax = stateTax + countryTax;
    cout << "totalTax: $" << totalTax << endl;
    
}