# Solution Exercise 2.4

The `std::cin` have a state it is either true or false. Everything is fine when `cin` is true. False indicates that `cin` have failed. This can be used for error check of user input.

<https://github.com/HenrikSamuelsson/reading-intro-to-programming-with-cpp-for-engineers/blob/153f5f1045b95bc1ffeaa5bd6ee9ef22e54f37e3/chapter-02/exercise-04/ipcppe-ch02-ex04.cpp#L12-L17>

In the above snippet we expect the user to enter a number to be stored in a `double` if the user enters something that isn't a number so will cin fail and we print an error message.
