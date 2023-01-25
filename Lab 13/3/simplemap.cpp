#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &str)
{
	unordered_map<string, int> test;
	string word;

	int i = 0; 
	for(i; i < str.size(); i++){
		if(str[i] == ' '){


			auto got = test.find(word);

			if(got != test.end()){ 
				got->second++;
			}
			else{
				test.insert({word, 1});
			}
			word = "";
		}
		else{
			word += str[i];
		}
	}

	for(const auto&x : test){
		cout << '(' << x.first << ", " << x.second << "), ";
	}

}

int main(int argc, char** argv)
{

	ifstream ifs("file.txt");
	string content((istreambuf_iterator<char>(ifs)),(istreambuf_iterator<char>()));

	printFrequencies(content);

	return 0;
}