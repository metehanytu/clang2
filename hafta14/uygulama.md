# 📘 Soru: En Büyük Sayıyı Binary Dosyaya Yaz

## 🔧 Soru Tanımı

Kullanıcıdan kaç sayı gireceğini öğrenen ve bu kadar tamsayıyı kullanıcıdan alan bir C programı yazınız.

- Sayılar için **dinamik bellek tahsisi** yapınız (`malloc` kullanarak).
- Kullanıcının girdiği sayıları bellekte bir diziye yazınız.
- Bu dizideki **en büyük sayıyı** hesaplayan bir algoritma yazınız.
- Hesapladığınız en büyük sayıyı, `"sonuc.dat"` adlı **binary dosyaya** `fwrite` fonksiyonu ile yazınız.
- Program sonunda tüm kaynakları serbest bırakınız (dosya kapatma ve `free`).

## 📥 Girdi

- İlk satırda girilecek sayı adedi: `n`
- Ardından `n` adet tamsayı

## 📤 Çıktı

- `sonuc.dat` adlı dosyaya en büyük sayı **ikili formatta (binary)** yazılacaktır.

## 🧠 İpucu

- Bellek ayırmak için: `malloc(n * sizeof(int))`
- Dosya açmak için: `fopen("sonuc.dat", "wb")`
- Dosyaya yazmak için: `fwrite(&enbuyuk, sizeof(int), 1, fp)`
- Belleği boşaltmak için: `free(dizi)`

## 🔍 Örnek Giriş

