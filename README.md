# praktikum-itp-m4

## Praktikum ITP M4

### No 1

Buatlah sebuah program dengan tampilan awal (Menu Utama) seperti berikut:

```
-------------------------
1. Send A Mail
2. Calendar
0. Exit
>>>
```

MENU 1 : SEND A MAIL\
Saat user menginpukan 1, maka akan memasuki menu Send a Mail. Pada menu ini, program akan meminta ukuran surat (Ukuran surat bersifat zero base). Pastikan ukuran surat diatas samadengan 15 atau 0. Jika ukuran surat yang diinputkan di bawah 15 dan diatas 0 maka tampilkan pesan error ‘Invalid !!!’. Jika inputan ukuran surat diisi 0 maka kembalikan program ke menu utama. Jika ukuran surat diatas sama dengan 15 maka program akan menampilkan gambar surat dengan NRP pengirim (NRP diisi dengan NRP praktikan masing-masing) seperti tampilan di bawah ini. (Program akan berada di menu ini terus hingga user memasukan inputan 0 untuk kembali ke Menu Utama)

```
Masukkan Besar Kotak : 15
#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
#     #  #  #  #  #  #  #  #  #  #  #  #     #
#     #  #  #  #  #  #  #  #  #  #  #  #     #
#           #  #  #  #  #  #  #  #           #
#           #  #  #  #  #  #  #  #           #
#                 #  #  #  #                 #
#                 #  #  #  #                 #
#                                            #
#                                            #
#                                            #
#                                            #
#                                            #
#                                            #
#                          FROM : 220116919  #
#                                            #
#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #

Masukkan Besar Kotak : 21
#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
#     #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #     #
#     #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #     #
#           #  #  #  #  #  #  #  #  #  #  #  #  #  #           #
#           #  #  #  #  #  #  #  #  #  #  #  #  #  #           #
#                 #  #  #  #  #  #  #  #  #  #                 #
#                 #  #  #  #  #  #  #  #  #  #                 #
#                       #  #  #  #  #  #                       #
#                       #  #  #  #  #  #                       #
#                             #  #                             #
#                             #  #                             #
#                                                              #
#                                                              #
#                                                              #
#                                                              #
#                                                              #
#                                                              #
#                                                              #
#                                            FROM : 220116919  #
#                                                              #
#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
```

MENU 2 : CALENDAR\
Saat user menginputkan 2 pada Menu Utama maka masukkan user ke menu Calendar. Menu ini akan meminta inputan bulan ke berapa yang diinginkan (inputan 1-12 untuk Januari – Desember. Februari diasumsikan hanya memiliki 28 hari) serta dimulai hari apa (inputan 1-7 untuk hari Minggu - Senin). Setelah itu, program akan menampilkan calendar seperti contoh di bawah ini.

```
Bulan : 3
Hari  : 4

      = MARET =
+--+--+--+--+--+--+--+
| M| S| S| R| K| J| S|
+--+--+--+--+--+--+--+
|  |  |  | 1| 2| 3| 4|
+--+--+--+--+--+--+--+
| 5| 6| 7| 8| 9|10|11|
+--+--+--+--+--+--+--+
|12|13|14|15|16|17|18|
+--+--+--+--+--+--+--+
|19|20|21|22|23|24|25|
+--+--+--+--+--+--+--+
|26|27|28|29|30|31|  |
+--+--+--+--+--+--+--+
|  |  |  |  |  |  |  |
+--+--+--+--+--+--+--+

Bulan : 2
Hari  : 1
= FEBRUARI =
+--+--+--+--+--+--+--+
| M| S| S| R| K| J| S|
+--+--+--+--+--+--+--+
| 1| 2| 3| 4| 5| 6| 7|
+--+--+--+--+--+--+--+
| 8| 9|10|11|12|13|14|
+--+--+--+--+--+--+--+
|15|16|17|18|19|20|21|
+--+--+--+--+--+--+--+
|22|23|24|25|26|27|28|
+--+--+--+--+--+--+--+
|  |  |  |  |  |  |  |
+--+--+--+--+--+--+--+
|  |  |  |  |  |  |  |
+--+--+--+--+--+--+--+
```

### Tugas

Buatlah program BOUNCE sederhana. Pada saat program pertama kali dijalankan, program akan menampilkan menu utama seperti contoh di bawah ini: (Untuk semua program jika inputan tidak sesuai maka akan loop meminta inputan lagi)

```
-------------------------
1. Bounce Square in Square
2. Bounce Square in Triangle
0. Exit
>>>
```

MENU 1\
Jika user memilih menu satu maka program akan meminta inputan mode berupa angka 1 atau 2. Setelah itu program juga akan meminta besar arena (pastikan tidak dapat lebih kecil dari 10 jika inputan mode 1, dan tidak dapat lebih kecil dari 20 jika inputan mode 2) serta jumlah berapa kali memantul. Setelah itu program akan menampilkan kotak yang memantul di dalam kotak sesuai mode (kotak di dalam akan memantul ketika menyentuh dinding kotak luar, kotak selalu mantul kearah diagonal). Mode 2 merupakan mode dimana di dalam arena kotak terdapat arena kotak lainnya dan di masing-masing kotak terdapat kotak 2x2 yang memantul berlawanan (bagian dalam memantul ke kanan, bagian luar memantul ke kiri [yang selalu memantul adalah kotak kecil berukuran 2x2]). Setelah memantul sebanyak inputan, maka kembalikan ke menu.

Contoh Mode 1 :

```
Mode [1 / 2]
>>> 1
Panjang
>>> 11
Berapa kali memantul?
>>> 1

# # # # # # # # # # #
#                   #
#                   #
#                   #
#                   #
#                   #
#                   #
#                   #
#       * *         #
#       * *         #
# # # # # # # # # # #
# # # # # # # # # # #
#                   #
#                   #
#                   #
#                   #
#                   #
#                   #
#           * *     #
#           * *     #
#                   #
#                   #
# # # # # # # # # # #
# # # # # # # # # # #
#                   #
#                   #
#                   #
#               * * #
#               * * #
#                   #
#                   #
#                   #
#                   #
# # # # # # # # # # #
```

Contoh Tampilan Arena Mode 2 :

```
# # # # # # # # # # # # # # # # # # # # #
#                                       #
#                                       #
#                                       #
#                                       #
#         # # # # # # # # # # #         #
#         #                   #         #
#         #                   #         #
#         #                   #         #
#         #                   #         #
#         #                   #         #
#         #                   #         #
#         #                   #         #
#         #       * *         #         #
#         #       * *         #         #
#         # # # # # # # # # # #         #
#                                       #
#                                       #
#   * *                                 #
#   * *                                 #
# # # # # # # # # # # # # # # # # # # # #
```

MENU 2\
(Pada menu ini inputan besar arena wajib ganjil)
Jika user memilih menu dua maka program akan meminta inputan besar arena (pastikan tidak dapat lebih kecil dari 10 dan hanya boleh ganjil serta jumlah berapa kali memantul. Setelah itu program akan menampilkan kotak yang memantul di dalam segitiga (kotak di dalam akan memantul ketika menyentuh dinding segitiga, kotak selalu mantul kearah diagonal). Setelah memantul sebanyak inputan, maka kembalikan ke menu.

Contoh Tampilan Arena Mode 1 :

```
          #
         # #
        #   #
       #     #
      #       #
     #         #
    #           #
   #             #
  #     * *       #
 #      * *        #
# # # # # # # # # # #
```
