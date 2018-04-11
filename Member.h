#include <iostream>
#include <vector>


using namespace std;

class Member{
	private:
	vector<Member*> followers;
	vector<Member*> following;
	static int count1;
	
	
	public:
	void follow(Member&);
	void unfollow(Member&);
	int numFollowers();
	int numFollowing();
	static int count();
	Member();
	~Member();
	};
