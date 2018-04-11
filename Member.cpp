#include "Member.h"

using namespace std;

int Member::count1 = 0;	

Member::~Member(){
	
	for(int i=0 ;i<following.size(); i++){
		unfollow(*following[i]);
	}
	
	for(int i=0 ;i<followers.size(); i++){
		followers[i]->unfollow(*this);
	}

	--count1;
	following.clear();
	followers.clear();
	
	
}
	
Member::Member(){	
	++count1;
}
	
 int Member::count(){
	return count1;
}
	
	
int Member::numFollowers(){
	return this->followers.size();
}
int Member::numFollowing(){
	return following.size();
}
	
void Member::follow(Member& member){
	Member *p = &member; 	
	
	if(p == this)
		return;
	
	for(int i=0; i<following.size(); i++){
		if(following[i] == p){
			std::cout<<" here"<<endl;
			return;
		}
	}	
	following.push_back(p);
	p->followers.push_back(this);	
}
	
void Member::unfollow(Member& member){
	
	Member *p = &member; 
	
	if(p == this)
		return;
	
	int flag = 0;
	for(int i=0; i<following.size(); i++){
		if(following[i] == p){
			following.erase(following.begin() + i);
			flag = 1;
		}
	}
	if(flag == 0) return;
	
	for(int i=0; i< p->followers.size(); i++){
		if(p->followers[i] == this){
			p->followers.erase(p->followers.begin()+i);
			return;
		}
	}
	
}
