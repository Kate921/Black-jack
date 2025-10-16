# 🃏 Blackjack Console Game (C++)

## 🇬🇧 English Version

### 📖 Description

This is a simple **Blackjack-style console game** written in **C++**.
The player competes against the dealer — both draw cards from a standard 52-card deck.
The goal is to reach **as close to 21 points as possible** without exceeding it.

The program displays messages in Polish, such as:

* *„WYGRALES!!!”* – You won!
* *„przegrales(”* – You lost :(
* *„nikt nie wygral”* – Draw

---

### 🧩 Features

* Full deck of 52 cards (♠ pik, ♥ kier, ♦ karo, ♣ trefl)
* Random card drawing with no duplicates
* Automatic score calculation
* Dealer logic implemented
* Text-based interface
* Clears screen between turns (`system("cls")` for Windows)

---

### 🧮 Scoring Rules

| Card    | Points                         |
| ------- | ------------------------------ |
| 2–10    | Face value                     |
| J, D, K | 10 points                      |
| A       | 11 points (or 1 if total > 21) |

---

### ⚙️ Requirements

* **Operating System:** Windows (uses `windows.h`)
* **Compiler:** Any C++ compiler (e.g., MinGW, Visual Studio, Code::Blocks)

---

### 🚀 How to Run

1. Download or clone this repository.
2. Compile the code:

   ```bash
   g++ main.cpp -o blackjack
   ```
3. Run the program:

   ```bash
   blackjack.exe
   ```
4. Follow the on-screen instructions:

   * Press `+` to draw another card.
   * The dealer plays automatically when it’s their turn.

---

### 💡 Example Output

```
karty gracza   karty dilera
10 pik         9 kier
punkty gracza  punkty dilera
10             9
nacisnij '+' zeby kontynuowac
```

After the game ends:

```
WYGRALES!!!
twoje punkty 20
punkty dilera 18
```

---

### ⚠️ Notes

* The command `system("cls")` works **only on Windows**.
  On Linux/macOS, replace it with `system("clear")`.
* The deck resets when the game restarts.

---

### ✍️ Author

Created by Kateryna Kalynovska.
A simple C++ project demonstrating randomization, arrays, and control flow.

---

---

## 🇵🇱 Wersja Polska

### 📖 Opis

To prosta **gra konsolowa w stylu Blackjacka**, napisana w języku **C++**.
Gracz rywalizuje z dilerem — obaj dobierają karty z talii 52 kart.
Celem jest uzyskanie **jak najbliżej 21 punktów**, nie przekraczając tej wartości.

Program wyświetla komunikaty w języku polskim, takie jak:

* *„WYGRALES!!!”* – Wygrałeś!
* *„przegrales(”* – Przegrałeś :(
* *„nikt nie wygral”* – Remis

---

### 🧩 Funkcje

* Pełna talia 52 kart (pik, kier, karo, trefl)
* Losowanie kart bez powtórzeń
* Automatyczne liczenie punktów
* Wbudowana logika dilera
* Tekstowy interfejs gry
* Czyszczenie ekranu między turami (`system("cls")`)

---

### 🧮 Zasady Punktacji

| Karta   | Punkty                                       |
| ------- | -------------------------------------------- |
| 2–10    | Wartość karty                                |
| J, D, K | 10 punktów                                   |
| A       | 11 punktów (lub 1, jeśli suma przekracza 21) |

---

### ⚙️ Wymagania

* **System operacyjny:** Windows (korzysta z `windows.h`)
* **Kompilator:** dowolny kompilator C++ (np. MinGW, Visual Studio, Code::Blocks)

---

### 🚀 Jak Uruchomić

1. Pobierz lub sklonuj repozytorium.
2. Skompiluj kod:

   ```bash
   g++ main.cpp -o blackjack
   ```
3. Uruchom grę:

   ```bash
   blackjack.exe
   ```
4. Postępuj zgodnie z instrukcjami w konsoli:

   * Naciśnij `+`, aby dobrać kolejną kartę.
   * Diler dobiera karty automatycznie.

---

### 💡 Przykładowy Wynik

```
karty gracza   karty dilera
10 pik         9 kier
punkty gracza  punkty dilera
10             9
nacisnij '+' zeby kontynuowac
```

Po zakończeniu gry:

```
WYGRALES!!!
twoje punkty 20
punkty dilera 18
```

---

### ⚠️ Uwagi

* Komenda `system("cls")` działa tylko w **systemie Windows**.
  Na Linuxie lub macOS można ją zastąpić `system("clear")`.
* Talia jest resetowana przy ponownym uruchomieniu gry.

---

### ✍️ Autor

Projekt stworzony przez Katerynę Kalynovską.
Prosta gra konsolowa pokazująca działanie losowości, tablic i logiki sterowania w języku C++.
