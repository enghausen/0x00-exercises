# 🎯 Solutions to C++ Exercises

## 📚 Folder Structure

This repository contains my solutions to the C++ exercises from the course.\
The **source code and Markdown documentation** for my solutions are stored in the **solutions/** folder, while compiled binaries are placed in **build/**.

```
solutions/
│── exercise_1.cpp
│── exercise_2.cpp
│── exercise_4.cpp
│── exercise_4.md             # Documentation for Exercise 4
│── geometrics.cpp
│── geometrics.h
│── projectile_motion.png     # Graph for Exercise 3
│── README.md                 # This README file
│── throw_parabola_main.cpp
│── throw_parabola.cpp
│── throw_parabola.h
│── throw_parabola.md         # Detailed write-up of Exercise 3
build/                        # Compiled binaries (ignored in .gitignore)
.vscode/                      # Visual Studio Code files (ignored in .gitignore)
│── launch.json               # VS Code debug configuration
│── tasks.json                # VS Code build tasks
```

---

## 📌 Exercise 3: Projectile Motion

The **Projectile Motion Analysis (Exercise 3)** is documented in detail in [throw\_parabola.md](throw_parabola.md).

This document contains:

- **Mathematical formulas** used in projectile motion
- **C++ implementation** of the function `calculateVerticalDistance`
- **Graph of different projectile trajectories**
- **Insights into how the motion changes with different angles**

📉 **To view throw\_parabola.md properly in Visual Studio Code**, install the **Markdown All in One** extension (`yzhang.markdown-all-in-one`).\
The document renders best in **VS Code's Markdown preview** (`Ctrl + Shift + V`).

---

## 📌 Exercise 4: Geometric Calculations

The **Geometric Calculations (Exercise 4)** is documented in detail in [exercise\_4.md](exercise_4.md).

This document contains:

- **Mathematical formulas** used for sphere and rectangular box calculations
- **C++ implementation** of the functions `volume`, `area`, `surfaceArea`, and `ratio`
- **Examples demonstrating how to use the calculations**

📐 **To view exercise\_4.md properly in Visual Studio Code**, install the **Markdown All in One** extension (`yzhang.markdown-all-in-one`).\
The document renders best in **VS Code's Markdown preview** (`Ctrl + Shift + V`).

---

## 🔧 Running the Code in VS Code

To make testing easier, this repository includes **pre-configured VS Code build and debug tasks**.

1️⃣ **Open the folder in Visual Studio Code.**\
2️⃣ **Use the pre-configured launch options:**

- Press **F5** to run `throw_parabola_main`
- Select **"Run Exercise 1"**, **"Run Exercise 2"**, or **"Run Exercise 4"** from the VS Code debugger

---

## ⚙️ Configuration Files

### 🛠️ VS Code Debug Configuration (`.vscode/launch.json`)

This file allows easy debugging of different exercises.

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Run Exercise 4",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/exercise_4.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "preLaunchTask": "Build Exercise 4"
        },        
        {
            "name": "Run Throw Parabola Main",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/throw_parabola_main.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "preLaunchTask": "Build Throw Parabola Main"
        },
        {
            "name": "Run Exercise 1",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/exercise_1.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "preLaunchTask": "Build Exercise 1"
        },
        {
            "name": "Run Exercise 2",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/exercise_2.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "preLaunchTask": "Build Exercise 2"
        }
    ]
  }
```

---

### 🛠️ VS Code Build Tasks (`.vscode/tasks.json`)

This file automates compilation of different exercises.

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "cppbuild",
            "label": "Build Exercise 4",
            "command": "C:\\Code\\Software\\msys64\\ucrt64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${workspaceFolder}/solutions/exercise_4.cpp",
                "${workspaceFolder}/solutions/geometrics.cpp",
                "-o",
                "${workspaceFolder}/build/exercise_4.exe"
            ],
            "options": {
                "cwd": "${workspaceFolder}/build"
            },
            "problemMatcher": ["$gcc"],
            "group": {
                "kind": "build"
            },
            "detail": "Compiles exercise_4 with geometrics."
        },        
        {
            "type": "cppbuild",
            "label": "Build Throw Parabola Main",
            "command": "C:\\Code\\Software\\msys64\\ucrt64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${workspaceFolder}/solutions/throw_parabola_main.cpp",
                "${workspaceFolder}/solutions/throw_parabola.cpp",
                "-o",
                "${workspaceFolder}/build/throw_parabola_main.exe"
            ],
            "options": {
                "cwd": "${workspaceFolder}/build"
            },
            "problemMatcher": ["$gcc"],
            "group": {
                "kind": "build"
            },
            "detail": "Compiles throw_parabola_main with throw_parabola."
        },
        {
            "type": "cppbuild",
            "label": "Build Exercise 1",
            "command": "C:\\Code\\Software\\msys64\\ucrt64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${workspaceFolder}/solutions/exercise_1.cpp",
                "-o",
                "${workspaceFolder}/build/exercise_1.exe"
            ],
            "options": {
                "cwd": "${workspaceFolder}/build"
            },
            "problemMatcher": ["$gcc"],
            "group": {
                "kind": "build"
            },
            "detail": "Compiles exercise 1."
        },
        {
            "type": "cppbuild",
            "label": "Build Exercise 2",
            "command": "C:\\Code\\Software\\msys64\\ucrt64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${workspaceFolder}/solutions/exercise_2.cpp",
                "-o",
                "${workspaceFolder}/build/exercise_2.exe"
            ],
            "options": {
                "cwd": "${workspaceFolder}/build"
            },
            "problemMatcher": ["$gcc"],
            "group": {
                "kind": "build"
            },
            "detail": "Compiles exercise 2."
        }
    ]
}
```

---

## 🔗 Additional Notes

- The **solutions folder** is where I add my implementations.
- The **VS Code configurations** allow for easy testing of the exercises on different machines.
- The **Markdown documentation `throw_parabola.md` and `exercise_4.md` renders best in VS Code** with the extension **"Markdown All in One"**.
- The **build/ folder is ignored in .gitignore**, so compiled binaries don't clutter the repository.
