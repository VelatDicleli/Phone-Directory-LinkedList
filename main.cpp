#include <iostream>

using namespace std;
struct Kisi {
    string adi;
    int isNo;
    int evNo;
    int cepNo;
    Kisi* next;


};
class Rehber {


public:
    struct Kisi* head = NULL;
    struct Kisi* a = NULL;
    struct Kisi* prev = NULL;



public:
    void ekle(string adi, int isNo, int evNo, int cepNo) {
        struct Kisi* yeni = new Kisi;
        yeni->adi = adi;
        yeni->isNo = isNo;
        yeni->evNo = evNo;
        yeni->cepNo = cepNo;
        yeni->next = NULL;


        if (head == NULL) {
            head = yeni;

        }

        else {

            a = head;
            while (a->next != NULL) {
                a = a->next;
            }
            a->next = yeni;

        }

    }
public:
    void sil(string ad) {


    a = head;


    if (a == NULL) {
        cout << "Rehberde silinecek kiþi yok." << endl;
        return;
    }


    if (a->adi == ad) {
        cout << ad << " isimli kiþi silindi." << endl;
        head = a->next;
        free(a);
        return;
    }


    while (a->next != NULL) {

        prev = a;

        a = a->next;


        if (a->adi == ad) {
            cout << ad << " isimli kiþi silindi." << endl;
            prev->next = a->next;
            free(a);
            return;
        }
    }


    cout << "Rehberde " << ad << " isimli kiþi bulunamadý." << endl;
}


public:
    void sayi() {
        a = head;
        int sayac = 1;
        if (a == NULL)
        {
            cout << "---------------->   Rehber Bos. Lutfen kisi ekleyin." << endl;
        }
        while (a->next != NULL)
        {
            sayac++;
            a = a->next;
        }
        cout << "------------>    Rehberde " << sayac << " adet kisi bulunmaktadir." << endl;
    }

public:
    void ara1(string ad) {
    a = head;
    int sayac = 1;
    if(head==NULL){
        cout<<"rehber bos"<<endl;
        return;
    }
    if (a->adi == ad) {
        cout << ad<<" kisisi " << sayac << ". sirada bulunmaktadir." << endl;
        cout << "***************" << endl;
        cout << "adi: " << a->adi << endl;
        cout << "isNo: " << a->isNo << endl;
        cout << "evNo: " << a->evNo << endl;
        cout << "cepNo: " << a->cepNo << endl;
        cout << "***************" << endl;
        return;
    }
    while (a->next != NULL && a->adi!=ad) {
        a = a->next;
        sayac++;
    }
    if (a->adi == ad) {
        cout << ad<<" kisisi " << sayac << ". sirada bulunmaktadir." << endl;
        cout << "***************" << endl;
        cout << "adi: " << a->adi << endl;
        cout << "isNo: " << a->isNo << endl;
        cout << "evNo: " << a->evNo << endl;
        cout << "cepNo: " << a->cepNo << endl;
        cout << "***************" << endl;
    } else {
        cout << "Rehberde boyle bir kisi yok." << endl;
    }
}




public:
    void ara2(int no) {
        a = head;
        int sayac = 1;

            while (a->next != NULL) {


                if (a->cepNo == no || a->evNo == no || a->isNo == no) {

                    cout <<"Numarasi " << no << " olan kisi " << sayac << ". sirada bulunmaktadir." << endl;
                    cout << "***************" << endl;
                    cout << "adi: " << a->adi << endl;
                    cout << "isNo: " << a->isNo << endl;
                    cout << "evNo: " << a->evNo << endl;
                    cout << "cepNo: " << a->cepNo << endl;
                    cout << "***************" << endl;

                    break;

                }
                a = a->next;
                sayac++;
            }
            if (a->next == NULL) {

                cout << "Numarasi " << no << " olan kisi " << sayac << ". sirada bulunmaktadir." << endl;
                cout << "***************" << endl;
                cout << "adi: " << a->adi << endl;
                cout << "isNo: " << a->isNo << endl;
                cout << "evNo: " << a->evNo << endl;
                cout << "cepNo: " << a->cepNo << endl;
                cout << "***************" << endl;


            }


    }

public:
    void goster()
    {
        a = head;
       if(a==NULL){
        cout<< "Liste bos"<<endl;
       }
        while (a->next != NULL)
        {
            cout << "***************" << endl;
            cout << "adi: " << a->adi << endl;
            cout << "isNo: " << a->isNo << endl;
            cout << "evNo: " << a->evNo << endl;
            cout << "cepNo: " << a->cepNo << endl;
            cout << "***************" << endl;

            a = a->next;

        }
        cout << "***************" << endl;
        cout << "adi: " << a->adi << endl;
        cout << "isNo: " << a->isNo << endl;
        cout << "evNo: " << a->evNo << endl;
        cout << "cepNo: " << a->cepNo << endl;
        cout << "***************" << endl;
    }
};


int main()
{

    Rehber kisi;
    int sec;

    string adi;
    int isNo;
    int evNo;
    int cepNo;
    int tel;



    do {
        cout << "  " << endl;
        cout << "   " << endl;
        cout << "TELEFON REHBERINE HOSGELDINIZ" << endl;
        cout << "***************************************" << endl;
        cout << " Ne yapmak istiyorsunuz ?" << endl;
        cout << "" << endl;
        cout << "1. Yeni Kisi Olustur" << endl;
        cout << "2. Sil" << endl;
        cout << "3. Kisi Sayisi" << endl;
        cout << "4. Isme Gore Kisi Arama" << endl;
        cout << "5. Numaraya Gore Kisi Arama" << endl;
        cout << "6. Hepsini Listele" << endl;
        cout << "7. Cikis" << endl;

        cin >> sec;

        switch (sec) {
        case 1:

            cout << "Kisinin adini giriniz:" << endl;
            cin >> adi; cout << "------" << endl;
            cout << "Kisinin is numarasini giriniz" << endl;
            cin >> isNo; cout << "------" << endl;
            cout << "Kisinin ev numarasini giriniz" << endl;
            cin >> evNo;  cout << "------" << endl;
            cout << "Kisinin cep numarasini giriniz" << endl;
            cin >> cepNo; cout << "------" << endl;
            kisi.ekle(adi, isNo, evNo, cepNo);
            cout << "-------------->    Kisi Olusturma Basarili !" << endl;
            break;
        case 2:

            cout << " Rehberden kimi silmek istiyorsunuz ?  :  ";
            cin >> adi;
            kisi.sil(adi);
            break;

        case 3:
            kisi.sayi();
            break;
        case 4:
            cout << "Aranacak kisinin adini giriniz:  ";
            cin >>adi;
            kisi.ara1(adi);
            break;

        case 5:
            cout << "Aranacak kisinin numarasini giriniz:   ";
            cin >> tel;
            kisi.ara2(tel);
            break;

        case 6:
            kisi.goster();
            break;

        case 7:
            break;

        default:
            cout << "Gecersiz islem yaptiniz" << endl;

        }

    } while (sec != 7);
    cout << "-------------> Cikis Yapildi." << endl;

    return 0;
}
