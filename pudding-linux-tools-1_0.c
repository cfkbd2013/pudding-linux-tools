#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LANG_ZH 0
#define LANG_EN 1

int detect_system_lang() {
    setlocale(LC_ALL, "");
    char *lang = getenv("LANG");
    if (lang && strncmp(lang, "en", 2) == 0) {
        return LANG_EN;
    }
    return LANG_ZH;
}

void show_main_menu(int lang) {
    if (lang == LANG_EN) {
        printf("Welcome to Pudding Linux Tools!\n");
        printf("Enter the number below to use the corresponding function.\n");
        printf("(1) Upgrade all packages\n");
        printf("(2) Clean up disk space\n");
        printf("\nType 'lang' to switch language, 'q' or Ctrl+C to quit.\n");
        printf("Please select a function number: ");
    } else {
        printf("欢迎使用布丁Linux工具箱！\n");
        printf("输入下面功能对应的数字来使用对应功能。\n");
        printf("(1) 升级所有软件包\n");
        printf("(2) 清理空间\n");
        printf("\n输入 lang 切换可用语言，输入 q 或直接按下 Ctrl+C 退出。\n");
        printf("请选择功能编号: ");
    }
}

void show_language_menu(int current_lang) {
    if (current_lang == LANG_EN) {
        printf("\n(1) 简体中文\n");
        printf("(2) English\n");
        printf("Select language (1-2): ");
    } else {
        printf("\n(1) 简体中文\n");
        printf("(2) English\n");
        printf("请选择语言 (1-2): ");
    }
}

int main() {
    int current_lang = detect_system_lang();
    
    
    char input[256]; 

    while (1) {
        show_main_menu(current_lang);
        
  
        if (fgets(input, sizeof(input), stdin) == NULL) {
    
            printf("\n");
            break;
        }

       
        input[strcspn(input, "\n")] = '\0';

        // 处理特殊命令
        if (strcmp(input, "lang") == 0) {
           
            int lang_choice = -1;
            while (1) {
                show_language_menu(current_lang);
                if (fgets(input, sizeof(input), stdin) == NULL) {
                    printf("\n");
                    break;
                }
                input[strcspn(input, "\n")] = '\0';

                if (sscanf(input, "%d", &lang_choice) == 1) {
                    if (lang_choice == 1) {
                        current_lang = LANG_ZH;
                        break;
                    } else if (lang_choice == 2) {
                        current_lang = LANG_EN;
                        break;
                    }
                }
                
                if (current_lang == LANG_EN) {
                    printf("Invalid choice. Please enter 1 or 2.\n");
                } else {
                    printf("无效选择，请输入 1 或 2。\n");
                }
            }
            printf("\n");
            continue;
        }

        if (strcmp(input, "q") == 0) {
            if (current_lang == LANG_EN) {
                printf("Goodbye!\n");
            } else {
                printf("再见！\n");
            }
            break;
        }

        // 尝试解析为功能编号
        int choice = -1;
        if (sscanf(input, "%d", &choice) != 1) {
            if (current_lang == LANG_EN) {
                fprintf(stderr, "Invalid input. Use 1, 2, 'lang', or 'q'.\n\n");
            } else {
                fprintf(stderr, "无效输入，请使用 1、2、lang 或 q。\n\n");
            }
            continue;
        }

        // 执行功能
        int result = 0;
        switch (choice) {
            case 1:
                if (current_lang == LANG_EN) {
                    printf("\n[+] Upgrading all packages...\n");
                } else {
                    printf("\n[+] 正在升级所有软件包...\n");
                }
                fflush(stdout);
                result = system("sudo apt update && sudo apt upgrade -y");
                break;

            case 2:
                if (current_lang == LANG_EN) {
                    printf("\n[+] Cleaning up disk space...\n");
                } else {
                    printf("\n[+] 正在清理空间...\n");
                }
                fflush(stdout);
                result = system("sudo apt autoremove -y && sudo apt autoclean && sudo apt clean");
                break;

            default:
                if (current_lang == LANG_EN) {
                    fprintf(stderr, "Invalid option.\n\n");
                } else {
                    fprintf(stderr, "无效输入\n\n");
                }
                continue;
        }

        if (result != 0) {
            if (current_lang == LANG_EN) {
                fprintf(stderr, "[-] Operation failed.\n\n");
            } else {
                fprintf(stderr, "[-] 操作失败。\n\n");
            }
        } else {
            if (current_lang == LANG_EN) {
                printf("\n[+] Operation completed successfully.\n\n");
            } else {
                printf("\n[+] 操作完成。\n\n");
            }
        }
    }

    return 0;
}