# 🍮 pudding-linux-tools

> 一个专为 Linux 系统打造的简易维护工具箱
> A simple maintenance toolkit designed specifically for Linux systems

“懒人”系统管理员的瑞士军刀：一键升级软件包、快速清理磁盘垃圾。简单、高效、开箱即用。
The Swiss Army knife for "lazy" system administrators: One-click upgrade of software packages, quick cleanup of disk junk. Simple, efficient, and ready-to-use.

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![Version](https://img.shields.io/badge/version-1.0.0-green.svg)]()

---

## 🚀 快速上手指南 / Quick Start Guide

本指南将帮助你快速配置并运行 `pudding-linux-tools`。
This guide will help you quickly configure and run `pudding-linux-tools`.

### 开发前的配置要求 / Prerequisites

*   **操作系统 / OS**: Ubuntu / Debian / Linux Mint (基于 Debian 的系统 / Debian-based systems)
*   **编译器 / Compiler**: GCC (GNU Compiler Collection)
    *   安装命令 / Install command: `sudo apt install build-essential`
*   **权限 / Permissions**: 需要 `sudo` 权限来执行系统级维护任务。
                   Need `sudo` privileges to perform system-level maintenance tasks.

### 安装与编译步骤 / Installation & Compilation Steps

1.  **克隆仓库 / Clone the Repository**
    首先将代码克隆到你的本地机器：
    First, clone the code to your local machine:

    ```bash
    git clone https://github.com/cfkbd2013/pudding-linux-tools.git
    cd pudding-linux-tools
    ```

2.  **编译程序 / Compile the Program**
    使用 GCC 编译源代码：
    Use GCC to compile the source code:

    ```bash
    gcc pudding-linux-tools_1_0.c -o pudding
    ```

3.  **运行程序 / Run the Program**
    赋予执行权限并运行：
    Grant execution permission and run:

    ```bash
    chmod +x pudding
    sudo ./pudding
    ```

### ⚡ 快速体验 (可选) / ⚡ Quick Experience (Optional)

如果你不想编译，可以直接下载我们提供的预编译 `.deb` 包进行安装：
If you don't want to compile, you can directly download our pre-compiled `.deb` package for installation:

1.  访问 **[Releases 页面](https://github.com/cfkbd2013/pudding-linux-tools/releases)**。
    Visit the **[Releases page](https://github.com/cfkbd2013/pudding-linux-tools/releases)**.
2.  下载 `pudding-linux-tools_1.0_amd64.deb`。
    Download `pudding-linux-tools_1.0_amd64.deb`.
3.  双击安装或使用命令：`sudo dpkg -i pudding-linux-tools_1.0_amd64.deb`。
    Double-click to install or use the command: `sudo dpkg -i pudding-linux-tools_1.0_amd64.deb`.

---

## 📂 项目文件目录说明 / Project Directory Structure

本项目的目录结构简洁明了：
The directory structure of this project is simple and clear:

```text
pudding-linux-tools/
├── README.md          # 项目说明文档 (就是你现在看到的文件)
                       # Project documentation (this file you are seeing now)
├── pudding-linux-tools_1_0.c  # 核心源代码文件 (C语言)
                                # Core source code file (C language)
