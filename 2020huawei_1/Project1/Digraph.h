#include<map>
#include<vector>
#include<set>
#include<stack>
#include<map>
#include<queue>
#include"EdgeNode.h"
extern std::vector<int> count_nums;
class Digraph
{
public:
	int V; //顶点数

	std::vector<EdgeNode*> adj1;		//邻接表

	Digraph(int V);		//你知道的

	void addEdge(int V, int E, int Weight);	//你知道的

	void re_size();

	int two_point_weight(int a, int b);//显然

	int size();

};