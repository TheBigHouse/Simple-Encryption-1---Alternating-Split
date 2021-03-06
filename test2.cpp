// test2.cpp: 定义控制台应用程序的入口点。
//

#include <stdio.h>  
#include <string.h>  
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <strstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>  

using namespace std;

std::vector<std::string> sortByLength(std::vector<std::string> array)
{
	unordered_map<int, std::vector<std::string>> hash;
	for (int i = 0; i < array.size(); i++) {
		std::string temp = array[i];
		if (typeid(temp) != typeid(std::string) || temp.empty()) {
			continue;
		}

		char head = temp[0];
		int i_head = head;
		hash[i_head].push_back(temp);
	}
	std::vector<std::string> res;
	unordered_map<int, std::vector<std::string>>::iterator it = hash.begin();
	while (it != hash.end()) {
		cout << it->first << endl;
		system("PAUSE ");
		it++;
	}
	return array;
}

int main()
{
	std::vector<std::string> expected = { "I", "To", "Beg", "Life" };
	sortByLength(expected);
	system("PAUSE ");
    return 0;
}
