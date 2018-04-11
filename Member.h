#include <iostream>
#include <vector>
#pragma once

using namespace std;

class Member{
	private:
	vector<Member*> followers;
	vector<Member*> following;
	static int count;
	
	
	public:
	static int count();
	int numOfFollowers();
	int numOfFollowing();
	void follow(Member&);
	void unfollow(Member&);
	Member();
	~Member();
	};
