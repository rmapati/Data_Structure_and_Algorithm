#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev ;
		
	Node(int data)
	{
		this->data=data;
		this->next=__null;
		this->prev=__null;
//		this->next=__null(for null value in address use uderscore
		
	}
	
	//destructor
	~Node(){
		int value=this->data;
		if(this-next!=__null)
		{
			delete next;
			this->next=__null;
		}
		
		//
		cout<<"memory is free with node of the data: "<<value<<endl;
	}
};




//Insertion

void Traverse(Node* &head)
{
	Node* temp=head;
	while(temp!=__null){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int getLength(Node* head){
	int len=0;
	Node* temp=head;
	while(temp!=__null)
	{
		len++;
		temp=temp->next;
		
	}
	return len;
}
void InsertAthead( Node* &tail,Node* &head,int d)
{
	//if empty list
	if(head==__null){
		Node* temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else{
	
	Node* temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
  }
}






void InsertAtTail(Node* &tail,Node* &head,int d){
	if(tail==__null)
	{
		Node* temp=new Node(d);
		tail=temp;
		head=temp;
		
	}
	else
	{
		Node* temp=new Node(d);
	    tail->next=temp;
	    temp->prev=tail;
	    tail=temp;
	}
	
	
}






void InsertAtPosition(Node* &head,Node* &tail,int position,int d)
{
	if(position==1)
	{
		InsertAthead(tail,head,d);
		return;
	}
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1)
	{
		temp=temp->next;
		cnt++;
	}
	
	//inserting at last position
	if(temp->next==__null){
		InsertAtTail(tail,head,d);
		return;
	}
	Node* nodetoInsert=new Node(d);
	nodetoInsert->next=temp->next;
	temp->next->prev=nodetoInsert;
	temp->next=nodetoInsert;
	nodetoInsert->prev=temp;
	
}






//deletion


void deleteNode(int position,Node* &head)
{
	if(position==1){
		Node* temp=head;
		temp->next->prev=__null;
		head=temp->next;
		temp->next=__null;
		delete temp; //create a distructor to delete that node inside the class
	}
	
	else{
		
		//deleting any  middle or last node
		Node* curr=head;
		Node* prev=__null;
		
		int cnt=1;
	    while(cnt<position){
	    	prev=curr;
	    	curr=curr->next;
		}
		curr->prev=__null;
		prev->next=curr->next;
		curr->next=__null;
		delete curr;
		
	}
}











int main() 
{
//	Node* node1=new Node(10);
	Node* head=__null;
	Node* tail=__null;
	Traverse(head);
    cout<<getLength(head)<<endl;
    
    InsertAthead(tail,head,11);
    Traverse(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    
    InsertAthead(tail,head,13);
    Traverse(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    
    InsertAthead(tail,head,8);
    Traverse(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    
    InsertAtTail(tail,head,25);
    Traverse(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    
    InsertAtTail(tail,head,45);
    Traverse(head);
    
    
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    InsertAtPosition(head,tail,2,100);
    Traverse(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    
    InsertAtPosition(head,tail,7,102);
    Traverse(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    
    
    deleteNode(1,head);
    Traverse(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    
    deleteNode(7,tail);
    Traverse(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    

	
}

