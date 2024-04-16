# Установка и настройка WSL, настройка окружения  

## Установка и настройка WSL (Windows Subsystem for Linux) или WSL2  
* На Windows 11 (если что, берите гайды по windows-10):  
    - https://vc.ru/dev/744877-kak-ustanovit-wsl-na-windows-11
* На Windows 10 (мой вариант):
    - https://g-ek.com/kak-zapustit-bash-v-windows-10
    - https://docs.microsoft.com/ru-ru/windows/wsl/install-win10
    - https://www.youtube.com/watch?v=5wuOBtegwu0
    - https://www.youtube.com/watch?v=T9vr4WTkh-g&list=PL87kYOx0cUgiSsIgiNeK2uFvhsjstEs0y&index=2
* На Windows 7 или 8 установите **cygwin**:
    - https://cygwin.com/install.html
    - https://www.youtube.com/watch?v=2csABC85onI
* обновление и установка утилит:
    - `sudo apt update`
    - `sudo apt install cmake gcc clang gdb build-essential`
    - `gcc --version`
    - `sudo apt install valgrind`
* Где искать файлы Windows в командной строке Linux
    - `\` - в Windows, `/` - в Linux,
    - Из командной строки в WSL файл Windows `C:\work\hello.c` находится в `/mnt/c/work/hello.c`
    - диск Windows нужно искать в /mnt/имя_диска

## SSH
* https://superuser.com/questions/1111591/how-can-i-ssh-into-bash-on-ubuntu-on-windows-10
* https://losst.pro/ustanovka-ssh-ubuntu-16-04?ysclid=lungftu7f9333374933
* `ssh-keygen`
* GitHub -> User -> Settings -> SSH -> New SSH Key / Add SSH Key
* публичный коюч:	`/home/username/.ssh/id_rsa.pub`

## code editor 
* Microsoft Visual Studio Code
    - https://code.visualstudio.com/
* VIM
    - https://www.vim.org/download.php

## GIT
* `git clone repo_adres` - клонируем проект
* `git checkout -b develop` - создаём ветку **develop**
* `git branch` - смотрим ветки, в какой находимся
* `git switch branchname` - переключаемся на ветку **branchname**
* `git status` - посмотреть изменения
* `git add filename` - добавить файл под версионный контроль
* `git add .` - добавить все изменения под версионный контроль
* `git commit -m "commit name"` - создать коммит
* `git push origin develop` - загрузить (запушить) коммит в репозиторий в ветку **develop**

## GCC
* `gcc -o hello hello.c`
* для запуска `./hello` или `./hello.exe`


