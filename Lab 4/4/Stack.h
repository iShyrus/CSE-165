#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack {
	int size;
	struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
		size = 0;
	}
	
	void push(void* dat){
		size++;
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	void* pop(){
		size--;
		if(head == 0)
			return 0;
		
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		int test = size;
		for(int i = 0; i < test; i++){
			deletecb(pop());
		}
		
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}

	void (*deletecb)(void* pt);

	void setDeleteCallback(void (*del_func_ptr)(void * pt)){
		deletecb = del_func_ptr;
	}
};
#endif