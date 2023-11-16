# Learn Docker

### Compile
```shell
$ cd LearnDocker
$ mkdir build && cd build && cmake .. && make
```

### Usage
```shell
$ cd LearnDocker/build
$ ./Mocker run ls -l
Running: ls -l 
total 52
-rw-rw-r-- 1 mi mi 13692 11月 16 14:36 CMakeCache.txt
drwxrwxr-x 5 mi mi  4096 11月 16 14:36 CMakeFiles
-rw-rw-r-- 1 mi mi  1500 11月 16 14:36 cmake_install.cmake
-rw-rw-r-- 1 mi mi  4732 11月 16 14:36 Makefile
-rwxrwxr-x 1 mi mi 18856 11月 16 14:36 Mocker
```