/*
Sort linked list of 0s 1s 2s
Problem Statement
You are given a linked list having N number of nodes and each node will have an integer which can be 0, 1, or 2. You have to sort the given linked list in ascending order.

Sample Input 1:
2
1 0 2 1 2 -1
0 0 1 2 -1
Sample Output 1:
0 1 1 2 2 -1
0 0 1 2 -1
*/


Node* sortList(Node *head)
{
    int zeroCount,oneCount,twoCount = 0;
    
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0)
            zeroCount++;
        else if(temp->data == 1)
            oneCount++;
        else if(temp->data == 2)
            twoCount++;
        
        temp =temp -> next;
    }
    
    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data=0;
            zeroCount--;
        }
        else if(twoCount != 0){
            temp->data=0;
            zeroCount--;
        }
    }
    return head;
}
