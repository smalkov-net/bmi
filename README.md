[English](#Body-Mass-Index-(BMI))
# Индекс массы тела
## Индекс массы тела
Оставаться здоровым - ключ к предотвращению болезней!🏃🏼‍♂️💪🏼
Согласно Центру по контролю и профилактике заболеваний (CDC), вы можете определить свою уязвимость к болезням на основе вашего тела. Для быстрой и простой проверки вам нужны только ваш рост и вес. Просто введите эти цифры в программу bmi, и он скажет вам, все ли у вас в порядке или вам нужно ввести некоторые изменения.

Как однажды сказал Артур Шопенгауэр: "Разумнее работать над поддержанием своего здоровья, чем гнаться за богатством". Поэтому иногда гораздо важнее следить за своим здоровьем, чем переживать из-за своего банковского счета! 💰❌
### Уствновка программы на Mac
* Перед уствновкой проверте наличие стандартных библиотек Си. Вы можете ознакомиться с ними [здесь](https://github.com/smalkov-net/Testing-C.git).*

### Шаг 1: Откройте терминал

--------------------------------------------------------
delete


# Добро пожаловать в тестирование
Привет!

**`Testing-C`** - ваш инструмент для проверки основных библиотек, необходимых для установки терминальных программ, написанных на языке С.

Как только вы запускаете его, вы быстро узнаете, есть ли необходимые файлы на месте, прежде чем погрузиться в процесс установки - или что-то пошло не так.

Как сказал Рене Декарт, "Cogito, ergo sum" (Я мыслю, следовательно, существую)

Чтобы проверить наличие этих библиотек, лучше всего запустить программу, которая работает, но на самом деле ничего не делает.

## Запуск на Mac
Просто следуйте этим простым шагам, и все будет готово!

### Шаг 1: Откройте свой терминал
Для начала откроем свой терминал. Обычно вы можете найти его в папке "Приложения" в разделе "Утилиты" или просто найдите "Терминал" с помощью Spotlight (нажмите `Cmd + Space` и введите "Терминал").
### Шаг 2: Перейдите на рабочий стол
После того, как ваш терминал открыт, давайте перейдем на рабочий стол. Введите следующую команду и нажмите "Enter":

```bash
cd ~/Desktop
```
И проверте версию [GCC](https://gcc.gnu.org/) скопировав команду и вставив ее в терминал нажмите "Enter":
```bash
gcc --version
```
Если терминал не показал версию [GCC](https://gcc.gnu.org/) или [Clang](https://clang.llvm.org/), перейдите в раздел [Ошибки](#ошибки), исправте и продолжите установку заново.

### Шаг3: Загрузите и установите Testing-C
Теперь давайте загрузим проект Testing-C и настроем его. Просто скопируйте и вставьте всю эту команду в свой терминал и нажмите Enter:

```bash
curl -L -o Testing-C.zip https://github.com/smalkov-net/Testing-C/archive/refs/heads/main.zip && \
unzip Testing-C.zip && \
chmod +x Testing-C-main/MacInstall.command && \
./Testing-C-main/MacInstall.command && \
mv Testing-C-main/testing-C . && \
rm -r Testing-C-main Testing-C.zip
```

### Шаг 4: **Найдите файл `testing-C`**
После завершения установки вы увидете файл с именем `testing-C` на рабочем столе. Это программа терминала! Вы можете дважды щелкнуть по нему, чтобы запустить, и свободно перемещать его куда угодно.

Вот и всё! Всё готово. Наслаждайтесь!

# Welcome to testing
Hey, there!

**`Testing-C`** is go-to tool for checking the essential libraries needed to install terminal programs written in C.

Onece you run it, you'll quickly find out if the necessary files are in place before you dive into the installation process - or if something's gone awry.

As René Decartes famously said, "Cogito, ergo sum"(I am thinking, therefore I exist)

To verify the existence of these libraries, the best approach is to run a program that works but doesn't actually do anything.

## Get Started on Mac

Ready to get started with Testing-C? Just follow these simple steps, and you'll be good to go!

### Step 1: Open Your Terminal
First things first, let's open up your Terminal. You can usually find it in your Applications folder under Utilities, or just search for "Terminal" using Spotlight(press `Cmd + Space` and type "Terminal").
### Step 2: Go to Your Desktop
Once your terminal is open, let's navigate to your Desktop. Type the following command and hit Enter:

```bash
cd ~/Desktop
```
And check the version of [GCC](https://gcc.gnu.org/) by copyng the command and pasting it into the terminal, press "Enter":
```bash
gcc --version
```
If the terminal did not show the version of [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/), go to the [Errors](#errors), fix it and continue the installation again.
### Step 3: Download and Install Testing-C
Now, let's download the Testing-C project and get it set up. Just copy and paste this whole command into your Terminal and hit Enter:

```bash
curl -L -o Testing-C.zip https://github.com/smalkov-net/Testing-C/archive/refs/heads/main.zip && \
unzip Testing-C.zip && \
chmod +x Testing-C-main/MacInstall.command && \
./Testing-C-main/MacInstall.command && \
mv Testing-C-main/testing-C . && \
rm -r Testing-C-main Testing-C.zip
```

### Step 4: **Find the `testing-C` File**
Once the installation is done, you'll see a file called `testing-C` on Desktop. This is terminal program! You can double-click it to run, and feel free to move it wherever you like.

And that's it! You're all set to go. Enjoy!

## Ошибки

### Ошибки в Mac

"xcode-select: note: No developer tools were, requesting install..."

<img width="423" alt="Screenshot0" src="https://github.com/user-attachments/assets/a8c5d2e9-2458-493c-8302-bb3c8fe8b4e2" />

- установите xcode или загрузите с [сайта(terminal tool)](https://developer.apple.com/xcode/)

<img width="423" alt="Screenshot" src="https://github.com/user-attachments/assets/a75a79b4-6bb6-47c6-94f1-61ea4d8a9331" />

### Ошибки в ПК
" "gcc" не является внутренней или внешней программой..."

<img width="423" alt="Screenshot" src="https://github.com/user-attachments/assets/a37ecbd2-479d-42e7-b12f-5bf18f75f0d1" />

- установите [WSL](https://learn.microsoft.com/en-us/windows/wsl/about)

<img width="423" alt="Screenshot" src="https://github.com/user-attachments/assets/43cb3745-c68d-48db-956e-96206b13e4c5" />

## Errors
## errors Mac
"xcode-select: note: No developer tools were, requesting install..."

<img width="423" alt="Screenshot0" src="https://github.com/user-attachments/assets/a8c5d2e9-2458-493c-8302-bb3c8fe8b4e2" />

- install xcode or download from [Apple(terminal tool)](https://developer.apple.com/xcode/)

<img width="423" alt="Screenshot" src="https://github.com/user-attachments/assets/a75a79b4-6bb6-47c6-94f1-61ea4d8a9331" />

### errors PC
" "gcc" не является внутренней или внешней программой..."

<img width="423" alt="Screenshot" src="https://github.com/user-attachments/assets/a37ecbd2-479d-42e7-b12f-5bf18f75f0d1" />

- install [WSL](https://learn.microsoft.com/en-us/windows/wsl/about)

<img width="423" alt="Screenshot" src="https://github.com/user-attachments/assets/43cb3745-c68d-48db-956e-96206b13e4c5" />

delete

--------------------------------------------------------


# Body Mass Index (BMI)

hello, there
