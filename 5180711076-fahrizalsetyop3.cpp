#include<conio.h>
#include<iostream>
using namespace::std;
main()
{
    int A[20];
    int i, p, nilai,bts,baru,a,b,q,d,k;

   cout<<"\n Masukkan Jumlah Elemen : ";
   cin>>bts;
   cout<<"\n";
   cout<<endl;

//menampilkan nilai yang terdapat pada elemen array
    for(i=0;i<bts;i++)
    {
        cout<<"\nData Indeks ["<<i<<"]= ";
        cin>>A[i];
    }
    cout<<endl;
//memasukkan nilai yang akan dicari
    cout<<"\nMasukkan nilai yang akan dicari= ";
    cin>>nilai;

//melakukan pencarian data
    for(p=0;p<bts;p++)
    {
    if(A[p]==nilai)
    {
    cout<<"\nNilai yang dicari terdapat pada INDEKS ["<<p<<"]";
    }
   }
   cout<<"\n\n";
//mengganti data
cout<<endl;
cout<<"\nMasukkan indeks yang ingin diganti : ";
cin>>q;
cout<<"\nMasukkan data pengganti : ";
cin>>baru;
a = q;
A[a] = baru;
cout<<"\nData yang baru  : \n";

for(b=0;b<bts;b++)
{
 cout<<"\nData["<<b<<"]="<<A[b]<<"\n";
}
//menghapus data
cout<<"\n";
cout<<endl;
cout<<"\nMasukkan indeks yang ingin dihapus : ";
cin>>d;
i=d;
cout<<"\nNilai yang dihapus : ";
cout<<" "<<A[i]<<" pada INDEKS ["<<i<<"] \n";
cout<<"\nNilai akhir : \n";
for(p=d;p<bts;p++)
{
 A[p]=A[p+1];
}
for(k=0;k<bts-1;k++)
{
 cout<<"\nData["<<k<<"]="<<A[k];
}
getch();
}

