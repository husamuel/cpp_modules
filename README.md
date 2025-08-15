
<p align="center">
	<a href="#about">About</a> •
	<a href="#rules">Rules</a> •
	<a href="forbidden">Forbidden</a> •
	<a href="#contributing">Contributing</a> •
	<a href="#license">License</a>
</p>

## ABOUT
| Modules | Description |
| :-- | :-- |
| **[CPP 00](https://github.com/husamuel/cpp_modules/tree/main/C-Module-00)** | Understand the specificities of the language when compared to C. |
| **[CPP 01](https://github.com/husamuel/cpp_modules/tree/main/C-Module-01)** | Memory allocation, reference, pointers to members and the usage of the switch. |
| **[CPP 02](https://github.com/husamuel/cpp_modules/tree/main/C-Module-02)** | Ad-hoc polymorphism, overloads and orthodox canonical classes. |
| **[CPP 03](https://github.com/husamuel/cpp_modules/tree/main/C-Module-03)** | Inheritance. |
| **[CPP 04](https://github.com/husamuel/cpp_modules/tree/main/C-Module-04)** | Subtype polymorphism, abstract classes and interfaces. |
| **CPP 05** | Try/Catch and Exceptions. |
| **CPP 06** | Different casts. |
| **CPP 07** | Templates. |
| **CPP 08** | Templated containers, iterators and algorithms. |
| **CPP 09** | Containers. |

## RULES
```
- Compile with `c++` + `-Wall -Wextra -Werror` + `-std=c++98`;
- Exercise directories will be named: `ex00`, `ex01`, ... , `exn`;
- Class names in UpperCamelCase format;
- Files containing class code will always be named according to the class name;
- Output messages must be ended by a `\n` character (except when explicitly stated otherwise);
- No coding style is enforced in the C++ modules;
- You are allowed to use almost everything from the standard library;
```

## FORBIDDEN
```
- Can’t use any other external library;
- C++11 (and derived forms) and Boost libraries are forbidden;
- The following functions are forbidden too: `*printf()`, `*alloc()` and `free()`;
- Using namespace `<ns_name>` and friend keywords are forbidden;
- You are allowed to use the STL in the Modules 08 and 09 only. That means:
  - No Containers (vector/list/map/and so forth);
  - No Algorithms (anything that requires to include the `<algorithm>` header);
- When you allocate memory (by using the `new` keyword), you must avoid memory leaks;
- From Module 02 to Module 09, your classes must be designed in the Orthodox Canonical Form (except when explicitly stated otherwise);
- Any function implementation put in a header file (except for function templates) means 0 to the exercise;
- You should be able to use each of your headers independently from others. They must include all the dependencies they need;
- You must avoid the problem of double inclusion by adding include guards;
```

## CONTRIBUTING

If you find any issues or have suggestions for improvements, feel free to fork the repository and open an issue or submit a pull request.

## LICENSE

This project is available under the MIT License. For further details, please refer to the [LICENSE](https://github.com/jotavare/cpp_modules/blob/master/LICENSE) file.
