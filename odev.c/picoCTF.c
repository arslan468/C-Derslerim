import math
from Crypto.Util.number import long_to_bytes

# Senin verdiğin o lanet sayılar
n = 5032189615332819537112976822349589378730798408513723516065074630081106503758415210427578051757871842379259866570098301946206888469902434898092142149331291
e = 65537
c = 2385531761880574571521044618041107490447656236932398098489180893651448509508705100922368494855388138214488483034456098213857219598953002865357066717722496

# Başkanım burada Fermat Dayı'nın taktiği uyguluyoruz
def fermat_factor(n):
    a = math.isqrt(n) + 1
    b2 = a*a - n
    while True:
        b = math.isqrt(b2)
        if b*b == b2:
            break
        a += 1
        b2 = a*a - n
    p = a - b
    q = a + b
    return p, q

print("⏳ La dur bi, hesaplıyom...")
try:
    p, q = fermat_factor(n)
    print("✅ Aha buldum p ve q'yu!")
    print(f"p: {p}")
    print(f"q: {q}")
    
    # Şimdi şifreyi kıralım
    phi = (p - 1) * (q - 1)
    d = pow(e, -1, phi)
    m = pow(c, d, n)
    
    flag = long_to_bytes(m)
    print(f"\n🚩 BAYRAK GELİYOR BAŞKANIM:\n{flag.decode(errors='ignore')}")
except Exception as hata:
    print("❌ Yok başkan, bu yöntem yemedi. Başka bi dümen var işin içinde.")
    print(hata)