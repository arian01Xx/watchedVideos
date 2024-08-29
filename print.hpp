#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void printVector2Dint(vector<vector<int>> friends){
	for(int i=0; i<friends.size(); i++){
		for(int j=0; j<friends[i].size(); j++){
			cout<<friends[i][j];
		}
		cout<<endl;
	}
}

void printVector2DString(vector<vector<string>> videos){
	for(int i=0; i<videos.size(); i++){
		for(int j=0; j<videos[i].size(); j++){
			cout<<videos[i][j]<<" ";
		}
		cout<<endl;
	}
}

void printVectorString(vector<string> ans){
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}

#endif