#include <iostream>
#include <vector>
#pragma once

using namespace std;

class Member{
	private:
	vector<Member*> followers;
	vector<Member*> following;
	static int count1;
	
	
	public:
	static int count();
	int numFollowers();
	int numFollowing();
	void follow(Member&);
	void unfollow(Member&);
	Member();
	~Member();
	};
