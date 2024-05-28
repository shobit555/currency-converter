#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

using namespace std;
class currency{
public:
double convert_dollar_to_Rupee(double dollar){
    double rupee = dollar * 83.51;
    return rupee;
}

double convert_Rupee_to_dollar(double rupee){
    double dollar = rupee * 0.012;
    return dollar;
}

double convert_pound_to_Rupee (double pound) {
    double rupee = pound * 113.11;
    return rupee;
}

double convert_Rupee_to_pound (double rupee) {
    double pound = rupee * 0.0088;
    return pound;
}

double convert_euro_to_Rupee (double euro) {
    double rupee = euro * 94.92;
    return rupee;
}

double convert_Rupee_to_euro (double rupee) {
    double euro = rupee * 0.0105;
    return euro;
}

double convert_dollar_to_pound (double dollar) {
    double pound = dollar * 0.73;
    return pound;
}

double convert_pound_to_dollar (double pound) {
    double dollar = pound * 1.37;
    return dollar;
}

double convert_dollar_to_euro ( double dollar) {
    double euro = dollar * 0.86;
    return euro;
}

double convert_euro_to_dollar ( double euro) {
    double dollar = euro * 1.16;
    return dollar;
}

double convert_euro_to_pound ( double euro) {
    double pound = euro * 0.90;
    return pound;
}

double convert_pound_to_euro ( double pound) {
    double euro = pound * 1.11;
    return euro;
}
double convert_dollar_to_dirham (double dollar) {
    double dirham = dollar * 3.67;
    return dirham;
}
double convert_rupee_to_dirham (double rupee) {
    double dirham = rupee * 0.04412;
    return dirham;
}
double convert_pound_to_dirham (double pound) {
    double dirham = pound * 4.636;
    return dirham;
}
double convert_euro_to_dirham (double euro) {
    double dirham = euro * 3.998;
    return dirham;
}
double convert_dirham_to_dollar (double dirham) { 
    double dollar = dirham * 0.272;
    return dollar;
}
double convert_dirham_to_rupee (double dirham) { 
    double rupee = dirham * 22.66;
    return rupee;
}
double convert_dirham_to_euro (double dirham) { 
    double euro = dirham * 0.247;
    return euro;
}
double convert_dirham_to_pound (double dirham) { 
    double dollar = dirham * 0.213;
    return dollar;
}
};
int main(){
    ofstream store;
    store.open("data.txt", ios::app);
    currency c1;
    int choice;
    char name[20];
    
    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                        WELCOME TO CURRENCY CONVERTER                           |" << endl;
    cout << "\t\t\t|                                                                                |" << endl;
    cout << "\t\t\t|                                                                                |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\tchoose from below options to convert" << endl;
    cout << "\t\t\t [1] Dollar (USD) to Rupee(INR) " << endl;
    cout << "\t\t\t [2] Rupee (INR) to Dollar(USD) " << endl;
    cout << "\t\t\t [3] Pound (GBP) to Rupee (INR) " << endl;
    cout << "\t\t\t [4] Rupee (INR) to Pound (GBP) " << endl;
    cout << "\t\t\t [5] Euro (EUR) to Rupee (INR) " << endl;
    cout << "\t\t\t [6] Rupee (INR) to Euro (EUR) " << endl;
    cout << "\t\t\t [7] Dollar (USD) to Pound (GBP) " << endl;
    cout << "\t\t\t [8] Pound (GBP) to Dollar (USD) " << endl;
    cout << "\t\t\t [9] Dollar (USD) to Euro (EUR) " << endl;
    cout << "\t\t\t [10] Euro (EUR) to Dollar (USD) " << endl;
    cout << "\t\t\t [11] Euro (EUR) to Pound (GBP) " << endl;
    cout << "\t\t\t [12] Pound (GBP) to Euro (EUR) " << endl;
    cout << "\t\t\t [13] Dollar (USD) to Dirham (AED) " << endl;
    cout << "\t\t\t [14] Rupee (INR) to Dirham (AED) " << endl;
    cout << "\t\t\t [15] Pound (GBP) to Dirham (AED) " << endl;
    cout << "\t\t\t [16] Euro (EUR) to Dirham (AED) " << endl;
    cout << "\t\t\t [17] Dirham (AED) to Dollar (USD) " << endl;
    cout << "\t\t\t [18] Dirham (AED) to Rupee (INR) " << endl;
    cout << "\t\t\t [19] Dirham (AED) to Euro (GBP) " << endl;
    cout << "\t\t\t [20] Dirham (AED) to Pound (EUR) " << endl;
    cout << endl << endl;
    cout << endl << endl;
    cout << "Enter user name :";
    cin.getline(name,20);
    store << endl << "<========================== USER DETAILS ==========================>"<<endl;
    store << " User Name Is :";
    store << name<<endl;
    cout  << "Enter your choice to convert from one currency to other:";
    cin   >> choice;
    store << " User choice are :";
    store << choice<<endl;

    if(choice == 1){
        double dollar;
        double rupee;
        cout << "Enter dollars to convert to Rupee " << endl;
        cin >> dollar;
        rupee = c1.convert_dollar_to_Rupee(dollar);
        cout << dollar <<" Dollars In Rupee = "<< rupee;
        store << "Total Amount is :"<<rupee;
        store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 2){
        double dollar;
        double rupee;
        cout << "Enter Rupee to convert to Dollar " << endl;
        cin >> rupee;
        dollar = c1.convert_Rupee_to_dollar(rupee);
        cout << rupee <<" Rupees In Dollar = "<< dollar;
        store << "Total Amount is :" << dollar << endl;
        store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if (choice == 3){
        double pound;
        double rupee;
        cout << "Enter Pound to convert to Rupee " << endl;
        cin >> pound;
        rupee = c1.convert_pound_to_Rupee(pound);
        cout << pound <<" Pounds In Rupee = "<< rupee;
        store << "Total Amount is :" << rupee << endl;
        store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 4){
        double rupee;
        double pound;
        cout << "Enter Rupee to convert to Pound " << endl;
        cin >> rupee;
        pound = c1.convert_Rupee_to_pound(rupee);
        cout << rupee <<" Rupees In Pound = "<< pound;
        store << "Total Amount is :" << pound << endl;
        store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if (choice == 5){
        double euro;
        double rupee;
        cout << "Enter Euro to convert to Rupee " << endl;
        cin >> euro;
        rupee = c1.convert_euro_to_Rupee(euro);
        cout << euro <<" Euro In Rupee = "<< rupee;
        store << "Total Amount is :" << rupee << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 6){
        double rupee;
        double euro;
        cout << "Enter Rupee to convert to Euro " << endl;
        cin >> rupee;
        euro = c1.convert_Rupee_to_euro(rupee);
        cout << rupee <<" Rupees In Euro = "<< euro;
        store << "Total Amount is :" << euro << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
        
    }
    else if (choice == 7){
        double dollar;
        double pound;
        cout << "Enter Dollar to convert to Pound " << endl;
        cin >> dollar;
        pound = c1.convert_dollar_to_pound(dollar);
        cout << dollar <<" Dollars In Pound = "<< pound;
        store << "Total Amount is :" << pound << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 8){
        double pound;
        double dollar;
        cout << "Enter Pound to convert to Dollar " << endl;
        cin >> pound;
        dollar = c1.convert_pound_to_dollar(pound);
        cout << pound <<" Pounds In Dollar = "<< dollar;
        store << "Total Amount is :" << dollar << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if (choice == 9){
        double dollar;
        double euro;
        cout << "Enter Dollar to convert to Euro " << endl;
        cin >> dollar;
        euro = c1.convert_dollar_to_euro(dollar);
        cout << dollar <<" Dollars In Euro = "<< euro;
        store << "Total Amount is :" << euro << endl;
        store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 10){
        double euro;
        double dollar;
        cout << "Enter Euro to convert to Dollar " << endl;
        cin >> euro;
        dollar =c1.convert_euro_to_dollar(euro);
        cout << euro <<" Euro In Dollar = "<< dollar;
        store << "Total Amount is :" << dollar << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if (choice == 11){
        double euro;
        double pound;
        cout << "Enter Euro to convert to Pound " << endl;
        cin >> euro;
        pound = c1.convert_euro_to_pound(euro);
        cout << euro <<" Euro In Pound = "<< pound;
        store << "Total Amount is :" << pound << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 12){
        double pound;
        double euro;
        cout << "Enter Pound to convert to Euro " << endl;
        cin >> pound;
        euro = c1.convert_pound_to_euro(pound);
        cout << pound <<" Pounds In Euro = "<< euro;
        store << "Total Amount is :" << euro << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 13){
        double dirham;
        double dollar;
        cout << "Enter Dollar to convert to Dirham "<<endl;
        cin >> dollar;
        dirham = c1.convert_dollar_to_dirham(dollar);
        cout << dollar <<" Dollar In Dirham = "<< dirham;
        store << "Total Amount is :" << dirham << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 14){
        double rupee;
        double dirham;
        cout << "Enter Rupee to convert to Dirham "<<endl;
        cin >> rupee;
        dirham = c1.convert_rupee_to_dirham(rupee);
        cout << rupee <<" Rupee In Dirham = "<< dirham;
        store << "Total Amount is :" << dirham << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close(); 
        }
    else if(choice == 15){
        double pound;
        double dirham;
        cout << "Enter Pound to convert to Dirham "<<endl;
        cin >> pound;
        dirham = c1.convert_pound_to_dirham(pound);
        cout << pound <<" Pound In Dirham = "<< dirham;
        store << "Total Amount is :" << dirham << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close(); 
        }
    else if(choice == 16){
        double euro;
        double dirham;
        cout << "Enter Euro to convert to Dirham "<<endl;
        cin >> euro;
        dirham = c1.convert_euro_to_dirham(euro);
        cout << euro <<" Euro In Dirham = "<< dirham; 
        store << "Total Amount is :" << dirham << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
        }
    else if(choice == 17){
        double dirham;
        double dollar;
        cout << "Enter Dirham to convert to Dollar "<<endl;
        cin  >> dirham;
        dollar = c1.convert_dirham_to_dollar(dirham);
        cout << dirham <<" Dirham In Dollar = "<< dollar;
        store << "Total Amount is :" << dollar << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 18){
        double dirham;
        double rupee;
        cout << "Enter Dirham to convert to Rupee ";
        cin  >> dirham;
        rupee = c1.convert_dirham_to_rupee(dirham);
        cout << dirham <<" Dirham In Rupee = "<<rupee;
        store << "Total Amount is :" << rupee << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 19){
        double dirham;
        double euro;
        cout << "Enter Dirham to convert to Euro ";
        cin  >> dirham;
        euro = c1.convert_dirham_to_euro(dirham);
        cout << dirham <<" Dirham In Euro = "<<euro;
        store << "Total Amount is :" << euro << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else if(choice == 19){
        double dirham;
        double pound;
        cout << "Enter Dirham to convert to Pound ";
        cin  >> dirham;
        pound = c1.convert_dirham_to_pound(dirham);
        cout << dirham <<" Dirham In Pound = "<<pound;
        store << "Total Amount is :" << pound << endl;
         store << "-----------------------------------------------------"<<endl;
        store.close();
    }
    else{
        cout << "Invalid choice, please select between 1 - 20" << endl;
    }
    }
