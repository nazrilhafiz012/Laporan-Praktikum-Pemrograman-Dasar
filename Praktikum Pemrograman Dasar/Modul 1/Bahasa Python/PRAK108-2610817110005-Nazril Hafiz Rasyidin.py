import math

putaran = 5
jarak = 14
keliling = jarak / putaran
jari_jari = keliling / (2 * math.pi)

print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak} Kilometer\n")
print("Jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari:.2f} Kilometer")