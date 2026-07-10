# 🏨 Smart Hostel Management System

A desktop-based Hostel Management System developed using **C++ and Qt Widgets**. This application helps hostel administrators efficiently manage students, rooms, fees, and complaints through a simple graphical interface.

---

## 📌 Features

- 🔐 Login System
- 👨‍🎓 Student Management
  - Add Student
  - Search Student
  - Delete Student
- 🛏️ Room Management
  - Add Room
  - Search Room
  - Delete Room
- 💰 Fee Management
  - Add Fee Record
  - Search Fee Record
  - Delete Fee Record
- 📝 Complaint Management
  - Add Complaint
  - Search Complaint
  - Delete Complaint
- 🚪 Logout
- 💾 Data stored using text files

---

## 🛠 Technologies Used

- C++
- Qt 6 (Qt Widgets)
- Qt Creator
- CMake
- File Handling (QFile & QTextStream)

---

## 📂 Project Structure

```
SmartHostelManagementSystem
│
├── dialog.cpp
├── dialog.h
├── dialog.ui
│
├── studentmanagement.cpp
├── studentmanagement.h
├── studentmanagement.ui
│
├── roommanagement.cpp
├── roommanagement.h
├── roommanagement.ui
│
├── feemanagement.cpp
├── feemanagement.h
├── feemanagement.ui
│
├── complaintmanagement.cpp
├── complaintmanagement.h
├── complaintmanagement.ui
│
├── main.cpp
├── CMakeLists.txt
└── README.md
```

---

## 💾 Data Storage

The application stores records in text files:

- students.txt
- rooms.txt
- fees.txt
- complaints.txt

These files are automatically updated whenever records are added or deleted.

---

## ▶️ How to Run

1. Clone the repository.

```bash
git clone https://github.com/KushagraTechie/SmartHostelManagementSystem.git
```
2. Open the project using **Qt Creator**.

3. Open `CMakeLists.txt`.

4. Configure the project.

5. Build and Run.

---

## 🚀 Future Improvements

- Admin Profile Management
- Visitor Management
- Attendance Tracking
- Database Integration (MySQL/SQLite)
- Report Generation
- User Authentication with Database

---

## 👨‍💻 Developer

**Kushagra Bajpai**

B.Tech CSE (Hons)

Lovely Professional University

---

## © Copyright

© 2026 Kushagra Bajpai. All Rights Reserved.

This project and its source code are protected by copyright law.
Unauthorized copying, modification, redistribution, or commercial use
without prior written permission is prohibited.