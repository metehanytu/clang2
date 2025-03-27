## Zaman Görevi

### Tanım:
Zaman şu şekilde temsil edilir:
- `hour` (saat) - (int)
- `minute` (dakika) - (int)
- `second` (saniye) - (int)
- `millisecond` (milisaniye) - (int)

### Görevler:
- **(a)** `Time` (Zaman) adlı bir yapı (struct) oluşturun.
- **(b)** 1 gün = 24 saat = 86400000 milisaniye.  
    Kullanıcı tarafından verilen ve 1 ile 86400000 arasında olan bir tamsayı için günün saatini döndüren bir fonksiyon yazın.  
    - Örnek:  
      - Eğer girilen tamsayı `86400000` ise, saat `0:0:0.0` olur.  
      - Eğer girilen tamsayı `101` ise, saat `0:0:0.101` olur.

- **(c)** İki saat dilimi arasındaki farkı döndüren bir fonksiyon yazın.  
    (Fonksiyonun parametreleri iki saat dilimidir ve fonksiyon bir zaman döner.)
