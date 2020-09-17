//Famous and infamous - computer guesses player's
//Node definition - represents node that store's a question in a binary tree

#ifndef NODE_H
#define NODE_H

#include<string>

using namespace std;

class Node{
	friend class Tree;
	public:
		Node(const string& question, Node* pYes, Node* pNo);
		//tests if is final question(leaf node)
		bool IsFinalQuestion() const;
		
	private:
		string m_Question; //question text
		Node* m_pYes; //pointer to 'yes' child
		Node* m_pNo; //pointer to 'no' child
};

#endif
