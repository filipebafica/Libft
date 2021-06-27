# Libft
An implemenation of libc functions from scratch.

## 🗂 Table of Contents
* [About](#-about)
* [Getting Started](#-getting-started)
* [How to Use](#-how-to-use)
* [Available Functions and Descriptions](#-available-functions-and-descriptions)
* [42 École | 42 São Paulo](#-42-école-42-são-paulo)

## 🧐 About
This is an implementation of libc functions from scratch. This project is part of 42 École/ 42 SP curriculum.\
Topics such as memory allocation, ASCII table, string manipulation, and others were addressed.

## 🏁 Getting Started
A C compiler such as `gcc` or `clang` is needed.

#### ⚙️ Installing
To compile the entire library, clone the repo, and run the commad `make`.
```
$ git clone https://github.com/librity/libft.git
$ cd libft/source
$ make
```
This is going to generate a `libft.a` file that you can compile with your source code.
```
$ gcc my_source.c libft.a
$ ./a.out
```
## 🎈 How to Use
Just call the desired function (go to [Function Descriptions](#-function-descriptions) to see all available functions).
```
ft_split("split-this-for-me-!",'-');
```
#### 👁️‍🗨️ Demonstration
To see a demonstration go to the mains folder, and compile the main of the desired function.
```
$ cd mains
$ gcc ft_split_main.c ../libft/libft.a
$ ./a.out
```
## 📋 Available Functions and Descriptions

## 🏫 42 Network | 42 São Paulo
42 École is a network of tech schools spread around the world where anyone can learn how to code for free.\
At 42 there are no teachers or classrooms, each student learn from and work with each other (peer-to-peer learning).\
To see more go to https://www.42.fr/ and https://www.42sp.org.br/.
