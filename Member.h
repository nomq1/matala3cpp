#pragma once

#include "iostream"
#include <vector>
#include <algorithm>

using namespace std;


class Member {

private:
	
	vector<Member* > followers;
	vector<Member* > following;
	static int numUsers;
protected: static int nextId;
	int userId;

public:
	// declerations of functions
	Member();
	~Member(); 

	int numFollowers();
	int numFollowing();

	void follow(Member& other);
	void unfollow(Member& other);
	

	static int count() { // count the number of the active memebers 
		return numUsers;
	}
	
};
