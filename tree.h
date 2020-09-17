//Famous and infamous
//Tree definition

#ifndef TREE_H
#define TREE_H

#include <string>

using namespace std;

class Node;

class Tree{
	public:
		//builds minimal starting tree
		Tree();
		//frees aallocated memory
		~Tree();
		//resets current position to root
		void Reset();
		//deletes node and all descendants
		void Delete(Node* pNode);
		//displays question at current position
		bool DisplayCurrentQuestion();
		//advances current position to next question
		void NextQuestion(char answer);
		//adds person to tree, based on current position
		void AddPerson();
		//asks yes or no question
		char AskYesNo(const string& question="");
		
		static const char YES = 'y';
		static const char NO = 'n';
		
	private:
		//pointer to root
		Node* m_pRoot;
		//pointer to current position
		Node* m_pCurrent;
		//pointer to current of current position
		Node* m_pCurrentParent;
};

#endif
