# Fizz Buzz: C++

A neat command-line application to demonstrate basic C++ syntax.

## What is Fizz Buzz?

**Fizz buzz** is a group word game for children to teach them about division.
Players take turns to count incrementally, with the following rules:

* For numbers divisible by `3`, say `fizz`.
* For numbers divisible by `5`, say `buzz`.
* For numbers is divisible by both, say `fizzbuzz`.
* For other numbers, say the number.

## Example

```
1
2
fizz
4
buzz
fizz
7
8
fizz
10
11
fizz
13
14
fizzbuzz
```

## Usage

* Clone the repository and `cd` into the directory.
* Run `make compile` to create an executable.
  * You must have the following packages installed: `make, g++`.
* Run `fizz-buzz` with a numeric argument; `./fizz-buzz 15`.

### Docker Compose

To deploy the project on a dockerized environment,

* Clone this repository and `cd` into the directory.
* Run `docker compose up -d --build`.
* Run `make ssh`.

Now you can run the application as mentioned in the _Usage_ section.