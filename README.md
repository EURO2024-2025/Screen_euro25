# 🎛️ Screen_euro25 – Score Estimation Panel for STM32F746G-DISCO

![Project Banner](images/project_banner.png)

## 📋 Overview

**Screen_euro25** is a graphical user interface (GUI) application developed for the **STM32F746G-DISCO** board using **TouchGFX**.  
It allows users to configure score estimation settings via a **touchscreen panel**, then visually display the estimated score based on a selected step (1, 5, or 10). This tool is ideal for real-time score tracking during robotics challenges like **Eurobot 2025**.

---

## 🧭 Project Flow

1. **Step Selection Panel** – Choose your scoring increment (1, 5, or 10).
2. **Score Calculation** – Input how many tasks you expect to complete.
3. **Result Display** – Switch to the score screen to view the estimated total.

---

## 📸 Screenshots

### 🔧 Configuration Panel

![Configuration Panel](images/config_panel.png)

### 🧾 Score Display Screen

![Score Display](images/score_display.png)

---

## 🌟 Features

- 🖱️ **Touch-Based Interaction**  
- 🔢 **Customizable Step Selection**: 1, 5, or 10 points  
- 📲 **Live Score Feedback** on a second screen  
- 🎯 **Robot-Friendly Design**: Estimate scores on-the-go  
- ⚙️ Fully integrated with **TouchGFX Designer**

---

## 🛠️ Requirements

### 🔌 Hardware
- [STM32F746G-DISCO Board](https://www.st.com/en/evaluation-tools/32f746gdiscovery.html)
- Integrated 480x272 TFT LCD (included with board)

### 💻 Software
- [TouchGFX Designer](https://www.st.com/en/development-tools/touchgfxdesigner.html)
- [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html)
- [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)
- [STM32CubeProgrammer](https://www.st.com/en/development-tools/stm32cubeprog.html)

---

## 🚀 Getting Started

### 1.  the Repository and code STM in branch master  :: 
git clone --single-branch --branch master https://github.com/EURO2024_2025/Screen_euro25.git
