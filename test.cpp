#include<iostream>
#include<cstdlib>

using namespace std;

bool ispalindrome(char []);

int main(int argc, char* argv[]){
	char userString[300];
	cout<<"Enter a phrase to be checked"<<endl;
	cin.getline(userString, 300);
	if(ispalindrome(userString)){
		cout<<userString<<" is a palindrome."<<endl;
	}
	else{
		cout<<userString<<" is not a palindrome."<<endl;
	}
	return 0;
}

bool ispalindrome(char array[]){
	bool ispalindrome = true;
	int size = 0, index = 0, startingPos = 0, count1 = 0;
	while(array[size] != '\0'){
		size++;
	}
	char array1[size + 1];
	while(index < size){
		if(array[index] >= 'A' and array[index] <= 'Z' or
		array[index] >= 'a' and array[index] <= 'z'){
			index++;
		}
		for(int count=startingPos; count<index; count++){
			array1[count1] = array[count];
			count1++;
		}
		index++;
		startingPos = index;
	}
	array1[count1] = '\0';
	index = 0;
	while(index <= (count1 - 1)/2 and ispalindrome){
		if(array1[index] != array1[count1-index-1]and
		array1[index] != array1[count1-index-1]-32 and
		array1[index] != array1[count1-index-1] + 32 and
		array1[index] + 32 != array1[count1-index-1] and
		array1[index] -32 != array1[count1-index-1]){
			ispalindrome = false;
		}
		index++;
	}
	return ispalindrome;
}
