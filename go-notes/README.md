### Go Basics 

* Go is a cross-platform, open source programming language.
* Go can be used to create high-performance applications.
* Go is a fast, statically typed, compiled language known for its simplicity and efficiency.
* Go was developed at Google by Robert Griesemer, Rob Pike, and Ken Thompson in 2007.
* Go's syntax is similar to C++.
* Go has `garbage collection , Fast compile time, supports concurrency through go routines and channels`
* go doesn't support oops

### Go Features

### Go Basics

* first statement of go code should be `package` 

* creating and running the go lang application

    ```bash
    mkdir go-basics
    cd go-basics
    go mod init go-basics # it will create a go.mod file a versioning and maintaining file
    touch main.go # create the main.go file
    ```

    * You can find the `main.go` file [here](./go-basics/main.go).

    * to run the go code use the following command

    ```bash
        go run main.go
    ```
*  variables in golang 

    * variable declaration syntax 

    ```bash
    var variablename type = value
    ```

    * we can also initialize with := sign to make the compiler infere the data type from the assigned value

        ```go
        name:="sakthi"
        ```

        * it can be used only inside function

    * 