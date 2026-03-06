# 🍮 pudding-linux-tools

> 一个专为 Linux 系统打造的简易维护工具箱

“懒人”系统管理员的瑞士军刀：一键升级软件包、快速清理磁盘垃圾。简单、高效、开箱即用。

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![Version](https://img.shields.io/badge/version-1.0.0-green.svg)]()

---

## 🚀 快速上手指南

本指南将帮助你快速配置并运行 `pudding-linux-tools`。

### 开发前的配置要求

*   **操作系统**: Ubuntu / Debian / Linux Mint (基于 Debian 的系统)
*   **编译器**: GCC (GNU Compiler Collection)
    *   安装命令: `sudo apt install build-essential`
*   **权限**: 需要 `sudo` 权限来执行系统级维护任务。

### 安装与编译步骤

1.  **克隆仓库**
    首先将代码克隆到你的本地机器：

    ```bash
    git clone https://github.com/cfkbd2013/pudding-linux-tools.git
    cd pudding-linux-tools
    ```

2.  **编译程序**
    使用 GCC 编译源代码：

    ```bash
    gcc pudding-linux-tools_1_0.c -o pudding
    ```

3.  **运行程序**
    赋予执行权限并运行：

    ```bash
    chmod +x pudding
    sudo ./pudding
    ```

### ⚡ 快速体验 (可选)

如果你不想编译，可以直接下载我们提供的预编译 `.deb` 包进行安装：

1.  访问 **[Releases 页面](https://github.com/cfkbd2013/pudding-linux-tools/releases)**。
2.  下载 `pudding-linux-tools_1.0_amd64.deb`。
3.  双击安装或使用命令：`sudo dpkg -i pudding-linux-tools_1.0_amd64.deb`。

---

## 📂 项目文件目录说明

本项目的目录结构简洁明了：

```text
pudding-linux-tools/
├── README.md          # 项目说明文档 (就是你现在看到的文件)
├── LICENSE            # 开源许可证文件
├── pudding-linux-tools_1_0.c  # 核心源代码文件 (C语言)
└── Makefile           # (可选) 编译脚本，简化编译过程
