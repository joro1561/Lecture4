#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"
using namespace std;

int main(){
	std::cout << Factorial (5) <<std::endl;

	std::vector<int> v{1,2,3};

	std::vector<int> res = AddN(v, 5);

	int resSize = res.size();
	
	for(int i=0;i<resSize;i++){
		std::cout<<res[i]<<" ";
	}

	std::vector<int> vec = SubtractN(v, 5);

	for(int i=0;i<resSize;i++){
		std::cout<<vec[i]<<" ";
	}

	std::cout << std::endl;

	std::vector<double> nums{1,2,3,4};

	 

	std::cout << Sum(nums) << std::endl;

	/* double n = 4;
	double m = 2; */

	//Multiples(n,m);

}
