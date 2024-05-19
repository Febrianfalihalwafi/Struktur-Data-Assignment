#include <iostream>
using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181
// Kelas : S1F-11-E

struct Node {
  string dat181;
  Node* next;
};


Node* head = NULL;
Node* tail = NULL; 


bool isEmpty() {
  return head == NULL;
}


void enqueueAntrian(string dat181) {
  Node* newNode = new Node; 
  newNode->dat181 = dat181; 
  newNode->next = NULL; 

  if (isEmpty()) { 
    head = newNode;
    tail = newNode;
  } else { 
    tail->next = newNode;
    tail = newNode;
  }
}


void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Hmm, this queue is empty! Nothing to dequeue! / Hmm, antrian ini kosong ! Tidak ada yang bisa di ambil " << endl;
    return;
  }

  Node* temp = head; 
  head = head->next; 
  delete temp; 

  if (head == NULL) { 
    tail = NULL;
  }
}


int countQueue() {
  int count = 0;
  Node* current = head;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}


void clearQueue() {
  while (!isEmpty()) {
    dequeueAntrian();
  }
}


void viewQueue() {
  if (isEmpty()) {
    cout << "The queue is empty!" << endl;
    return;
  }

  cout << "Data antrian teller:" << endl;
  Node* current = head;
  int i = 1;
  while (current != NULL) {
    cout << i << ". " << current->dat181 << endl;
    i++;
    current = current->next;
  }
}

int main() {
    cout << "\n TELLER QUEUE - Febrian Falih Alwafi \n" << endl;
    cout << "=== Enqueue/Add Tellers ====" << endl;
    enqueueAntrian("Bahrul");
    enqueueAntrian("Supri");
    viewQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;

    cout << "\n=== Dequeue/Remove Tellers ===" << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;

    cout << "\n=== Remove All Tellers ===" << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;

    return 0;
}