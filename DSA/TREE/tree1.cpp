#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left,*right;
    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;

    }

};


node* insert(int val, node* &root){
    if(!root){
        return new node(val);
    }
    node* temp=root;
    node* current=NULL;
   
    while(temp!=NULL){
        current=temp;
        if(val>temp->data){
            temp=temp->right;
    }
        else if(val<temp->data){
            temp=temp->left;
        }
        else if(val==temp->data){
            cout<<"duplicate values not allowed";
            break;
        }
    }

    node* new_node=new node(val);
    if(val<current->data){
        current->left=new_node;
    }
    else if(val>current->data){
        current->right=new_node;
    }

    return root;
    
}


void Inorder(node* root) {
    if (root == NULL)
        return;
    else {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

void postOrder(node* root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

void preOrder(node* root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void findMin(node* root){
	while(root->left!=NULL){
		root=root->left;
	}
	cout<<"Min value in the tree is: "<<root->data;
}

 void findMax(node* root){
	while(root->right!=NULL){
		root=root->right;
	}
	cout<<"Max value in the tree is: "<<root->data;
}


node* findValue(node* root,value){
    if(root==NULL || root->data==value){
        return root;
    }

    if(value<root->data){
        root=findValue(root->left,value)
    }

    else if(value>root->data){
        root=findValue(root->right,value);
    }
}

int main(){
    //created a null node
    node *root=NULL;

    //iterating to get value from the user
    for(int i=0;i<9;i++){
        int value;
        cout<<"enter value of any value for your node: ";
        cin>>value;
        root=insert(value,root);

    }
    //printing inorder traversal of the tree
	cout<<endl;
	cout<<"Inorder Traversal: ";
    Inorder(root);

    //printing Post Order traversal of the tree
    cout<<endl;
    cout<<"Post Order Traversal: ";
    postOrder(root);

    //printing Pre Order Traversal of the tree
    cout<<endl;
    cout<<"Pre Order Traversal: ";
    preOrder(root);

    //finding minimum value in the tree
    cout<<endl;
    findMin(root);

    //finding maximum value in the tree
    cout<<endl;
    findMax(root);

    // finding any value given by the user in the tree if it exists in tree or not
    cout<<endl;
    node* returnValue=findValue(root,8);
    if(returnValue!=NULL){
        cout<<"Value Found: "<<returnValue->data;

    }

    else{
        cout<<"Value not found in the tree";
    }

    


    

}