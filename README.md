# 🖥️ OS-Specific Greeting Program in C

A simple C program that detects the operating system at compile time and prints a customized greeting. It demonstrates conditional compilation using predefined macros like `_WIN32`, `__linux__`, and `__APPLE__`.

---

## 🛠️ How It Works

- Uses `#ifdef` / `#elif` directives to check the OS macro during compilation.
- Prints a message based on the detected OS:
  - **Windows** → `"Hello from Windows!"`
  - **Linux** → `"Hello from Linux!"`
  - **macOS** → `"Hello from macOS!"`
  - **Other/Unknown OS** → `"Hello from an unknown OS!"`

---

## ⚙️ Usage

### 🧱 Compilation

Use a C compiler appropriate to your operating system.

For example, on Linux:

```bash
gcc os_greeting.c -o os_greeting
./os_greeting
