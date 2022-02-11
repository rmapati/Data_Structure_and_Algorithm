#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
	Node(int data)
	{
		this->data=data;
		this->next=__null;
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



//insertion

void InsertAtTail(Node* &tail,int d)
{
	Node* temp=new Node(d);//create new node name temp
	tail->next=temp;
	tail=tail->next;
	
}





void InsertAtHead(Node* &head,int d){
	//here reference passing to do changes in original linked list
	// int d = data to be inserted in the newly inderted node
	Node* temp= new Node(d);
	temp->next=head;
	head=temp;	
}




//generic code for insertion at start,end,and middle always call this function to insert any node
void InsertAtPosition(Node* &head,Node* &tail,int position,int d)
{
	if(position==1)
	{
		InsertAtHead(head,d);
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
		InsertAtTail(tail,d);
		return;
	}
	Node* nodetoInsert=new Node(d);
	nodetoInsert->next=temp->next;
	temp->next=nodetoInsert; 
}




 
void Traverse(Node* &head)
{
	Node* temp=head; // creating temporary node so that to not change in any original head node 
	while(temp!=__null)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
}



//deletion


void deleteNode(int position,Node* &head)
{
	if(position==1){
		Node* temp=head;
		head=head->next;
		temp->next=__null;
		delete temp; //create a distructor to delete that node inside the class
	}
	else{
		//deleting any middle or last node
		Node* curr=head;
		Node* prev=__null;
		
		int cnt=1;
	    while(cnt<position){
	    	prev=curr;
	    	curr=curr->next;
		}
		
		prev->next=curr->next;
		curr->next=__null;
		delete curr;
		
	}
}











int main()
{
	//creating new node
	Node* node1=new Node(50);
   //cout<<node1->data<<endl;
  //cout<<node1->next<<endl;
  //head pointing to new node1
  
  //reverse
   Node* head=node1;//head pointer
//   Traverse(head);
   Node* tail=node1;// tail pointer initially pointing to the head node 
//   Traverse(tail);
   InsertAtHead(head,60);
//   Traverse(head);//calling print function traversing
   InsertAtHead(head,70);
//   Traverse(head);//calling print function to traverse
   cout<<endl;
   
   //forward
   InsertAtTail(tail,50);
   //print(tail);
   InsertAtTail(tail,60);
   //print(tail);
   InsertAtTail(tail,70);
//   Traverse(head);
	
   
   //middle
   InsertAtPosition(head,tail,3,22);//generic function call
  
   
//   InsertAtPosition(head,tail,1,22);
//    Traverse(head);  
    InsertAtPosition(head,tail,8,25);//generic function call
    Traverse(head);
	cout<<head->data<<endl;
	cout<<tail->data<<endl;
	
	deleteNode(1,head);
	Traverse(head);
	
	cout<<head->data<<endl;
	cout<<tail->data<<endl;
	
	return 0;
}