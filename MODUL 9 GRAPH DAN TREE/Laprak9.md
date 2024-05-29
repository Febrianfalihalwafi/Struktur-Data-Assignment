# <h1 align="center">Laporan Praktikum Modul 9 - GRAPH DAN TREE</h1>
<h3> Nama : Febrian Falih Alwafi</h3>
<h3> Nim : 2311102181 </h3>

## Dasar Teori

### Definisi Graph
Graf adalah kumpulan noktah (simpul) di dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis (sisi). Graph dapat digunakan untuk merepresentasikan objek-objek diskrit dan hubungan antara objek-objek tersebut. Representasi visual dari graph adalah dengan menyatakan objek sebagai noktah, bulatan atau titik (Vertex), sedangkan hubungan antara objek dinyatakan dengan garis (Edge). </br>
G = (V, E)</br>
Dimana :</br>
G = Graph</br>
V = Simpul atau Vertex, atau Node, atau Titik</br>
E = Busur atau Edge, atau arc</br>


### Istiah-istilah Graph
Istilah – Istilah Dalam Graph
Terdapat istilah – istilah yang berkaitan dengan graph, yaitu :
a.    Vertex
Vertex adalah himpunan node/titik pada sebuah graph.
b.    Edge
Edge adalah garis yang menghubungkan tiap node/vertex.
c.    Adjacent
Adjacent adalah dua buah titik dikatakan berdekatan juka dua buah titik tersebut terhubung dengan sebuah sisi.
d.    Weight
Sebuah graph dikatakan berbobot apabila terdapat sebuah fungsi bobot bernilai real pada himpunan Edge.
e.    Path
Path adalah walk dengan setiap vertex berbeda. Walk didefinisikan sebagai ururtan vertex dan edge. Diawali dengan origin vertex dan diakhiri dengan terminus vertex.
f.     Cycle
Cycle adalah siklus atau sirkuit yang berawal dan berakhir pada simpul yang sama.

### Jenis-Jenis Graph

1. Undirected Graph</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e397afde-0f48-4183-b570-e6dac1ae2a8d)

</br>
Pada undirected graph, simpul-simpulnya terhubung dengan edge yang sifatnya dua arah. Misalnya kita punya simpul 1 dan 2 yang saling terhubung, kita bisa menjelajah dari simpul 1 ke simpul 2, begitu juga sebaliknya.</br>

2. Directed Graph</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/5d0b975f-c6b4-4ff9-b7d5-11d0d9cc45f4)</br>
Kebalikan dari undirected graph, pada graph jenis ini simpul-simpulnya terhubung oleh edge yang hanya bisa melakukan jelajah satu arah pada simpul yang ditunjuk. Sebagai contoh jika ada simpul A yang terhubung ke simpul B, namun arah panahnya menuju simpul B, maka kita hanya bisa melakukan jelajah (traversing) dari simpul A ke simpul B, dan tidak berlaku sebaliknya.</br>

3. Weighted Graph</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/4b58b01e-adc4-40ba-8946-9f4490203013)
</br>
Weighted graph adalah jenis graph yang cabangnya diberi label bobot berupa bilangan numerik. Pemberian label bobot pada edge biasanya digunakan untuk memudahkan algoritma dalam menyelesaikan masalah.</br>

4. Unweighted Graph</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/89e08728-e7a0-4008-b36c-41e96b13f855)
</br>
Berbeda dengan jenis sebelumnya, unweighted graph tidak memiliki properti bobot pada koneksinya. Graph ini hanya mempertimbangkan apakah dua node saling terhubung atau tidak.


### Tree

### Definsi Tree
Kumpulan node yang saling terhubung satu sama lain dalam suatu kesatuan yang membentuk layakya struktur sebuah pohon. Struktur pohon adalah suatu cara merepresentasikan suatu struktur hirarki (one-to-many) secara grafis yang mirip sebuah pohon, walaupun pohon tersebut hanya tampak sebagai kumpulan node-node dari atas ke bawah. Suatu struktur data yang tidak linier yang menggambarkan hubungan yang hirarkis (one-to-many) dan tidak linier antara elemen-elmennya.

### Istilah Tree
- Predecessor, node yang berada diatas node tertentu
- Successor, node yang berada dibawah node tertentu
- Ancestor, seluruh node yang terletak sebelum node tertentu dan terleteak pada jalur yang sama
- Descendant, seluruh node yang terletak setelah node tertentu dan terletak pada jalur yang sama
- Parent, predecessor satu level di atas suatu node
- Child, successor satu level di bawah suatu node
- Sibling, node-node yang memiliki parent yang sama
- Subtree, suatu node beserta descendantnya
- Size, banyaknya node dalam suatu tree
- Height, banyaknya tingkatan dalam suatu tree
- Root, node khusus yang tidak memiliki predecessor
- Leaf, node-node dalam tree yang tidak memiliki successor
- Degree, banyaknya child daalm suatu node

### Jenis-Jenis Tree
1. Binary Tree</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/848222c9-c2f6-4a0b-969c-8ae381d9ef52)
</br>
Tree dengan syarat bahwa tiap node hanya boleh memiliki maksimal dua sub pohon dan kedua subpohon harus terpisah.
Kelebihan struktur Binary Tree:
- Mudah dalam penyusunan algoritma sorting
- Searching data relatif cepat
- Fleksibel dalam penambahan dan penghapusan data

2. Full Binary Tree</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/43ffd9de-dd0d-4105-aae5-8ef30de62c9a)
</br>
Semua node, kecuali leaf pasti memiliki 2 anak dan tiap subpohon memiliki panjang path yang sama.

3. Complete Binary Tree</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/07f79a49-ce18-4340-a9ea-eddc53cf3102)
</br>
Tree yang mirip dengan full binary tree, tapi tiap subtree boleh memiliki panjang path yang berbeda dan tiap node (kecuali leaf) memiliki 2 anak.

4. Skewed Binary Tree</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e41efb71-0668-4fa0-9124-da22b5dc002c)
</br>
Binary tree yang semua nodenya (kecuali leaf) hanya memiliki satu anak.

### GUIDED 

## GUIDED 1
```C++
#include <iostream>
#include <iomanip>

using namespace std;
string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};
int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}
};

void tampilGraph() {
    for (int baris=0; baris<7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom=0; kolom<7; kolom++) {
            if (busur[baris][kolom] != 0) {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom] << ") ";
            }
        } cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```
## OUTPUT 
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e5b329e2-879b-4726-93bc-db979d302018)</br>


## PENJELASAN 
Kode di atas adalah implementasi dari representasi graf menggunakan matriks adjasensi dalam bahasa C++. Program ini menampilkan sebuah graf yang terdiri dari simpul-simpul (nodes) yang dihubungkan oleh busur (edges), serta bobot yang terkait dengan setiap busur. Pada kode tersebut, terdapat array simpul yang berisi nama simpul-simpul dalam graf, dan array busur yang merupakan matriks adjasensi yang merepresentasikan keterhubungan antar simpul serta bobot dari setiap busur. Indeks baris dan kolom dalam matriks busur mengacu pada simpul-simpul dalam array simpul, dan nilai pada setiap sel matriks menunjukkan keberadaan busur antara dua simpul serta bobotnya.

## GUIDED 2
```c++
#include <iostream> 
using namespace std; 
 
// PROGRAM BINARY TREE 
// Deklarasi Pohon 
struct Pohon { 
    char data; 
    Pohon *left, *right, *parent; //pointer 
}; 
 
//pointer global 
Pohon *root; 
 
// Inisialisasi 
void init() { 
    root = NULL; 
} 
 
bool isEmpty() { 
    return root == NULL; 
} 
 
Pohon *newPohon(char data) { 
    Pohon *node = new Pohon(); 
    node->data = data; 
    node->left = NULL; 

    node->right = NULL; 
    node->parent = NULL; 
    return node; 
} 
 
void buatNode(char data) { 
    if (isEmpty()) { 
        root = newPohon(data); 
        cout << "\nNode " << data << " berhasil dibuat menjadi root." << 
endl; 
    } else { 
        cout << "\nPohon sudah dibuat" << endl; 
    } 
} 
 
Pohon *insertLeft(char data, Pohon *node) { 
    if (isEmpty()) { 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
        return NULL; 
    } else { 
        if (node->left != NULL) { 
            cout << "\nNode " << node->data << " sudah ada child kiri!" 
<< endl; 
            return NULL; 
        } else { 
            Pohon *baru = newPohon(data); 
            baru->parent = node; 
            node->left = baru; 
            cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl; 
            return baru; 
        } 
    } 
} 
 
Pohon *insertRight(char data, Pohon *node) { 
    if (isEmpty()) { 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
        return NULL; 
    } else { 
        if (node->right != NULL) { 
            cout << "\nNode " << node->data << " sudah ada child kanan!" 
<< endl; 
            return NULL; 
        } else { 
            Pohon *baru = newPohon(data); 
            baru->parent = node; 
            node->right = baru; 
            cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl; 
 
            return baru; 
        } 
    } 
} 
 
void update(char data, Pohon *node) { 
    if (isEmpty()) { 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    } else { 
        if (!node) 
            cout << "\nNode yang ingin diganti tidak ada!!" << endl; 
        else { 
            char temp = node->data; 
            node->data = data; 
            cout << "\nNode " << temp << " berhasil diubah menjadi " << 
data << endl; 
        } 
    } 
} 
 
void retrieve(Pohon *node) { 
    if (isEmpty()) { 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    } else { 
        if (!node) 
            cout << "\nNode yang ditunjuk tidak ada!" << endl; 
        else { 
            cout << "\nData node : " << node->data << endl; 
        } 
    } 
} 
 
void find(Pohon *node) { 
    if (isEmpty()) { 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    } else { 
        if (!node) 
            cout << "\nNode yang ditunjuk tidak ada!" << endl; 
        else { 
            cout << "\nData Node : " << node->data << endl; 
            cout << "Root : " << root->data << endl; 
 
            if (!node->parent) 
                cout << "Parent : (tidak punya parent)" << endl; 
            else 
                cout << "Parent : " << node->parent->data << endl; 
 
            if (node->parent != NULL && node->parent->left != node && 
node->parent->right == node) 
                cout << "Sibling : " << node->parent->left->data << endl; 
 
            else if (node->parent != NULL && node->parent->right != node 
&& node->parent->left == node) 
                cout << "Sibling : " << node->parent->right->data << 
endl; 
            else 
                cout << "Sibling : (tidak punya sibling)" << endl; 
 
            if (!node->left) 
                cout << "Child Kiri : (tidak punya Child kiri)" << endl; 
            else 
                cout << "Child Kiri : " << node->left->data << endl; 
 
            if (!node->right) 
                cout << "Child Kanan : (tidak punya Child kanan)" << 
endl; 
            else 
                cout << "Child Kanan : " << node->right->data << endl; 
        } 
    } 
} 
 
// Penelusuran (Traversal) 
// preOrder 
void preOrder(Pohon *node) { 
    if (isEmpty()) 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    else { 
        if (node != NULL) { 
            cout << " " << node->data << ", "; 
            preOrder(node->left); 
            preOrder(node->right); 
        } 
    } 
} 
 
// inOrder 
void inOrder(Pohon *node) { 
    if (isEmpty()) 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    else { 
        if (node != NULL) { 
            inOrder(node->left); 
            cout << " " << node->data << ", "; 
            inOrder(node->right); 
        } 
    } 
} 
 
// postOrder 
void postOrder(Pohon *node) { 
 
 
    if (isEmpty()) 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    else { 
        if (node != NULL) { 
            postOrder(node->left); 
            postOrder(node->right); 
            cout << " " << node->data << ", "; 
        } 
    } 
} 
 
// Hapus Node Tree 
void deleteTree(Pohon *node) { 
    if (isEmpty()) 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    else { 
        if (node != NULL) { 
            if (node != root) { 
                if (node->parent->left == node) 
                    node->parent->left = NULL; 
                else if (node->parent->right == node) 
                    node->parent->right = NULL; 
            } 
            deleteTree(node->left); 
            deleteTree(node->right); 
 
            if (node == root) { 
                delete root; 
                root = NULL; 
            } else { 
                delete node; 
            } 
        } 
    } 
} 
 
// Hapus SubTree 
void deleteSub(Pohon *node) { 
    if (isEmpty()) 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
    else { 
        deleteTree(node->left); 
        deleteTree(node->right); 
        cout << "\nNode subtree " << node->data << " berhasil dihapus." 
<< endl; 
    } 
} 
 
// Hapus Tree 
void clear() {  
 
 
    if (isEmpty()) 
        cout << "\nBuat tree terlebih dahulu!!" << endl; 
    else { 
        deleteTree(root); 
        cout << "\nPohon berhasil dihapus." << endl; 
    } 
} 
 
// Cek Size Tree 
int size(Pohon *node) { 
    if (isEmpty()) { 
        cout << "\nBuat tree terlebih dahulu!!" << endl; 
        return 0; 
    } else { 
        if (!node) { 
            return 0; 
        } else { 
            return 1 + size(node->left) + size(node->right); 
        } 
    } 
} 
 
// Cek Height Level Tree 
int height(Pohon *node) { 
    if (isEmpty()) { 
        cout << "\nBuat tree terlebih dahulu!" << endl; 
        return 0; 
    } else { 
        if (!node) { 
            return 0; 
        } else { 
            int heightKiri = height(node->left); 
            int heightKanan = height(node->right); 
 
            if (heightKiri >= heightKanan) { 
                return heightKiri + 1; 
            } else { 
                return heightKanan + 1; 
            } 
        } 
    } 
} 
 
// Karakteristik Tree 
void characteristic() { 
    int s = size(root); 
    int h = height(root); 
    cout << "\nSize Tree : " << s << endl; 
    cout << "Height Tree : " << h << endl; 
    if (h != 0) 
 
 
        cout << "Average Node of Tree : " << s / h << endl; 
    else 
        cout << "Average Node of Tree : 0" << endl; 
} 
 
int main() { 
    init(); 
    buatNode('A'); 
 
    Pohon *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, 
*nodeJ; 
 
    nodeB = insertLeft('B', root); 
    nodeC = insertRight('C', root); 
    nodeD = insertLeft('D', nodeB); 
    nodeE = insertRight('E', nodeB); 
    nodeF = insertLeft('F', nodeC); 
    nodeG = insertLeft('G', nodeE); 
    nodeH = insertRight('H', nodeE); 
    nodeI = insertLeft('I', nodeG); 
    nodeJ = insertRight('J', nodeG); 
 
    update('Z', nodeC); 
    update('C', nodeC); 
    retrieve(nodeC); 
    find(nodeC); 
    cout << "\nPreOrder :" << endl; 
    preOrder(root); 
    cout << "\n" << endl; 
    cout << "InOrder :" << endl; 
    inOrder(root); 
    cout << "\n" << endl; 
    cout << "PostOrder :" << endl; 
    postOrder(root); 
    cout << "\n" << endl; 
    characteristic(); 
    deleteSub(nodeE); 
    cout << "\nPreOrder :" << endl; 
    preOrder(root); 
    cout << "\n" << endl; 
    characteristic(); 
}
```
## OUTPUT
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/cf2693f3-f5ad-46a8-8685-4043304fdc99)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/2d372730-5c0d-4ffd-b70e-f08f90138647)</br>

## PENJELASAN
Kode di atas merupakan implementasi dari sebuah program yang mengelola binary tree dalam bahasa C++. Program ini memungkinkan pengguna untuk membuat, memodifikasi, dan menghapus node dalam pohon biner, serta melakukan operasi penelusuran (traversal) dan menampilkan karakteristik dari pohon biner tersebut. Pertama, program ini mendefinisikan struktur data Pohon yang menyimpan data dan pointer ke simpul-simpul kiri, kanan, dan parent dalam pohon. Kemudian, terdapat fungsi-fungsi untuk inisialisasi pohon, membuat node baru, menambahkan simpul kiri dan kanan, memperbarui data node, dan menampilkan informasi tentang node tertentu.

### UNGUDED 

1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.</br>
Output Program : 
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e8fb76ac-6246-45f3-af00-d0eb28dfeb10)</br>

## UNGUIDED 1 
```c++
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Nama : Febrian Falih Alwafi
// Kelas : S1F-11-E
// Nim : 2311102181

int main() {
    int jumlahSimpul2311102181;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul2311102181;

    string simpul[jumlahSimpul2311102181];
    int busur[jumlahSimpul2311102181][jumlahSimpul2311102181];

    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        for (int j = 0; j < jumlahSimpul2311102181; j++) {
            cout << "Silakan masukkan bobot antara simpul " << simpul[i] << " dan " << simpul[j] << ": ";
            cin >> busur[i][j];
        }
    }

    cout << "\nGraf yang dihasilkan:\n";
    cout << setw(15) << " ";
    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        cout << setw(15) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        cout << setw(15) << simpul[i];
        for (int j = 0; j < jumlahSimpul2311102181; j++) {
            cout << setw(15) << busur[i][j];
        }
        cout << endl;
    }

    return 0;
}
```
## OUTPUT 
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/4dbba55a-2dfb-493e-a582-dcabea95807c)</br>


## PENJELASAN

Kode di atas adalah program C++ yang digunakan untuk membangun graf berbobot berdasarkan input dari pengguna. Program ini meminta pengguna untuk memasukkan jumlah simpul (node) dalam graf, kemudian meminta nama untuk setiap simpul dan bobot untuk setiap busur (edge) antara simpul-simpul tersebut. Setelah menerima input, program akan menampilkan graf yang terbentuk dalam bentuk matriks berbobot. Setiap baris dan kolom dalam matriks tersebut mewakili simpul-simpul yang telah dimasukkan, sedangkan elemen matriks menunjukkan bobot dari busur yang menghubungkan simpul-simpul tersebut.
## UNGUIDED 2
```c++
#include <iostream>
#include <iomanip>

using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181
// Kelas : S1F-11-E

struct Pohon
{
    char data;
    Pohon *kiri, *kanan, *parent;
};

Pohon *root, *baru;

void init() 
{
    root = NULL;
}

bool isEmpty()
{
    return root == NULL;
}

void buatNode(char data) 
{
    if (isEmpty())
    {
        root = new Pohon();
        root->data = data;
        root->kiri = NULL;
        root->kanan = NULL;
        root->parent = NULL;
        cout << "\nNode " << data << " berhasil dibuat sebagai root!" << endl;
    }
    else
    {
        cout << "\nTree sudah ada!" << endl;
    }
}

Pohon *findNode(Pohon *node, char data) 
{
    if (node == NULL) return NULL;
    if (node->data == data) return node;

    Pohon *foundNode = findNode(node->kiri, data);
    if (foundNode == NULL)
        foundNode = findNode(node->kanan, data);

    return foundNode;
}

Pohon *insertkiri(char data, Pohon *node) 
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->kiri != NULL)
        {
            cout << "\nNode " << node->data << " sudah ada child kiri!" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = new Pohon();
            baru->data = data;
            baru->kiri = NULL;
            baru->kanan = NULL;
            baru->parent = node;
            node->kiri = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << baru->parent->data << endl;
            return baru;
        }
    }
}

Pohon *insertkanan(char data, Pohon *node) 
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->kanan != NULL)
        {
            cout << "\nNode " << node->data << " sudah ada child kanan!" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = new Pohon();
            baru->data = data;
            baru->kiri = NULL;
            baru->kanan = NULL;
            baru->parent = node;
            node->kanan = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << baru->parent->data << endl;
            return baru;
        }
    }
}

void update(char data, Pohon *node) 
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\nNode yang ingin diganti tidak ada!!" << endl;
        }
        else
        {
            char temp = node->data;
            node->data = data;
            cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
        }
    }
}

void find(Pohon *node) 
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\nData Node: " << node->data << endl;
            cout << "Root: " << root->data << endl;
            if (!node->parent)
                cout << "Parent: (tidak punya parent)" << endl;
            else
                cout << "Parent: " << node->parent->data << endl;
            if (node->parent != NULL && node->parent->kiri != node && node->parent->kanan == node)
                cout << "Sibling: " << node->parent->kiri->data << endl;
            else if (node->parent != NULL && node->parent->kanan != node && node->parent->kiri == node)
                cout << "Sibling: " << node->parent->kanan->data << endl;
            else
                cout << "Sibling: (tidak punya sibling)" << endl;
            if (!node->kiri)
                cout << "Child Kiri: (tidak punya child kiri)" << endl;
            else
                cout << "Child Kiri: " << node->kiri->data << endl;
            if (!node->kanan)
                cout << "Child Kanan: (tidak punya child kanan)" << endl;
            else
                cout << "Child Kanan: " << node->kanan->data << endl;
        }
    }
}

void printChild(Pohon *node) 
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else if (!node)
    {
        cout << "\nNode yang ditunjuk tidak ada!" << endl;
    }
    else
    {
        if (node->kiri)
        {
            cout << "Child Kiri: " << node->kiri->data << endl;
        }
        else
        {
            cout << "Child Kiri: (tidak ada)" << endl;
        }

        if (node->kanan)
        {
            cout << "Child Kanan: " << node->kanan->data << endl;
        }
        else
        {
            cout << "Child Kanan: (tidak ada)" << endl;
        }
    }
}

void printDescendants(Pohon *node) 
{
    void preOrder(Pohon * node);

    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else if (!node)
    {
        cout << "\nNode yang ditunjuk tidak ada!" << endl;
    }
    else
    {
        cout << "Descendants dari node " << node->data << " : ";
        if (node->kiri) preOrder(node->kiri);
        if (node->kanan) preOrder(node->kanan);
        cout << endl;
    }
}


int size(Pohon *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            return 1 + size(node->kiri) + size(node->kanan);
        }
    }
}


int height(Pohon *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            int heightKiri = height(node->kiri);
            int heightKanan = height(node->kanan);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}


void preOrder(Pohon *node)
{
    if (node != NULL)
    {
        cout << " " << node->data << ", ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}



void inOrder(Pohon *node = root)
{
    if (node != NULL)
    {
        inOrder(node->kiri);
        cout << " " << node->data << ", ";
        inOrder(node->kanan);
    }
}


void postOrder(Pohon *node = root)
{
    if (node != NULL)
    {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << " " << node->data << ", ";
    }
    cout << endl;
}


void characteristic()
{
    cout << "\n Size Tree : " << size() << endl;
    cout << " Height Tree : " << height() << endl;
    cout << " Average Node of Tree : " << size() / height() << endl;
}

int main()
{
    init();
    char pilihan181, Data181, arah181, ParentData181;
    Pohon *node;

    cout << "\n===== PROGRAM DATA TREE  =====\n";

    do
    {
        cout << "\nMenu: ";
        cout << "\n1. Buat Node Root";
        cout << "\n2. Tambah Child (kiri/kanan)";
        cout << "\n3. Update Node";
        cout << "\n4. Karakteristik";
        cout << "\n5. Temukan Node";
        cout << "\n6. PreOrder Traversal";
        cout << "\n7. InOrder Traversal";
        cout << "\n8. PostOrder Traversal";
        cout << "\n9. Cetak Child";
        cout << "\n0. Cetak Descendants";
        cout << "\nPilih program : "; cin >> pilihan181;

        switch (pilihan181)
        {
        case '1':
            cout << "\n  Input data untuk rootnya: ";
            cin >> Data181;
            buatNode(Data181);
            break;

        case '2': 
            cout << "\nMasukkan data untuk child: ";
            cin >> Data181;
            cout << "\nChild yang diinput berada di posisi (kiri L / kanan R:) ";
            cin >> arah181;
            cout << "\nMasukkan data dari parent node: ";
            cin >> ParentData181;
            node = findNode(root, ParentData181);
            if (node == NULL)
            {
                cout << "\nNode dengan data " << ParentData181 << " tidak ditemukan!" << endl;
            }
            else
            {
                if (arah181 == 'L' || arah181 == 'l')
                {
                    insertkiri(Data181, node);
                }
                else if (arah181 == 'R' || arah181 == 'r')
                {
                    insertkanan(Data181, node);
                }
                else
                {
                    cout << "\nHah! Pilihan tidak valid!" << endl;
                }
            }
            break;

        case '3': 
            cout << "\nMasukkan data baru untuk diupdate: ";
            cin >> Data181;
            cout << "\nMasukkan data dari node yang ingin diupdate: ";
            cin >> ParentData181;
            node = findNode(root, ParentData181);
            if (node == NULL)
            {
                cout << "\nNode dengan data " << ParentData181 << " tidak ditemukan!" << endl;
            }
            else
            {
                update(Data181, node);
            }
            break;

        case '4': 
            cout << "\nKarakteristik dari tree ini:";
            characteristic();
            break;

        case '5': 
            cout << "\nMasukkan data dari node yang ingin dicari: ";
            cin >> ParentData181;
            node = findNode(root, ParentData181);
            if (node == NULL)
            {
                cout << "\nNode dengan data " << ParentData181 << " tidak ditemukan!" << endl;
            }
            else
            {
                find(node);
            }
            break;

        case '6': 
            cout << "\nPreOrder Traversal: ";
            preOrder(root);
            cout << endl;
            break;

        case '7': 
            cout << "\nInOrder Traversal: ";
            inOrder(root);
            cout << endl;
            break;

        case '8': 
            cout << "\nPostOrder Traversal: ";
            postOrder(root);
            cout << endl;
            break;

        case '9': 
            cout << "\nMasukkan data dari node yang ingin melihat child: ";
            cin >> ParentData181;
            node = findNode(root, ParentData181);
            if (node == NULL)
            {
                cout << "\nNode dengan data " << ParentData181 << " tidak ditemukan!" << endl;
            }
            else
            {
                printChild(node);
            }
            break;

        case '0': 
            cout << "\nMasukkan data dari node yang ingin melihat descendants: ";
            cin >> ParentData181;
            node = findNode(root, ParentData181);
            if (node == NULL)
            {
                cout << "\nNode dengan data " << ParentData181 << " tidak ditemukan!" << endl;
            }
            else
            {
                printDescendants(node);
            }
            break;

        default:
            cout << "\nData tidak di temukan" << endl;
            break;
        }
    } while (pilihan181 != '!');
    cout << "\nSelesai Terimakasih" << endl;

    return 0;
}
```
## OUTPUT 
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/7ebc8bc8-453c-477a-822b-d374db9a8e84)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/5ca15a7a-c8a1-4d24-a4e9-f774e1eb5340)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e7cfc65b-2d62-4681-9409-2c11393feccf)

## PENJELASAN
Kode di atas adalah implementasi dari struktur data pohon biner dalam bahasa C++. Program ini memungkinkan pengguna untuk membuat, mengubah, dan menelusuri pohon biner yang dibuat. Pohon biner dibentuk menggunakan struktur data yang terdiri dari node-node, di mana setiap node memiliki data, pointer ke anak kiri dan kanan, serta pointer ke parent. Fungsi-fungsi seperti buatNode(), insertkiri(), dan insertkanan() digunakan untuk membuat node baru dan menambahkan anak kiri atau kanan dari suatu node.

## KESIMPULAN 
Jadi kesimpulan dari teori mengenai graph dan tree tersebut adalah Graph adalah kumpulan dari node (simpul) yang terhubung oleh busur (edge). Graph dapat digunakan untuk merepresentasikan berbagai jenis hubungan antara objek, seperti jaringan komputer, relasi antar data, atau jalur perjalanan. Graph dapat bersifat terarah (directed) atau tidak terarah (undirected), dapat memiliki bobot pada setiap busur (weighted), dan dapat memiliki siklus (cycle) atau tidak. Graph juga bisa terbagi menjadi beberapa jenis, seperti graph berarah, graph tak berarah, graph berbobot, dan lain-lain, sedangkan Tree adalah tipe khusus dari graph yang memiliki struktur hirarkis. Tree terdiri dari node yang terhubung secara hierarkis, dimulai dari satu node khusus yang disebut sebagai root, dan setiap node lainnya memiliki tepat satu node parent kecuali root. graph dan tree adalah dua struktur data yang penting dan memiliki peran yang berbeda dalam pemrograman dan ilmu komputer. Graph digunakan untuk merepresentasikan hubungan yang lebih umum antara objek, sedangkan tree digunakan untuk representasi struktur hierarkis seperti dalam penyimpanan data terstruktur atau representasi hubungan parent-anak.

## REFERENSI
[1] Lubis, Hendarman, and Dwi Budi Srisulistiowati. "Algoritma Prim Dan Kruskal Dalam Mencari Minimum Spanning Tree Pada Bahasa Pemrograman C." JSI (Jurnal sistem Informasi) Universitas Suryadarma 8.2 (2021): 1-14.
[2] Nugraha, D. W. (2011). Aplikasi algoritma prim untuk menentukan minimum spanning tree suatu graf berbobot dengan menggunakan pemrograman berorientasi objek. Foristek, 1(2).
[3] Kurniawan, Didik, Wamiliana Wamiliana, and Cut Shavitri Nursanti Fauzi. "perbandingan kompleksitas algoritma prim, algoritma kruskal, dan algoritma sollin untuk menyelesaikan masalah minimum spanning tree." Jurnal Komputasi 2.1 (2014).
