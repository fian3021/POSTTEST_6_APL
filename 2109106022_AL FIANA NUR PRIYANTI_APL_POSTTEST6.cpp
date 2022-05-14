/*
Nama 	: Al Fiana Nur Priyanti
NIM 	: 2109106022
Kelas 	: A'21
*/

#include <iostream> 
#include <iomanip>  //header untuk mengatur tampilan

using namespace std;

//prosedur untuk tampilan awal
void salam_pembuka(){
	//membuat garis pembatas
	cout << " ======================================================================" << endl;
	//fungsi setw() untuk mengatur lebar tampilan
	cout << " ||" << setw(25) << " " << "SELAMAT DATANG DI " 
	 	 << setw(25) << "||" << endl;
	cout << " ||" << setw(66) << " " << "||" << endl;
	cout << " ||" << setw(21) << " " << "PROGRAM PENDATAAN BALITA" 
		 << setw(21) << " " << "||" << endl;
	cout << " ||" << setw(66) << " " << "||" << endl;
	cout << " ||" << setw(24) << " " << "POSYANDU SEJAHTERA" 
		 << setw(24) << " " << "||" << endl;
	//membuat garis pembatas
	cout << " ======================================================================" << endl;
}

//prosedur untuk tampilan akhir
void salam_penutup(){
	//membuat garis pembatas
	cout << " ======================================================================" << endl;
	//fungsi setw() untuk mengatur lebar tampilan
	cout << " ||" << setw(27) << " " << " TERIMA KASIH " 
	 	 << setw(27) << "||" << endl;
	cout << " ||" << setw(66) << " " << "||" << endl;
	cout << " ||" << setw(24) << " " << "TELAH MENGGUNAKAN "
		 << setw(24) << " " << "||" << endl;
	cout << " ||" << setw(66) << " " << "||" << endl;
	cout << " ||" << setw(21) << " " << "PROGRAM PENDATAAN BALITA" 
		 << setw(21) << " " << "||" << endl;
	cout << " ||" << setw(66) << " " << "||" << endl;
	cout << " ||" << setw(24) << " " << "POSYANDU SEJAHTERA" 
		 << setw(24) << " " << "||" << endl;
	//membuat garis pembatas
	cout << " ======================================================================" << endl;	
}

//prosedur untuk menu pilihan
void menu(){
	cout << endl; 
	//fungsi setw() untuk mengatur lebar tampilan
	cout << setw(15) << " " << "----------------------------------------" << endl;
	cout << setw(15) << " " << "||" << setw(12) << " " << "MENU PILIHAN" 
		 << setw(12) << " " << "||" << endl;
	cout << setw(15) << " " << "----------------------------------------" << endl;
	//terdapat 5 pilihan menu
	cout << setw(15) << " " << "[1. Tambah Data" << setw(21) << " " << "ADD]" << endl;
	cout << setw(15) << " " << "[2. Tampilkan Data" << setw(17) << " " << "VIEW]" << endl;
	cout << setw(15) << " " << "[3. Ubah Data" << setw(20) << " " << "CHANGE]" << endl;
	cout << setw(15) << " " << "[4. Hapus Data" << setw(20) << " " << "CLEAR]" << endl;
	cout << setw(15) << " " << "[5. Sorting Data" << setw(19) << " " << "SORT]" << endl;
	cout << setw(15) << " " << "[6. Searching Data" << setw(17) << " " << "SORT]" << endl;
	cout << setw(15) << " " << "[0. Keluar Program" << setw(17) << " " << "EXIT]" << endl;
	cout << setw(15) << " " << "----------------------------------------" << endl;
	//membuat garis pembatas
	cout << endl << " ======================================================================" << endl;
}

//membuat struct dengan nama posyandu
struct posyandu{
	//deklarasi elemen struct
	string nama;
	int usia;
	int tinggi;
	int berat;
};

//pendeklarasian array of struct bertipe struct data_balita[100]
posyandu data_balita[100];
//deklarasi variabel global
int banyak_data, indeks, i, pilih_atribut, pilih_atribut_sort; 

//prosedur untuk menambah data 
void add_data(){
	//tagline menu tambah data
	cout << " ======================================================================" << endl;
	cout << " ||" << setw(20) << " " << "M E N U  T A M B A H  D A T A" 
		 << setw(19) << "||" << endl;
	cout << " ======================================================================" << endl;
	//inputan banyak data yang diinginkan
	cout << "  Banyak data balita yang ingin ditambahkan : "; cin >> banyak_data;
	//garis pembatas
	cout << " ----------------------------------------------------------------------" << endl;
	//untuk mengabaikan inputan spasi
	cin.ignore();
	//perulangan untuk menambahkan data kedalam array
	for(int i=0; i<banyak_data; i++){
		cout << "\n  Data Balita Ke - " << i+1 << endl;
		cout << " ____________________" << endl;
		cout << "  Masukkan Nama  		: " ; cin >> data_balita[indeks].nama;
		cout << "  Masukkan Usia  		: " ; cin >> data_balita[indeks].usia;
		cout << "  Masukkan Tinggi Badan  	: " ; cin >> data_balita[indeks].tinggi;
		cout << "  Masukkan Berat Badan  	: " ; cin >> data_balita[indeks].berat;
		
		indeks++; //increment variabel indeks
	}
 	
 	//pemberitahuan bahwa data berhasil ditambahkan
	cout << "\n -------------------- Data Berhasil Ditambahkan! ----------------------\n" << endl;
}

//prosedur untuk menampilkan data 
void view_data(){
	//tagline menu tampil data
	cout << " ======================================================================" << endl;
	cout << " ||" << setw(18) << " " << "M E N U  T A M P I L A N  D A T A" 
		 << setw(17) << "||" << endl;
	cout << " ======================================================================\n" << endl;
	//membuat tabel untuk menampilkan data
	cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
	cout << setw(4) << " " << " || NO |	NAMA	|  USIA  | TINGGI BADAN | BERAT BADAN ||" << endl;
	cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
	//perulangan untuk menampilkan data dengan memanggil nilai dari variabel dalam struct
	for(int i=0; i<indeks; i++){
		cout << setw(7) << "||" << setw(2) << i+1 ;
		cout << setw(3) << "|" << setw(9) << data_balita[i].nama;
		cout << setw(4) << "|" << setw(5) << data_balita[i].usia;
		cout << setw(4) << "|" << setw(7) << data_balita[i].tinggi;
		cout << setw(8) << "|" << setw(9) << data_balita[i].berat << setw(6) << "||" <<endl;
	}
	//garis bawah tabel
	cout << setw(4) << " " << " -----------------------------------------------------------\n" << endl;
}

//prosedur untuk mengubah data 
void change_data(){
	//deklarasi variabel lokal
	int pilih_ubah; 
	//tagline menu ubah data
	cout << " ======================================================================" << endl;
	cout << " ||" << setw(22) << " " << "M E N U  U B A H  D A T A" 
		 << setw(21) << "||" << endl;
	cout << " ======================================================================\n" << endl;
	//inputan data ke berapa yang akan diubah
	cout << "  Masukkan data ke berapa yang ingin diubah : "; cin >> pilih_ubah;
	cout << " ----------------------------------------------------------------------" << endl;
	cout << endl;
	
	//deklarasi variabel i untuk mengurangi indeks
	int i = pilih_ubah-1;
	
	cout << "\n  Ubah data ke -" << pilih_ubah << endl;
	cout << " ____________________" << endl;
	//inputan baru untuk data yg diubah
	cout << "  Masukkan Nama Baru		: " ; cin >> data_balita[i].nama;
	cout << "  Masukkan Usia Baru		: " ; cin >> data_balita[i].usia;
	cout << "  Masukkan Tinggi Badan Baru	: " ; cin >> data_balita[i].tinggi;
	cout << "  Masukkan Berat Badan Baru	: " ; cin >> data_balita[i].berat;
	
	//pemberitahuan bahwa data berhasil diubah
	cout << "\n ----------------------- Data Berhasil Diubah! ------------------------\n" << endl;
}

//prosedur untuk menghapus data
void clear_data(){
	int pilih_hapus;
	//tagline menu hapus data
	cout << " ======================================================================" << endl;
	cout << " ||" << setw(21) << " " << "M E N U  H A P U S  D A T A" 
		 << setw(20) << "||" << endl;
	cout << " ======================================================================\n" << endl;
	//inputan data ke berapa yang ingin di hapus
	cout << "  Masukkan data ke berapa yang ingin dihapus : "; cin >> pilih_hapus;
	cout << endl;

	indeks--; //decrement variabel indeks
	//perulangan untuk menghapus data
	for(int i=pilih_hapus-1; i<indeks; i++){
		data_balita[i] = data_balita[i+1];
	}
 	
 	//pemberitahuan bahwa data berhasil diubah
	cout << "\n ---------------------- Data Berhasil Dihapus! ------------------------\n" << endl;
}

//Fungsi pencarian dengan metode Linear Search 
int LinearSearch(int atribut, int banyakData){
	//deklarasi variabel
	int find;
	if (atribut == 1){
		//deklarasi variabel
		string key;
        //inputan nama balita yang ingin dicari 
        cout << setw(15) << " " << " Masukkan nama balita yang ingin dicari : ";
        fflush (stdin);
        getline (cin, key);
        cout << setw(10) << " " << "--------------------------------------------------" << endl;
        //for loop untuk mencocokkan nama pada data dengan nama yang dicari
        for (i = 0; i < banyakData; i++){
            if (data_balita[i].nama == key){
				//jika data cocok maka find bernilai true atau 1, 
				//jika tidak find bernilai false atau 0 dan perulangan berlanjut
                find = true; 
                break;
            }
        }
        //percabangan jika data nama yang dicari ditemukan
        if (find == 1){
            //menampilkan hasil pencarian
            cout << "\n ----------------------- Data " << key << " Ditemukan! -------------------------\n" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(4) << " " << " || NO |	NAMA	|  USIA  | TINGGI BADAN | BERAT BADAN ||" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(7) << "||" << setw(2) << i + 1 ;
            cout << setw(3) << "|" << setw(9) << data_balita[i].nama;
            cout << setw(4) << "|" << setw(5) << data_balita[i].usia;
            cout << setw(4) << "|" << setw(7) << data_balita[i].tinggi;
            cout << setw(8) << "|" << setw(9) << data_balita[i].berat << setw(6) << "||" <<endl;
            cout << setw(4) << " " << " -----------------------------------------------------------\n" << endl;
        }
        else {
            //tampilan jika data tidak ditemukan
            cout << "\n ----------------------- Data Tidak Ditemukan! -------------------------\n" << endl;
	    } 
    }
    else if (atribut == 2){
    	//deklarasi variabel
		int key;
        //input usia balita yang ingin dicari 
		cout << setw(15) << " " << " Masukkan usia balita yang ingin dicari : ";
		cin >> key;
		cout << setw(10) << " " << "--------------------------------------------------" << endl;
		//for loop untuk mencocokkan usia pada data dengan usia yang dicari
        for (i = 0; i < banyakData; i++){
            if (data_balita[i].usia == key){
                find = true; 
                break;
            }
        }
		//percabangan jika data usia yang dicari ditemukan
        if (find == 1){
            //menampilkan hasil pencarian
            cout << "\n ------------------------ Data " << key << " Ditemukan! --------------------------\n" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(4) << " " << " || NO |	NAMA	|  USIA  | TINGGI BADAN | BERAT BADAN ||" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(7) << "||" << setw(2) << i + 1 ;
            cout << setw(3) << "|" << setw(9) << data_balita[i].nama;
            cout << setw(4) << "|" << setw(5) << data_balita[i].usia;
            cout << setw(4) << "|" << setw(7) << data_balita[i].tinggi;
            cout << setw(8) << "|" << setw(9) << data_balita[i].berat << setw(6) << "||" <<endl;
            cout << setw(4) << " " << " -----------------------------------------------------------\n" << endl;
        }
        else {
            //tampilan jika data tidak ditemukan
            cout << "\n ----------------------- Data Tidak Ditemukan! -------------------------\n" << endl;
		}
	}
	else if (atribut == 3){
    	//deklarasi variabel
		int key;
        //inputan untuk tinggi balita yang ingin dicari
		cout << setw(15) << " " << " Masukkan tinggi balita yang ingin dicari : ";
		cin >> key;
		cout << setw(10) << " " << "--------------------------------------------------" << endl;
		//for loop untuk mencocokkan tinggi pada data dengan tinggi yang dicari
		for (i = 0; i < banyakData; i++){
            if (data_balita[i].tinggi == key){
                find = true; 
                break;
            }
        }
		//percabangan jika data tinggi yang dicari ditemukan
        if (find == 1){
            //menampilkan hasil pencarian
            cout << "\n ------------------------ Data " << key << " Ditemukan! --------------------------\n" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(4) << " " << " || NO |	NAMA	|  USIA  | TINGGI BADAN | BERAT BADAN ||" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(7) << "||" << setw(2) << i + 1 ;
            cout << setw(3) << "|" << setw(9) << data_balita[i].nama;
            cout << setw(4) << "|" << setw(5) << data_balita[i].usia;
            cout << setw(4) << "|" << setw(7) << data_balita[i].tinggi;
            cout << setw(8) << "|" << setw(9) << data_balita[i].berat << setw(6) << "||" <<endl;
            cout << setw(4) << " " << " -----------------------------------------------------------\n" << endl;
        }
        else {
            //tampilan jika data tidak ditemukan
            cout << "\n ----------------------- Data Tidak Ditemukan! -------------------------\n" << endl;
		}
	}
	else if (atribut == 4){
    	//deklarasi variabel
		int key;
        //inputan untuk berat balita yang ingin dicari
		cout << setw(15) << " " << " Masukkan berat balita yang ingin dicari : ";
		cin >> key;
		cout << setw(10) << " " << "--------------------------------------------------" << endl;
		//for loop untuk mencocokkan berat pada data dengan berat yang dicari
		for (i = 0; i < banyakData; i++){
            if (data_balita[i].berat == key){
                find = true; 
                break;
            }
        }
		//percabangan jika data berat yang dicari ditemukan
        if (find == 1){
            //menampilkan hasil pencarian
            cout << "\n ------------------------ Data " << key << " Ditemukan! --------------------------\n" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(4) << " " << " || NO |	NAMA	|  USIA  | TINGGI BADAN | BERAT BADAN ||" << endl;
            cout << setw(4) << " " << " -----------------------------------------------------------" << endl;
            cout << setw(7) << "||" << setw(2) << i + 1 ;
            cout << setw(3) << "|" << setw(9) << data_balita[i].nama;
            cout << setw(4) << "|" << setw(5) << data_balita[i].usia;
            cout << setw(4) << "|" << setw(7) << data_balita[i].tinggi;
            cout << setw(8) << "|" << setw(9) << data_balita[i].berat << setw(6) << "||" <<endl;
            cout << setw(4) << " " << " -----------------------------------------------------------\n" << endl;
        }
        else {
            //tampilan jika data tidak ditemukan
            cout << "\n ----------------------- Data Tidak Ditemukan! -------------------------\n" << endl;
		}
	}
	return 0;
}

//prosedur untuk sorting data dengan metode insertion sort
void sorting_data(){
	cout << setw(15) << " " << "----------------------------------------" << endl;
	cout << setw(15) << " " << "||               SORTING              ||" << endl;
	cout << setw(15) << " " << "||            Insertion Sort          ||" << endl;
	cout << setw(15) << " " << "----------------------------------------" << endl;
	cout << setw(15) << " " << "[ Sorting Berdasarkan Atribut          ]" << endl;
	cout << setw(15) << " " << "[ 1. Usia Balita                       ]" << endl;
	cout << setw(15) << " " << "[ 2. Tinggi Balita                     ]" << endl;
	cout << setw(15) << " " << "[ 3. Berat Balita                      ]" << endl;
	cout << setw(15) << " " << "----------------------------------------" << endl;
	//inputan untuk memilih atribut apa yang ingin diurutkan
	cout << setw(15) << " " << "  Masukkan Pilihan [1/2/3] : "; cin >> pilih_atribut;
	cout << endl;
	//for loop untuk mengakses data
	for (int i = 0; i < indeks; i++){
		int j = i;
		//percabangan sesuai dengan pilihan atribut
		if (pilih_atribut == 1){
			//whlie loop untuk pertukaran posisi data 
			while (data_balita[j].usia < data_balita[j-1].usia && j > 0){
				swap(data_balita[j], data_balita[j-1]);
				j--;
			}
		}
		else if (pilih_atribut == 2){
			//whlie loop untuk pertukaran posisi data 
			while (data_balita[j].tinggi < data_balita[j-1].tinggi && j > 0){
				swap(data_balita[j], data_balita[j-1]);
				j--;
			}
		}
		else if (pilih_atribut == 3){
			//whlie loop untuk pertukaran posisi data 
			while (data_balita[j].berat < data_balita[j-1].berat && j > 0){
				swap(data_balita[j], data_balita[j-1]);
				j--;
			}
		}
	}	
	//pemberitahuan bahwa data berhasil disorting
	cout << "\n --------------------- Data Berhasil Disorting! -----------------------\n" << endl;
}

//Prosedur untuk menu pencarian data
void searching_data(){
	//menu untuk memilih atribut apa yang ingin dicari
	cout << setw(15) << " " << "----------------------------------------" << endl;
	cout << setw(15) << " " << "||             SEARCHING              ||" << endl;
	cout << setw(15) << " " << "----------------------------------------" << endl;
	cout << setw(15) << " " << "[ Searching Berdasarkan Atribut        ]" << endl;
	cout << setw(15) << " " << "[ 1. Nama Balita                       ]" << endl;
	cout << setw(15) << " " << "[ 2. Usia Balita                       ]" << endl;
	cout << setw(15) << " " << "[ 3. Tinggi Balita                     ]" << endl;
	cout << setw(15) << " " << "[ 4. Berat Balita                      ]" << endl;
	cout << setw(15) << " " << "----------------------------------------" << endl;
	//inputan untuk memilih atribut apa yang ingin diurutkan
	cout << setw(15) << " " << "  Masukkan Pilihan [1/2/3/4] : "; cin >> pilih_atribut;
	cout << endl;
	cout << setw(15) << " " << "----------------------------------------" << endl;
	if (pilih_atribut == 1){
		//pemanggilan fungsi untuk pencarian nama dengan metode linear search
		LinearSearch(pilih_atribut, sizeof(data_balita[indeks].nama));
	}
	else if (pilih_atribut == 2){
		//pemanggilan fungsi untuk pencarian usia dengan metode linear search
		LinearSearch(pilih_atribut, sizeof(data_balita[indeks].usia));
	}
	else if (pilih_atribut == 3){
		//pemanggilan fungsi untuk pencarian tinggi dengan metode linear search
		LinearSearch(pilih_atribut, sizeof(data_balita[indeks].tinggi));
	}
	else if (pilih_atribut == 4){
		//pemanggilan fungsi untuk pencarian berat dengan metode linear search
		LinearSearch(pilih_atribut, sizeof(data_balita[indeks].berat));
	}
	else {
		//tampilan jika user memilih atribut selain dari menu
		cout << setw(15) << " " << " Atribut Tidak Tersedia!" << endl;
	}
}

//FUNGSI UTAMA PROGRAM
int main(){
	//deklarasi variabel
	int pilih_menu;
	//memanggil prosedur salam pembuka
	salam_pembuka();	
	
	begin: //nama label untuk kembali jika dipanggil
	cout << " ======================================================================" << endl;
	//memanggil prosedur menu
	menu();
	//inputan untuk memilih menu
	cout << "  Masukkan pilihan sesuai angka pada menu [1/2/3/4/5/6/0]: "; cin >> pilih_menu;
	cout << " ----------------------------------------------------------------------" << endl;
	cout << endl;
	
	//percabangan sesuai dengan pilihan menu
	if (pilih_menu == 1){
		//memanggil prosedur tambah data
		add_data();
		//fungsi system("PAUSE") untuk menghentikan proses eksekusi sampai user menekan sembarang tombol
		cout << "  "; system ("PAUSE");
		goto begin;
	}
	else if(pilih_menu == 2){
		//memanggil prosedur tampilkan data
		view_data();
		cout << "  "; system ("PAUSE");
		goto begin;
	}
	else if(pilih_menu == 3){
		//memanggil prosedur ubah data
		change_data();
		cout << "  "; system ("PAUSE");
		goto begin;
	}
	else if(pilih_menu == 4){
		//memanggil prosedur hapus data
		clear_data();
		cout << "  "; system ("PAUSE");
		goto begin;
	}
	else if(pilih_menu == 5){
		//memanggil prosedur sorting data
		sorting_data();
		view_data();
		cout << "  "; system ("PAUSE");
		goto begin;
	}
	else if(pilih_menu == 6){
		//memanggil prosedur sorting data
		searching_data();
		cout << "  "; system ("PAUSE");
		goto begin;
	}	
	else if(pilih_menu == 0){
		//deklarasi variabel lokal
		char pilih_keluar;
		//apakah yakin ingin keluar
		cout << " ======================================================================" << endl;
		cout << " ||" << setw(15) << " " << "APAKAH ANDA YAKIN KELUAR DARI PROGRAM?" 
	 	 << setw(15) << "||" << endl;
		cout << " ======================================================================" << endl;
		cout << setw(29) << " " << "[Y/y]" << " or " <<  "[T/t]" << endl << endl;
		cout << setw(35) << " "; 
		//inputan y atau t
		cin >> pilih_keluar;
		cout << endl;
		
		//percabangan ingin keluar atau tidak
		if(pilih_keluar == 'y' || pilih_keluar == 'Y'){
			cout << endl;	
			//memanggil prosedur
			salam_penutup(); 
		}
		else if (pilih_keluar == 't' || pilih_keluar == 'T'){
			cout << "  "; system("PAUSE");
			goto begin;
		}
	}
	else{
		cout << " ======================================================================" << endl;
		cout << "  Pilihan Menu Tidak Tersedia! Silahkan Ulangi!" << endl;
		//fungsi system("PAUSE") untuk menghentikan proses eksekusi sampai user menekan sembarang tombol
		cout << "  "; system("PAUSE");
		goto begin;
	}
}
