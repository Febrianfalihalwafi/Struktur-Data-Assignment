#include <iostream>
using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181
// Kelas : S1F-11-E


struct Node {
  string NamaMahasiswa181;
  long long int NIMMahasiswa181;
  Node* next;
};


Node* head = NULL; 
Node* tail = NULL; 


bool isEmpty() {
  return head == NULL;
}


void enqueueAntrian(string nama, long long int NIM) {
  Node* newNode = new Node; // Buat node baru
  newNode->NamaMahasiswa181 = nama;
  newNode->NIMMahasiswa181 = NIM;
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
    cout << "Ya The queue is empty! There's nothing to dequeue! / Ya antriannya kosong ! Tidak ada yang bisa dihapus karena antriannya kosong " << endl;
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
    cout << "Hey, the queue is empty / Hey, antrian ini kosong" << endl;
    return;
  }

  cout << "Mahasiswa Queue Data:" << endl;
  Node* current = head;
  int i = 1;
  while (current != NULL) {
    cout << i << ". " << current->NamaMahasiswa181 << " (" << current->NIMMahasiswa181 << ")" << endl;
    i++;
    current = current->next;
  }
}

int main() {
  cout << "\n Febrian Falih - Queue Mahasiswa " << endl;

  cout << "\n==== Enqueue/Add Queue Mahasiswa ====" << endl;
  enqueueAntrian("Febrian", 2311102181);
  enqueueAntrian("Fahri", 2311102180);
  enqueueAntrian("Deden", 7312011179);
  enqueueAntrian("Bagas", 4211102178);
  viewQueue();
  cout << "Jumlah antrian: " << countQueue() << endl;

  cout << "\n==== Dequeue/Remove Queue Mahasiswa ====" << endl;
  dequeueAntrian();
  viewQueue();
  cout << "Jumlah antrian: " << countQueue() << endl;

  cout << "\n==== Clear All Queues / kosongkan semua antrian ====" << endl;
  clearQueue();
  viewQueue();
  cout << "Jumlah antrian: " << countQueue() << endl;

  return 0;
}