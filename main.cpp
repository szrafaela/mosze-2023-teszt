#include <iostream> // Helyes include a std::cout használatához

constexpr int N_ELEMENTS = 100; // Fixáljuk a konstans nevét (korábban NELEMENTS volt)

int main()
{
    int *b = new int[N_ELEMENTS]; // Helyes méret megadása (N_ELEMENTS használata)
    std::cout << "1-100 ertekek duplazasa" << std::endl; // Javítás: helyes idézőjelek és hiányzó << std::endl
    
    // Első for-ciklus: hibák javítása
    for (int i = 0; i < N_ELEMENTS; i++) // Javítás: feltétel megadása (i < N_ELEMENTS)
    {
        b[i] = i * 2; // Ez helyes, maradhat
    }

    // Második for-ciklus: hibák javítása
    for (int i = 0; i < N_ELEMENTS; i++) // Javítás: helyes feltétel (i < N_ELEMENTS)
    {
        std::cout << "Ertek: " << b[i] << std::endl; // Javítás: hiányzó érték kiírása és std::endl
    }

    // Átlag számítása
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // Javítás: az átlag változót inicializálni kell

    for (int i = 0; i < N_ELEMENTS; i++) // Javítás: feltétel elválasztása vessző helyett pontosvesszővel
    {
        atlag += b[i]; // Javítás: hiányzó pontosvessző a sor végén
    }

    atlag /= N_ELEMENTS; // Helyes átlag számítás, maradhat
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // Memóriaszivárgás elkerülése
    return 0;
}
