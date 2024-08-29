#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class SolutionThirtySix{
public:
	vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level){
		unordered_map<int,vector<string>> graphVideos;
		for(int i=0; i<watchedVideos.size(); i++){
			graphVideos[i]=watchedVideos[i];
		}
		unordered_map<int,vector<int>> graphConnected;
		for(int i=0; i<friends.size(); i++){
			graphConnected[i]=friends[i];
		}
		int n=friends.size();
		vector<string> ans;
		int c=0;
		vector<bool> visited(n,false);
		queue<int> q;
		visited[id]=true;
		q.push(id);
		while(!q.empty() && c<level){
			int size=q.size();
			while(size--){
				int node=q.front();
				q.pop();
				for(int neighbor: graphConnected[node]){
					if(!visited[neighbor]){
						visited[neighbor]=true;
						q.push(neighbor);
					}
				}
			}
			c++;
		}
		if(c==level){
			unordered_map<string,int> videoCount;
			while(!q.empty()){
				int node=q.front();
				q.pop();
				for(const string& video: graphVideos[node]){
					videoCount[video]++;
				}
			}
			vector<pair<string,int>> sortedVideos(videoCount.begin(), videoCount.end());
			sort(sortedVideos.begin(), sortedVideos.end(), [](const auto& a, const auto& b){
				if(a.second==b.second) return a.first < b.first;
				return a.second < b.second;
			});
			for(const auto& video: sortedVideos){
				ans.push_back(video.first);
			}
		}
		return ans;
	}
};

#endif