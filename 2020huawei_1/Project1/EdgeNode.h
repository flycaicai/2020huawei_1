#include <cstddef>
#include<memory>
class EdgeNode
{
public:
	int adjvex; //�������Ӻ�
	int weight;		//Ȩֵ
	//std::shared_ptr<EdgeNode> next = NULL;	//��һ��
	EdgeNode* next;
	bool is_used = false;
	EdgeNode(int s, int weight, EdgeNode *x = NULL)	//��Ȼ
	{
		this->adjvex = s;
		this->weight = weight;
		next = x;
	}
};