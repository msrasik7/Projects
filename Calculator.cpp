//calculator with gst
//by rasik
//20 Aug 2024
//add and multiply are not in loop because they support multiple input

#include <bits/stdc++.h>
using namespace std;

void add(){
    cout << "\nAdd\n";
	vector <float> num;
	string n;
    getline(cin, n);
		stringstream ss(n);
		float number;
        while (ss >> number)
            num.push_back(number);    
    float sum = accumulate(num.begin(), num.end(), 0);
    cout << ">> " << sum << "\n" ;
}

void sub(){	
    cout << "\nSubtracting...\n";
	float a, b;
	while (true) {
        cout << "Enter a numbers: ";
        if (cin >> a >> b )
            cout << ">> " << a-b << endl;
        else {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits < streamsize>::max(), '\n'); // Discard the invalid input
            cout << "Non-numeric character entered. Exiting the loop...\n" << endl;
            break;
        }
    }
}

void mul(){
        cout << "\nMultiply\n";
	vector <long long int> num;
	string n;
    getline(cin, n);
		stringstream ss(n);
		long long int number;
        while (ss >> number)
            num.push_back(number);    
    long long int product = accumulate(num.begin(), num.end(), 1, multiplies <int>());
    cout << ">> " << product << "\n" ;
}

void div(){
	cout << "\nDividing...\n";
	float a, b;
	while (true) {
        cout << "Enter a numbers: ";
        if (cin >> a >> b )
            cout << ">> " << a/b << endl;
        else {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits < streamsize>::max(), '\n'); // Discard the invalid input
            break;
        }
    }
	}

void mod(){
	cout << "\nModulus...\n";
	int a, b;
	while (true) {
        cout << "Enter a numbers: ";
        if (cin >> a >> b )
            cout << ">> " << a%b << endl;
        else {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits < streamsize>::max(), '\n'); // Discard the invalid input
            break;
        }
    }
}
	
void exp(){
	cout << "\nExponent...\n";
	int a, b;
	while (true) {
        cout << "Enter a numbers: ";
        if (cin >> a >> b )
            cout << ">> " << pow(a, b) << endl;
        else {
            cin.clear();
            cin.ignore(numeric_limits < streamsize>::max(), '\n');
            break;
        }
    }
}
	
void gst12(){
	float amount;
	cout << "Enter amount : ";
	cin >> amount;
	cout << "CGST 6% : " << amount*6/100 << "\n";
	cout << "SGST 6% : " << amount*6/100 << "\n";
    cout << "Total GST : " << amount*12/100 << "\n\n";
	}
	
void gst18(){
	float amount;
	cout << "Enter amount : ";
	cin >> amount;
	cout << "CGST 6% : " << amount*9/100 << "\n";
	cout << "SGST 6% : " << amount*9/100 << "\n";
    cout << "Total GST : " << amount*18/100 << "\n\n";
	}

void gst28(){
	float amount;
	cout << "Enter amount : ";
	cin >> amount;
	cout << "CGST 6% : " << amount*14/100 << "\n";
	cout << "SGST 6% : " << amount*14/100 << "\n";
    cout << "Total GST : " << amount*28/100 << "\n\n";
	}

void gst5(){
	float amount;
	cout << "Enter amount : ";
	cin >> amount;
	cout << "CGST 6% : " << amount*2.5/100 << "\n";
	cout << "SGST 6% : " << amount*2.5/100 << "\n";
    cout << "Total GST : " << amount*5/100 << "\n\n";
	}
	
void gst(){
	cout << "1.GST 5%\n2.GST 12%\n3.GST 18%\n4.GST 28%\n";
	int n;
	cin >> n;
	
	switch(n){
		case 1:
			gst5();
			break;
		case 2:
			gst12();
			break;
		case 3:
			gst18();
			break;
		case 4:
			gst28();
			break;
	}
}

void menu(){
	cout << "      -Calculator-\n";
    
    cout << "Operations\n1.Add\n2.Subtract\n3.Multiply\n4.Divide";
    cout << "\n5.Modulus\n6.Exponent\n7.GST\n8.Exit\n";
    cout << "Enter any non-numeric character to exit loop.\n--------------\n";
    while(true){
		cout << "\nEnter Operation : ";
    int test;cin >> test;
    switch(test){
				
	case 1:
			cin.ignore();
			add();
			break;
	case 2:
			sub();
			break;
	case 3:
			cin.ignore();
			mul();
			break;
	case 4:
			div();
			break;
	case 5:
			mod();
			break;
	case 6:
			exp();
			break;
	case 7:
			gst();
			break;
	case 8:
			exit(0);
		       
	default:
		cin.clear();
		cin.ignore();
		cout << "Enter only from 1 to 7\n\n";
		break;
		}
	}
}
int main(){
    
    menu();
	 
    return 0;
}
