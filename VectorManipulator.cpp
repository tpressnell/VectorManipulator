#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void sums_and_pruducts();
void rotate();



void sums_and_products(){
	
	vector<int> v1(10);
	vector<int> v2(10);
	vector<int> v3(10);	
	vector<int> v4(10);
	
	cout << "Please enter 10 positive integers for me to put into a list." << '\n';
	
	for (int i = 0; i < 10; ++i){
		
		cin >> v1[i];
		
	}
	
	cout << "Please enter 10 more numbers for me to put into a list." << '\n';
	cout << "After I get your numbers, I will add the lists together and make a third list." << '\n';
	cout << "After that, I will multiply the first two lists togehter and make a fourth list." << '\n';
	
	for (int i = 0; i < 10; ++i){
		
		cin >> v2[i];
		
	}
	
	for (int i = 0; i < 10; ++i){
		
		 v3[i] = v1[i] + v2[i];
		 v4[i] = v1[i] * v2[i];
	}
	
	for (int i = 0; i < 10; ++i){cout << left << setw(4) << v1[i];}
	cout << '\n';
	for (int i = 0; i < 10; ++i){cout << setw(4) << v2[i];}
	cout << '\n';
	for (int i = 0; i < 10; ++i){cout << setw(4) << v3[i];}
	cout << '\n';
	for (int i = 0; i < 10; ++i){cout << setw(4) << v4[i];}
	cout << '\n';
	
}

void rotate(){
	vector<int> v5(10);
	vector<int> v6(10);
	int rotations = 0;
	cout << "Please enter 10 integer values." << '\n';
	
	for (int i = 0; i < 10; ++i){
		
		cin >> v5[i];
		
	}
	
	cout << "Now, please enter how many spaces you would like to shift the integers. " <<'\n';
	cin >> rotations;
	 for(int i = 0; i < rotations; ++i){
	 	for(int i = 0; i < 10; ++i){
	 		if (i > 0){
	 			
			 v6[i] = v5[i-1];
			 
			 }
			 
			 else if(i == 0){
			 
			 	v6[0] = v5[9];
			 }
		 }
		 v5 = v6;	 
		}
	 
	 for (int i = 0; i < 10; ++i){ cout << left << setw(4) << v6[i];}
	 
	
}

int main(){
	
	sums_and_products();
	rotate();
	
}
