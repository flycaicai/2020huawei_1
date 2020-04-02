#include <cstddef>
#include<memory>
class EdgeNode
{
public:
	int adjvex; //顶点连接号
	int weight;		//权值
	//std::shared_ptr<EdgeNode> next = NULL;	//下一个
	EdgeNode* next;
	bool is_used = false;
	EdgeNode(int s, int weight, EdgeNode *x = NULL)	//显然
	{
		this->adjvex = s;
		this->weight = weight;
		next = x;
	}
};