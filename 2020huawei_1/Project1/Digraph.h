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
	int V; //������

	std::vector<EdgeNode*> adj1;		//�ڽӱ�

	Digraph(int V);		//��֪����

	void addEdge(int V, int E, int Weight);	//��֪����

	void re_size();

	int two_point_weight(int a, int b);//��Ȼ

	int size();

};