#include"EdgeNode.h"
class vertexNode
{
public:
	int vertexNum = 0;  //�����
	int sum_site = 0;
	EdgeNode* begin = NULL;  //����㿪ʼ�ڵ�
	EdgeNode* Now_site = NULL;	//�������λ��
	vertexNode(int a, int b)
	{
		vertexNum = a;
		int sum_site = b;
		EdgeNode* begin = NULL;  //����㿪ʼ�ڵ�
		EdgeNode* Now_site = NULL;	//�������λ��
	}
	vertexNode()
	{
		vertexNum = 0;
		int sum_site = 0;
		EdgeNode* begin = NULL;  //����㿪ʼ�ڵ�
		EdgeNode* Now_site = NULL;	//�������λ��
	}
};