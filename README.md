# Hello, Modern C++

Last I did this, I was building an installer on Win32 API. That was 2004, with KS Ooi.

## Setup

Setup VS Code [as described in this page](https://code.visualstudio.com/docs/languages/cpp). Some key steps involve:

```
$ choco install mingw -y
```

## Compile/Run

```
$ g++ -std=c++11 -g hello.cpp -o hello.exe
$ ./hello.exe
```
