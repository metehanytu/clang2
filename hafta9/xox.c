# XOX (Tic Tac Toe) Oyunu – C Dili Ödevi

## 📚 Ödevin Amacı

Bu ödevde, C programlama dilinde `struct` ve `pointer` kavramlarını pekiştirmeniz hedeflenmektedir. Amacınız, XOX oyununu struct yapısını ve pointer kullanımını doğru şekilde kullanarak sıfırdan yazmak olacaktır.

## 🎯 Beklenen Özellikler

Aşağıdaki gereksinimleri karşılayan bir XOX (Tic Tac Toe) oyunu geliştirmeniz beklenmektedir:

- Oyun durumu bir `struct` yapısı içinde tutulmalıdır.
    - Oyun tahtası (3x3 karakter dizisi)
    - Sıranın kimde olduğu (`turn`: `'X'` veya `'O'`)
- Bu yapı bir pointer (`Game *game`) olarak fonksiyonlara gönderilmelidir.
- Hamle yapıldığında fonksiyon, struct üzerinden oyunu güncellemelidir.
- Oyuncular sırayla hamle yapabilmelidir.
- Tahta her hamleden sonra güncellenmeli ve ekrana yazdırılmalıdır.
- Oyun sonunda:
    - Kazanan doğru şekilde tespit edilmelidir.
    - Beraberlik durumu kontrol edilmelidir.
- Girdi olarak kullanıcıdan satır ve sütun bilgisi alınmalıdır (0-2 arası).

## 🧠 İpuçları

- Oyun mantığını parçalara bölerek yazın: Tahtayı çizme, hamle yapma, sırayı değiştirme, kazanma kontrolü gibi.
- `->` operatörünün neden kullanıldığını iyi anlayın. (`(*ptr).field` yerine `ptr->field`)
- Kodunuzu aşama aşama test edin, tüm kontrolleri sağlamaya çalışın.


