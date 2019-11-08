# WebScan

----------

An advanced website scanning tool based on C language. It can detect the fingerprinting, sensitive directories and ports.
![](https://i.imgur.com/tNlqlTk.png)

# Introduction

## ENVIRONMENT
* **Windows 7/8/10**
* **Visual Studio 2015 or above**

## PREREQUISITES ( installed in Visual Studio)

* libcurl_x86
* WinSock2

## USAGE
![](https://i.imgur.com/wHr2vdr.png)
### Input target
Single target, default is http. Set value of u(url), you can get basic fingerprinting of the target website.

```
WebScan.exe -u https://target.com
```

### Sensitive Direcories

Set value of d(dict) according to the language of the website.

```
WebScan.exe -u https://target.com -d dictionary.txt
```

### Ports

set value of p(port), the value can be range or single port. For example, 80-500 or 80,443.
```
WebScan.exe -u https://target.com -p 22-33,80
```
## Program Tree
    .
    ├─ README.md
    ├─ WebScan
    │    ├─ .vs
    │    │    └─ WebScan
    │    │           └─ v15
    │    ├─ Debug
    │    │    ├─ WebScan.exe
    │    │    ├─ WebScan.ilk
    │    │    └─ WebScan.pdb
    │    ├─ Release
    │    │    ├─ WebScan.exe
    │    │    ├─ WebScan.iobj
    │    │    ├─ WebScan.ipdb
    │    │    └─ WebScan.pdb
    │    ├─ WebScan
    │    │    ├─ Debug
    │    │    │    ├─ WebScan.log
    │    │    │    ├─ WebScan.obj
    │    │    │    ├─ WebScan.pch
    │    │    │    ├─ WebScan.tlog
    │    │    │    ├─ stdafx.obj
    │    │    │    ├─ vc141.idb
    │    │    │    └─ vc141.pdb
    │    │    ├─ Release
    │    │    │    ├─ WebScan.log
    │    │    │    ├─ WebScan.obj
    │    │    │    ├─ WebScan.pch
    │    │    │    ├─ WebScan.tlog
    │    │    │    ├─ stdafx.obj
    │    │    │    └─ vc141.pdb
    │    │    ├─ WebScan.cpp
    │    │    ├─ WebScan.vcxproj
    │    │    ├─ WebScan.vcxproj.filters
    │    │    ├─ WebScan.vcxproj.user
    │    │    ├─ getopt.h
    │    │    ├─ printfunction.h
    │    │    ├─ stdafx.cpp
    │    │    ├─ stdafx.h
    │    │    ├─ targetver.h
    │    │    └─ x64
    │    │           ├─ Debug
    │    │           └─ Release
    │    └─ WebScan.sln
    └─ app
           ├─ WebScan.exe
           └─ dict
                  ├─ asp.txt
                  ├─ aspx.txt
                  ├─ dir.txt
                  ├─ mdb.txt
                  └─ php.txt

## DISCLAIMER

<p align="center">
  TO BE USED FOR EDUCATIONAL PURPOSES ONLY
</p>