pasukan = 958730
hero = ["Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"]
musuh_perhero = pasukan / len(hero)

print(f"Jumlah pasukan yang dibawa Yu Zhong =", pasukan)
print(f"Jumlah pahlawan =", len(hero))
print(f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {musuh_perhero:.0f} pasukan")