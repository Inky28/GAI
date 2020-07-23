#pragma once
#include <iostream>

using namespace std;

template <typename T>
struct Node
{
	T data;
	Node<T>* parent = nullptr;
	Node<T>* left = nullptr;
	Node<T>* rigth = nullptr;
};

template <typename T>
class Tree
{
public:
	Tree();

	void push(const T& newData);
	void print();
	T* find(T& key);
	void multipleFind(string key);

private:
	Node<T>* head;

	static void Show(Node<T>* element);
	static void ShowByFilter(Node<T>* element, string filter);
};