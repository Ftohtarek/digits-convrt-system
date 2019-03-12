#include<iostream>
using namespace std;
class converted_system {
	long long binary=0;
	long long decimal=0;
	char hexadecimal[50];
	int decimalarr[50];
	int binaryarr[50];
	int  step = 0,step1=0 ,i=0; //using for increamnt and decremant

public:
	
	converted_system(){
		binary = 0;
		decimal = 0;
		cout << "**************** welcome to convert system ***************\n\n";
	}//constructor
	void set_binary(long long b){
		binary = b;
	}
	void convert_binary_to_decimal(){
		int  i = 0, rest_of_division;
		while (binary != 0)
		{
			rest_of_division = binary % 10;
			binary /= 10;
			decimal += rest_of_division*pow(2, i);
			++i;
		}
	}
	void print_decimlfrombinary(){
		cout << " decimal number [ " << decimal << " ] 10" << endl << endl;
	}
	void set_decimal(long long deci){
		decimal = deci;
	}
	void convert_Decimal_ToBinary()
	{

		int rest_of_division, i = 1;

		while (decimal != 0)
		{
			rest_of_division = decimal % 2;
			cout << "Step " << ++step1 << ": " << rest_of_division << " | " << decimal << endl << endl;
			decimal /= 2;
			binaryarr[i] = rest_of_division;
			i++;
		}
	}
	void print_binary()
	{
		cout << "\n\n binary= [ ";
		while (step1 > 0){
			cout << binaryarr[step1];
			step1--;
		}

		cout << " ] 2" << endl << endl;
	}
	void set_hexadecimal(){
		cout << "Enter hexadecimal number : ";
		cin >> hexadecimal;

	}
	void convert_hexa_todecimal(){
		{ while (hexadecimal[i]){
			if (hexadecimal[i] == '1')
				decimalarr[i] = 1;
			else if (hexadecimal[i] == '2')
				decimalarr[i] = 2;
			else if (hexadecimal[i] == '3')
				decimalarr[i] = 3;
			else if (hexadecimal[i] == '4')
				decimalarr[i] = 4;
			else if (hexadecimal[i] == '5')
				decimalarr[i] = 5;
			else if (hexadecimal[i] == '6')
				decimalarr[i] = 6;
			else if (hexadecimal[i] == '7')
				decimalarr[i] = 7;
			else if (hexadecimal[i] == '8')
				decimalarr[i] = 8;
			else if (hexadecimal[i] == '9')
				decimalarr[i] = 9;
			else if (hexadecimal[i] == 'a')
				decimalarr[i] = 10;
			else if (hexadecimal[i] == 'b')
				decimalarr[i] = 11;
			else if (hexadecimal[i] == 'c')
				decimalarr[i] = 12;
			else if (hexadecimal[i] == 'd')
				decimalarr[i] = 13;
			else if (hexadecimal[i] == 'e')
				decimalarr[i] = 14;
			else if (hexadecimal[i] == 'f')
				decimalarr[i] = 15;
			i++;
		} }
		int rest_of_division = 0;
		i -= 1;//to start with final elemnt store in arry
		while (hexadecimal[step]){
			rest_of_division += (decimalarr[i] * pow(16, step));
			step++;
			i--;
		}
		decimal = rest_of_division;

	}
	void print_decimalfrom_hexa(){
		cout << " decimal number = [" << decimal << " ] 10" << endl << endl;
	}
	void convert_hexa_tobinary(){
		convert_hexa_todecimal();
		convert_Decimal_ToBinary();
		print_binary();
	}
	void convert_decimal_tohexa(){
		while (decimal != 0){
			decimalarr[i] = decimal % 16;
			cout << "step : " << step << "-->  " << decimalarr[i] << "|" << decimal << endl;
			decimal /= 16;
			(decimalarr[i] == 1) ? hexadecimal[i] = '1' : decimalarr[i];
			(decimalarr[i] == 2) ? hexadecimal[i] = '2' : decimalarr[i] ;
			(decimalarr[i] == 3) ? hexadecimal[i] = '3' : decimalarr[i] ;
			(decimalarr[i] == 4) ? hexadecimal[i] = '4' : decimalarr[i];
			(decimalarr[i] == 5) ? hexadecimal[i] = '5' : decimalarr[i] ;
			(decimalarr[i] == 6) ? hexadecimal[i] = '6' : decimalarr[i] ;
			(decimalarr[i] == 7) ? hexadecimal[i] = '7' : decimalarr[i] ;
			(decimalarr[i] == 8) ? hexadecimal[i] = '8' : decimalarr[i] ;
			(decimalarr[i] == 9) ? hexadecimal[i] = '9' : decimalarr[i] ;
			(decimalarr[i] == 10) ? hexadecimal[i] = 'a' : decimalarr[i] ;
			(decimalarr[i] == 11) ? hexadecimal[i] = 'b' : decimalarr[i] ;
			(decimalarr[i] == 12) ? hexadecimal[i] = 'c' : decimalarr[i] ;
			(decimalarr[i] == 13) ? hexadecimal[i] = 'd' : decimalarr[i] ;
			(decimalarr[i] == 14) ? hexadecimal[i] = 'e' : decimalarr[i] ;
			(decimalarr[i] == 15) ? hexadecimal[i] = 'f' : decimalarr[i] ;
			i++;
			step++;
		}


	}
	void convert_binary_tohexa(){
		convert_binary_to_decimal();
		convert_decimal_tohexa();

	}
	void print_hexa(){
		step -= 1;
		cout << "hexadecimal num = [ ";
		while (step >= 0){
			cout << hexadecimal[step];
			step--;
		}
		cout << " ] 16 \n\n";
	}
	 
};

#include<iostream>
using namespace std;
void main(){
	long long num;
	int op;
	char number[50];
	
	converted_system frist;
	
		cout << " 1 :  binary to decimal .         \t 2 : binary to hexadecimal   . \n\n";
		cout << " 3 :  decimal to binary .         \t 4 : decimal to hexadecimal  .\n\n";
		cout << " 5 :  hexadecimal to binary .     \t 6 : hexadecimal to decimal  .\n\n";
		cout << "-  ";
		cin >> op;
		switch (op){
		case(1) :
			cout << "\n Enter binary num : ";
			cin >> num;
			frist.set_binary(num);
			frist.convert_binary_to_decimal();
			frist.print_decimlfrombinary();
			break;
		case(2) :
			cout << "\n Enter binary num : ";
			cin >> num;
			frist.set_binary(num);
			frist.convert_binary_tohexa();
			frist.print_hexa();
			break;

		case(3) :
			cout << "\n Enter decimal num : ";
			cin >> num;
			frist.set_decimal(num);
			frist.convert_Decimal_ToBinary();
			frist.print_binary();
			break;

		case (4) :
			cout << "\n Enter decimal num : ";
			cin >> num;
			frist.set_decimal(num);
			frist.convert_decimal_tohexa();
			frist.print_hexa();
			break;
		case(5) :
			frist.set_hexadecimal();
			frist.convert_hexa_tobinary();
			frist.print_binary();
			break;
		case(6) :
			frist.set_hexadecimal();
			frist.convert_hexa_todecimal();
			frist.print_decimalfrom_hexa();
			break;
		default:
			cout << "thanks for using \n";

		}


	}

