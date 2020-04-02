#include"EdgeNode.h"
class vertexNode
{
public:
	int vertexNum = 0;  //顶点号
	int sum_site = 0;
	EdgeNode* begin = NULL;  //顶点点开始节点
	EdgeNode* Now_site = NULL;	//当点插入位置
	vertexNode(int a, int b)
	{
		vertexNum = a;
		int sum_site = b;
		EdgeNode* begin = NULL;  //顶点点开始节点
		EdgeNode* Now_site = NULL;	//当点插入位置
	}
	vertexNode()
	{
		vertexNum = 0;
		int sum_site = 0;
		EdgeNode* begin = NULL;  //顶点点开始节点
		EdgeNode* Now_site = NULL;	//当点插入位置
	}
};