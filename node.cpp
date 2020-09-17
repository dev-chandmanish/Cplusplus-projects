//Famous and infamous 
//Node implementation

#include "node.h"
#include<string>

using namespace std;

Node::Node(const string& question, Node* pYes, Node* pNo):
	m_Question(question),
	m_pYes(pYes),
	m_pNo(pNo)
{}

//tests if is final question(leaf node)
bool Node::IsFinalQuestion() const{
	return (m_pYes == NULL && m_pNo == NULL); 
}
