#include"Digraph.h"

Digraph::Digraph(int V)		//你知道的
{
	this->V = V;
	adj1 = std::vector<EdgeNode*>(V);
}
void Digraph::addEdge(int V, int E, int Weight)	//你知道的
{
	if (adj1[V] == NULL)  //这一片
	{
		adj1[V] = new EdgeNode(V, 0);
		adj1[V]->next = new EdgeNode(E, Weight);
	}
	else
	{

		adj1[V]->next = new EdgeNode(E, Weight, adj1[V]->next);
	}

}

void Digraph::re_size()
{
	V = count_nums.size();
	adj1.resize(V );

}

int Digraph::size()
{
	return V;

}


int Digraph::two_point_weight(int a, int b)//显然
{
	EdgeNode *tmp = adj1[a];
	while (tmp != NULL)
	{
		if (tmp->adjvex == b)
			return tmp->weight;
		else
			tmp = tmp->next;
	}
	return INT_MAX;
}

