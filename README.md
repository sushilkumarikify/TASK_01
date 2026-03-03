# TASK_01
# 🎓 CGPA Calculator (C++)

A simple C++ program to calculate **CGPA (Cumulative Grade Point Average)** based on subject credits and grade points.

---

## 📌 Features

* Accepts any number of subjects
* Takes subject credits and grade points (0–10 scale)
* Calculates CGPA using standard formula
* Simple and beginner-friendly C++ code
* Console-based application

---

## 🧮 CGPA Formula

[
CGPA = \frac{\sum (Credit \times GradePoint)}{\sum Credits}
]

---

## 💻 How It Works

1. User enters number of subjects.
2. For each subject:

   * Enter credit
   * Enter grade point (0–10)
3. Program calculates:

   * Total Credits
   * CGPA

---

## 🛠️ Technologies Used

* C++
* Standard Input/Output (iostream)

---

## ▶️ How to Run

### Step 1: Clone the repository

```bash
git clone https://github.com/your-username/cgpa-calculator.git
```

### Step 2: Navigate to the folder

```bash
cd cgpa-calculator
```

### Step 3: Compile the program

```bash
g++ cgpa.cpp -o cgpa
```

### Step 4: Run the program

```bash
./cgpa
```

---

## 🧪 Sample Input & Output

```
Enter number of subjects: 3

Subject 1
Enter credit: 4
Enter grade point: 9

Subject 2
Enter credit: 3
Enter grade point: 8

Subject 3
Enter credit: 3
Enter grade point: 10

Total Credits = 10
CGPA = 8.9
```

---

## 📂 Project Structure

```
cgpa-calculator/
│
├── cgpa.cpp
└── README.md
```

---

## 🎯 Future Improvements

* Add letter grade support (S, A, B, C...)
* Add SGPA calculator
* Add input validation
* GUI version
* Save results to file

---

## 🤝 Contributing

Contributions are welcome!
Feel free to fork this repository and submit a pull request.

---

## 📜 License

This project is open-source and available under the MIT License.

---

⭐ If you found this project helpful, give it a star!
