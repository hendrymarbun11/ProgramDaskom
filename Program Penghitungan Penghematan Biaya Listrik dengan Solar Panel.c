#include<stdio.h>
#include<stdlib.h>

int main()
{

    float bulanlalu, jumlahpemakaian, total, waktupemakaian, waktupemakaian1, waktupemakaian2, hemat;
    int jenis1, jenis2, pilihan;
    char error, error1, sp;

    printf("\n\n\t**************************************************\n");
    printf("\n\n\tKalkulasi Penghematan Biaya Menggunakan Solar Panel\n");
    printf("\n\n\t**************************************************\n");
    printf("\n\n\toleh MaharaniMarbun Company\n");
        ulang :
        printf("\n----------------------------------------\n"); //masuk ke program
        printf("Apakah Anda Sudah Memakai Solar Panel?\n");
        printf("1. Sudah\n");
        printf("2. Belum\n");
        printf("3. HELP\n");
        printf("Masukkan Jawaban Anda dengan Angka (1/2/3) : \t");
        scanf("%s", &sp); //program membaca apakah sudah memakai solar panel atau belum
        system("clear");


        switch(sp) //pemilihan kasus
        {
        case '1': //kasus 1 : jika user memilih Ya
            ulanglagi :
        	printf("\n\n----------------------------------------\n");
            printf("Berapakah Daya di Rumah Anda?\n");
            printf("1. 450 VA\n");
            printf("2. 900 VA\n");
            printf("3. 1300 VA\n");
            printf("4. 2200 VA\n");
            printf("Masukkan Jawaban Anda dengan Angka (1/2/3/4) : \t");
            scanf("%d", &jenis1); //Program membaca daya yang digunakan oleh user
            scanf("%c", &error1);
            system("clear");

            if (jenis1 == 1) //Jika user memakai daya 450 VA
            {
                ulanglagi2 :
                printf("\n----------------------------------------\n");
                printf("Benda Apa Saja yang Terhubung dengan Solar Panel?\n");
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2); //User memilih benda apa saja yang dipakai
                scanf("%c", &error);
                system("clear");

                if (jenis2 == 1) //Jika user hanya memakai lampu dengan daya 450VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian);

                        total=0.001*415*30*waktupemakaian;

                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih :
                        printf("\nApakah Sudah Selesai?"); //State akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //program kembali ke awal
                        }
                        else
                        {
                            goto pilih; //error handles
                        }
                }
                else if (jenis2 == 2) //untuk kasus 2 : user memakai televisi dengan solar panel dengan daya 450VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \n");
                        scanf("%f", &waktupemakaian);

                        total=0.15*415*30*waktupemakaian;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih1 :
                        printf("\nApakah Sudah Selesai?"); //pemilihan akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //program kembali ke awal
                        }
                        else
                        {
                            goto pilih1; //error handles
                        }
                }

                else if (jenis2 == 3) //program jika user memakai televisi dan lampu dengan solar panel dengan daya 450VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*415*30*waktupemakaian1)+(0.15*415*30*waktupemakaian2);
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih2 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //program kembali ke awal
                        }
                        else
                        {
                            goto pilih2; //error handles
                        }
                }
                else //untuk kasus error
                {
                    printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi2;
                }
            }
            else if (jenis1 == 2) //program untuk user dengan daya 900VA
            {
                ulanglagi3 :
                printf("\n----------------------------------------\n");
                printf("Benda Apa Saja yang Terhubung dengan Solar Panel?\n"); //pemilihan benda yang dipakai
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2);
                scanf("%c", &error);
                system("clear");

                if (jenis2 == 1) //jika user menggunakan lampu dengan daya rumah 900VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.001*586*30*waktupemakaian;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih3 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //program kembali ke awal
                        }
                        else
                        {
                            goto pilih3; //error handles
                        }
                }
                else if (jenis2 == 2) //jika benda yang dipakai televisi dengan daya 900VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \n");
                        scanf("%f", &waktupemakaian);

                        total=0.15*586*30*waktupemakaian;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih4 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //program kembali ke awal
                        }
                        else
                        {
                            goto pilih4; //error handles
                        }
                }
                else if (jenis2 == 3) //jika user memakai televisi dan lampu dengan daya 900VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*586*30*waktupemakaian1)+(0.15*586*30*waktupemakaian2);
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih5 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //program kembali ke awal
                        }
                        else
                        {
                            goto pilih5; //error handles
                        }
                }
                else
                {
                    printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi3; //error handles
                }

            }
            else if (jenis1 == 3) //jika daya yang digunakan 1300VA
            {
                ulanglagi4 :
                printf("\n----------------------------------------\n");
                printf("Benda Apa Saja yang Terhubung dengan Solar Panel?\n"); //memilih benda yang digunakan
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2);
                scanf("%c", &error);
                system("clear");

                if (jenis2 == 1) //jika lampu terhubung dengan solar panel dengan daya 1300VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian);

                        total=0.001*1467.28*30*waktupemakaian;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total); //perhitungan

                        pilih6 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih6; //error handles
                        }
                }
                else if (jenis2 == 2) //jika televisi terhubung solar panel dengan daya 1300VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \n");
                        scanf("%f", &waktupemakaian);

                        total=0.15*1467.28*30*waktupemakaian;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih7 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih7; //error handles
                        }
                }
                else if (jenis2 == 3) //jika televisi dan lampu dihubungkan ke solar panel dengan daya rumah 1300VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*1467.28*30*waktupemakaian1)+(0.15*1467.28*30*waktupemakaian2);
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih8 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program berakhir
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih8; //error handles
                        }
                }
                else
                {
                     printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi4; //error handles
                }
            }
            else if (jenis1 == 4) //program jika user memakai daya 2200VA
            {
                ulanglagi5 :
                printf("\n----------------------------------------\n");
                printf("Benda Apa Saja yang Terhubung dengan Solar Panel?\n"); //memilih benda yang terhubung dengan solar panel
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2);
                scanf("%c", &error);
                system("clear");

                if (jenis2 == 1) //jika user memilih televisi dengan daya rumah 2200VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian);

                        total=0.001*1467.28*30*waktupemakaian;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total); //perhitungan

                        pilih9 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program berakhir
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih9; //error handles
                        }
                }
                else if (jenis2 == 2) //user memilih televisi dengan daya rumah 2200VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \n");
                        scanf("%f", &waktupemakaian);

                        total=0.15*1467.28*30*waktupemakaian;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total); //perhitungan

                        pilih10 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program berakhir
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih10; //error handles
                        }
                }
                else if (jenis2 == 3) //user memilih lampu dan televisi dengan daya rumah 2200VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*1467.28*30*waktupemakaian1)+(0.15*1467.28*30*waktupemakaian2); //perhitungan
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total);

                        pilih11 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //perogram selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih11; //error handles
                        }
                }
                else
                {
                     printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi5; //error handles
                }

            }
            else
            {
                    printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi; //error handles untuk kasus 1 (memilih ya)

            }
            break;

        case '2' : //jika user memilih belum memakai solar panel
            ulanglagi6 :
        	printf("\n----------------------------------------\n");
            printf("Berapakah Biaya Rata - Rata Listrik Anda Per-Bulan? : \t"); //melihat biaya jika tidak menggunakan solar panel
            scanf("%f", &jumlahpemakaian);
            printf("\n\nBerapakah Daya di Rumah Anda?\n"); //melihat daya yang digunakan oleh user
            printf("1. 450 VA\n");
            printf("2. 900 VA\n");
            printf("3. 1300 VA\n");
            printf("4. 2200 VA\n");
            printf("Masukkan Jawaban Anda dengan Angka (1/2/3/4) : \t");
            scanf("%d", &jenis1);
            scanf("%c", &error1);
            system("clear");

            if (jenis1==1) //jika user menggunakan daya 450VA
            {
                ulanglagi7 :
                printf("\n----------------------------------------\n");
                printf("Benda Apa Saja yang Sering Anda Gunakan Dirumah?\n"); //memilih benda yang sering digunakan
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2);
                scanf("%c", &error);
                system("clear"); //menghapus tampilan sebelumnya

                if (jenis2==1) //jika user memilih televisi dengan daya 450 VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.001*415*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total); //total biaya yang dihemat
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat);

                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear"); //menghapus tampilan sebelumnya

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //program selesai
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih; //error handles
                        }
                }
                else if (jenis2==2) //jika user memilih televisi dengan daya rumah 450 VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.15*415*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total); //tptal biaya yang dihemat jika memakai solar panel
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat);

                        pilih12 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih12; //error handles
                        }
                }
                else if (jenis2==3) //jika user memilih lampu dan televisi dengan daya 450 VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*415*30*waktupemakaian1)+(0.15*415*30*waktupemakaian2);
                        hemat=jumlahpemakaian-total;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat); //perhitungan

                        pilih13 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih13; //error handles
                        }

                }
                else
                {
                    printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi7; //error handles untuk daya 450VA
                }

            }
            else if (jenis1==2) //jika user memakai daya dirumah sebesar 900VA
            {
                ulanglagi8 :
                printf("\n----------------------------------------\n");
                printf("\nBenda Apa Saja yang Sering Anda Gunakan Dirumah?\n"); //memilih benda yang sering digunakan
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2);
                scanf("%c", &error);
                system("clear"); //menghapus tampilan sebelumnya

                if(jenis2==1) //jika user menggunakan lampu dengan daya rumah 900VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.001*586*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total); //perhitungan
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat);

                        pilih14 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih14; //error handles
                        }
                }
                else if (jenis2==2) //jika user memakai televisi dengan daya 900VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Televisi Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.15*586*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat); //perhitungan

                        pilih15:
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0; //mengakhiri program
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang; //mengulang program
                        }
                        else
                        {
                            goto pilih15; //error handles
                        }
                }
                else if (jenis2==3) //jika digunakan lampu dan televisi dengan daya rumah 900VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*586*30*waktupemakaian1)+(0.15*586*30*waktupemakaian2);
                        hemat=jumlahpemakaian-total;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat); //perhitungan

                        pilih16 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear"); //menghapus tampilan sebelumnya

                        if(pilihan == 1)
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2)
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih16; //error handles
                        }

                }
                else
                {printf("\n\n----------------------------------------\n");
                    printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi8; //error handles pada kasus 900VA
                }

            }
            else if (jenis1==3) //Jika user menggunakan daya 1300VA
            {
                ulanglagi9 :
                printf("\n----------------------------------------\n");
                printf("\nBenda Apa Saja yang Sering Anda Gunakan Dirumah?\n");
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2);
                scanf("%c", &error);
                system("clear");

                if(jenis2==1) //jika user menggunakan lampu dengan daya rumah 1300VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.001*1467.28*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat);

                        pilih17 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1) //mengakhiri program
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2) //mengulang program
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih17; //error handles
                        }
                }
                else if (jenis2==2) //untuk memilih televisi dengan daya 1300VA
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.15*1567.28*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat); //perhitungan

                        pilih18 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1) //mengakhiri program
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2) //mengulang program
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih18; //error handles
                        }
                }
                else if (jenis2==3) //jika user memilih lampu dan televisi dengan daya rumah 1300VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*1467.28*30*waktupemakaian1)+(0.15*1467.28*30*waktupemakaian2);
                        hemat=jumlahpemakaian-total;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat); //perhitungan

                        pilih19 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1) //mengakhiri program
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2) //mengulang program
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih19; //error handles
                        }

                }
                else
                {
                    printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi9; //eror handles kasus 1300VA
                }

            }
            else if (jenis1==4) //jika user memakai daya dirumah sebesar 2200VA
            {
                ulanglagi10 :
                printf("\n\n----------------------------------------\n");
                printf("Benda Apa Saja yang Sering Anda Gunakan Dirumah?\n"); //memilih benda yang sering digunakan
                printf("1. Lampu 10Watt\n");
                printf("2. Televisi 150Watt\n");
                printf("3. Lampu dan Televisi\n");
                printf("Jawab dengan Angka (1/2/3): \t");
                scanf("%d", &jenis2);
                scanf("%c", &error);
                system("clear");

                if(jenis2==1)
                {printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.001*1467.28*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat); //perhitungan

                        pilih20 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1) //mengakhiri program
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2) //mengulang program
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih20; //error handles
                        }
                }
                else if (jenis2==2) //memilih televisi dengan daya rumah 2200VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama televisi Tersebut Digunakan per hari(dalam jam): \t");
                        scanf("%f", &waktupemakaian);

                        total=0.15*1567.28*30*waktupemakaian;
                        hemat=jumlahpemakaian-total;
                        printf("\nSehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n\n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat);//perhitungan

                        pilih21 :
                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1) //mengakhiri program
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2) //mengulang program
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih21; //error handles
                        }
                }
                else if (jenis2==3) //memilih lampu dan televisi dengan daya rumah 2200VA
                {
                        printf("\n\n----------------------------------------\n");
                        printf("Berapa Lama Lampu Tersebut Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian1);
                        printf("Berapa Lama Televisi Digunakan per hari(dalam jam): \t\n");
                        scanf("%f", &waktupemakaian2);

                        total=(0.001*1467.28*30*waktupemakaian1)+(0.15*1467.28*30*waktupemakaian2);
                        hemat=jumlahpemakaian-total;
                        printf("Sehingga Anda Menghemat Biaya Sebulan Sebesar: Rp %.2f \n", total);
                        printf("Dan Biaya yang Harus Dikeluarkan Sebulan Menjadi : Rp %.2f \n\n", hemat);

                        printf("\nApakah Sudah Selesai?"); //state akhir
                        printf("\n1. Ya");
                        printf("\n2. TIdak");
                        printf("\n\nJawab dengan angka (1/2) : \t");
                        scanf("%d", &pilihan);
                        scanf("%c", &error);
                        system("clear");

                        if(pilihan == 1) //mengakhiri program
                        {
                            printf("\n\n\t\t\tTerimakasih!\n\n");
                            return 0;
                        }

                        else if(pilihan == 2) //mengulang program
                        {
                            goto ulang;
                        }
                        else
                        {
                            goto pilih; //error handles
                        }

                }
                else
                {
                    printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                    goto ulanglagi10; //error handles kasus 2200VA
                }

            }
            else
            {
                printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                goto ulanglagi6; //error handles kasus 2 (belum memakai solar panel)
            }
            break;

        case '3' :
        		printf("\n\n----------------------------------------\n");
        	printf("Cara  Menggunakan  Program\n\n");
        	printf("1. Pilih Sudah/Belum dengan mengetik angka sesuai yang ditampilkan pada program \n");
        	printf("2. Jika Belum, masukkan besar biaya listrik anda per bulan. Jika Sudah, langsung ke step nomor 3.\n");
        	printf("3. Lalu pilih jenis daya yang anda gunakan pada rumah anda dengan menginput angka sesuai yang ditampilkan.\n");
        	printf("4. Pilih Jenis Benda yang Anda Gunakan sesuai dengan angka yang tertera\n");
        	printf("5. Masukkan lama pemakaian masing-masing barang yang anda pilih.\n");
        	printf("6. Jika sudah selesai akan ditampilkan besar penghematan biaya \n");
        	printf("7. Jika Belum, masukkan besar biaya listrik anda per bulan\n\n");
        	printf("Informasi Lebih Lanjut\n");
           	printf("=>Adinda Maharani\n");
        	printf("=>Hendry Steven Marbun\n");
        	goto ulang;

        default :

                printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");
                goto ulang; //error handles untuk keseluruhan case
        }
        return 0;
}
