#include<iostream>
#include<string>
using namespace std;

int main(){
	int i = 1;
	int count_A = 0, count_B = 0, count_C = 0, count_D = 0, count_F = 0; 
	int count[5] = {count_A, count_B, count_C, count_D, count_F}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i <<  "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A"){ // if grade is A
			count[0]++;
		}else if(grade == "B"){ // if grade is B
			count[1]++;
		//and so on ... for grade = C, D, F	
		}else if(grade == "C"){ // if grade is B
			count[2]++;
		}else if(grade == "D"){ // if grade is B
			count[3]++;
		}else if(grade == "F"){ // if grade is B
			count[4]++;
		}else{ 
		    if(grade != "0")
			cout << "Wrong input. Please input again.\n";
		}
        if(grade == "A" or grade == "B" or grade == "C" or grade == "D" or grade == "F"){ 
			i++;}
	}while(grade != "0");
	
	
	cout << "In total " << i-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4]; 	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}