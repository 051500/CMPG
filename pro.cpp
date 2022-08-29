#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void print(string value) {
    cout << value << endl;
}
int main () {
    // bubble sort 
    // for loop length == size of list
    // the largest number will bubble to the top of the list w/ each iteration
    int a_size = 9;
    int l[a_size] ;
    ifstream values ;
    values.open("values.txt");
     for (int k = 0; k < sizeof(l); k++) {
        values >> l[k];
        } 
    //inf.close();
    //int a ;
    //inf.ignore(1,'\n') >> a;
    //inf >> a;
    //cout << "inf: " << a << endl;
    //
    //int n_list[sizeof(list)] = list();
    //cout << "size: " << c << endl;
    cout << "\n\n\n";
    //cout << "\t*\n";
    for (int j = 0; j < a_size ; j++) {
        cout << l[j]  << "\t";
        }
        cout <<"\n";
    // swap
    for (int k = 0; k < a_size; k++) {
        // if list[i > (i+1) swap
        // container
        int s = 0;
        for (int i = 0; i < a_size; i ++) {
            int a = l[i], b = l[i+1];
            
            if (!(i == 0)) {
                s = (8 * (i)) + 1;
            }
            cout << "\ns: " << s << "\ti:" << i << endl;
        
            if (l[i] > l[i+1]) {
                //swap
                l[i+1] = l[i];
                l[i] = b;
                
                cout << setw(s) << "*";
                cout << "\n\n";
                for (int j = 0; j < a_size ; j++) {
                    cout << l[j]  << "\t";
                    }
                    cout <<"\n"; 
            } else {
                cout << setw(s) << "*";
                cout << "\n\n";
            }
        }
        
    }

    


}