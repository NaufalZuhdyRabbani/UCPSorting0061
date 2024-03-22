// UCP ALGORITMA 1.cpp


// SOAL TIPE A
//1.	Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen.?
//2.	Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen-elemen.?
//3.	Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan.
//4.	Konversi Algorithma berikut kedalam C++:
//		-Repeat steps 2 and 3 varying j from 0 to n – 2
//		-Find the minimum value in arr[j] to arr[n – 1]:
//		a.	Set min_index = j
//		b.Repeat step c varying i from j + 1 to n – 1
//		c.If arr[i] < arr[min_index]:
//		i.   min_index = i
//		-Swap arr[j] with arr[min_index]
//Ketentuan:
//a.Nama variable array diganti menjadi nickname
//b.Panjangnya variable array adalah sebanyak 2 nim belakang
//c.Program bisa input data dan menampilkan data setelah proses sortir. 

//JAWABAN
//1. Insertion Sort membandingkan serta menukar elemen elemen dengan cara membandingkan dan menukar elemen-elemen secara berurutan dalam sebuah array.(
//2. Selection Sort membandingkan serta menukar elemen elemen dengan memilih elemen terkecil dari array dan menukarnya dengan elemen pertama, lalu diulangi dengan cara yang sama di bilangan berikutnya.
//3. Dengan memantau setiap langkah operasi (seperti perbandingan atau pertukaran elemen), kita dapat secara langsung menghitung jumlah langkah yang dilakukan saat algoritma berjalan.
//4.
#include <iostream>
using namespace std;

int n;
int arr[12];

void input() { // procedur untuk input
    int d;
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : "; // output ke layar
        cin >> n;		// input dari pengguna
        if (n <= 12)	// jika n kurang dari atau sama dengan 20
            break;		// keluar dari loop
        else {			// jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) { // looping dengan 1 dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + i) << "; "; // output ke layar
        cin >> arr[i]; // output dari pengguna
    }
}



void InsertionSort()
{

    int i, temp, j;

    for (i = 1; i <= n - 1; i++)
    { // step 1
        temp = arr[i]; // step 2
        j = i - 1; // step 3
        while (j >= 0 && arr[j] > temp) // step 4 
        {
            arr[j + 1] = arr[j]; // step 4a
            j = j - 1; //step 4b
        }
        arr[j + 1] = temp; // step 5

    }
}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array
        if (j < n - 1) {
            cout << " -->";
        }
    }
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
}

int main()
{
    input();
    InsertionSort();
    display();
    system("pause");
    return 0;
}