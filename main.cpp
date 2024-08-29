#include "solution.hpp"
#include "print.hpp"

int main(){

	vector<vector<string>> videos={{"A","B"},{"C"},{"B","C"},{"D"}};
	vector<vector<int>> friends={{1,2},{0,3},{0,3},{1,2}};
	int id=0, level=1;
	SolutionThirtySix solution;
	vector<string> ans=solution.watchedVideosByFriends(videos,friends,id,level);
	cout<<"Friends: "<<endl;
	printVector2Dint(friends);
	cout<<"Videos watched: "<<endl;
	printVector2DString(videos);
	cout<<"level found: "<<endl;
	printVectorString(ans);

	return 0;
}