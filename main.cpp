#include <iostream>
#include <iomanip>
using namespace std;

int main{
	int numC; //records the number of cases 
	int numS=0; //records the number of students in one case
	float per=0; // the percentage of students whose grade is above average, initialed to be 0
	cin>> numC;
	for(int i=0;i<numC;i++){
		cin>>numS;
		int Stu[1000];
		int Sum; //records the number of students whose grade is above average

		for(int j=0;j<numS;j++){ //input all grades of one case
			cin>>Stu[numS];
			Sum+=Stu[numS];
		}

		float ave=Sum/numS; //calculate the average of students in one case

		for(int j=0;j<numS;j++){ // calculate the average of students whose grade is above average
			if(Stu[numS]>ave){
			Sum++;
			}
		}
		per=Sum/numS;
		cout<<setprecision(3)<<per<<endl;
	}
	return 0;
}