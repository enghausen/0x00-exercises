# 🎯 Solutions to C++ Exercises

## 📚 Folder Structure
This repository contains my solutions to the C++ exercises from the course.  
The **source code and Markdown documentation** for my solutions are stored in the **solutions/** folder, while compiled binaries are placed in **build/**.

```
solutions/
│── throw_parabola.md         # Detailed write-up of Exercise 3
│── exercise_1.md             # Documentation for Exercise 1
│── exercise_2.md             # Documentation for Exercise 2
│── throw_parabola_main.cpp
│── throw_parabola.cpp
│── throw_parabola.h
│── exercise_1.cpp
│── exercise_2.cpp
│── exercise_3.cpp
build/                        # Compiled binaries (ignored in .gitignore)
.vscode/
│── tasks.json                # VS Code build tasks
│── launch.json               # VS Code debug configurations
```

---

## 📌 Exercise 3: Projectile Motion
The **Projectile Motion Analysis (Exercise 3)** is documented in detail in [throw_parabola.md](throw_parabola.md).

This document contains:
- **Mathematical formulas** used in projectile motion
- **C++ implementation** of the function `calculateVerticalDistance`
- **Graph of different projectile trajectories**
- **Insights into how the motion changes with different angles**

📉 **To view throw_parabola.md properly in Visual Studio Code**, install the **Markdown All in One** extension (`yzhang.markdown-all-in-one`).  
The document renders best in **VS Code's Markdown preview** (`Ctrl + Shift + V`).

---

## 🔧 Running the Code in VS Code
To make testing easier, this repository includes **pre-configured VS Code build and debug tasks**.

1️⃣ **Open the folder in Visual Studio Code.**  
2️⃣ **Use the pre-configured launch options:**
   - Press **F5** to run `throw_parabola_main`
   - Select **"Run Exercise 1"** or **"Run Exercise 2"** from the VS Code debugger

---

## ⚙️ Configuration Files
### **🛠️ VS Code Debug Configuration (`.vscode/launch.json`)**
This file allows easy debugging of different exercises.

```json
{
  "version": "0.2.0",
  "configurations": [
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

### **🛠️ VS Code Build Tasks (`.vscode/tasks.json`)**
This file automates compilation of different exercises.

```json
{
    "version": "2.0.0",
    "tasks": [
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
- The **Markdown documentation (`throw_parabola.md`) renders best in VS Code** with the extension **"Markdown All in One"**.
- The **build/ folder is ignored in .gitignore**, so compiled binaries don't clutter the repository.