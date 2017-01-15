#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int numC; //the integer that records the number of cases 
	cin>> numC;

	for(int i=0;i<numC;i++){
		int numS; //the integer that records the number of students in one case
		
		int Stu[1001]; // number of students is [0,1000]
		int sum=0; //records sum of grades
		int num=0; //records students whose grade is above average

		cin>>numS;

		for(int j=0;j<numS;j++){ //input all grades of one case
			cin>>Stu[j];
			sum+=Stu[j];
		}

		float ave=sum/numS; //calculate the average of students in one case

		for(int j=0;j<numS;j++){ // calculate the average of students whose grade is above average
			if(Stu[j]>ave)
			num++;
			
		}
		float per=(float)num/numS;// the percentage of students whose grade is above average ,convert the result of int to float
		
		cout.setf(ios::fixed);
		cout<<setprecision(3)<<per*100<<"%"<<endl;

		
	}
	return 0;
}
