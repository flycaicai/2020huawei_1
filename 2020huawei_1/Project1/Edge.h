#include<string>
#include<iostream>
#include<stdlib.h>
#include<map>
#include<vector>
#include<queue>

//±ß
class Edge
{
public:
	int V; //Æð
	int E; // ÖÕ
	int Weight;	//È¨Öµ
	Edge(int V, int E, int weight)
	{
		this->V = V;
		this->E = E;
		this->Weight = weight;
	}
	int weight()
	{
		return Weight;
	}
	int from()
	{
		return V;
	}
	int to()
	{
		return E;
	}
	std::string toString()
	{
		std::string res = std::to_string(V) +"->"+ std::to_string(E);
	}
};