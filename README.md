# c-the-light

A simple docker image definition to run C programs in the resulting container.

A typical use case may be to use bind mounts to run C programs in a container, without having to install the necessary tools on the host machine, examples below.

## Usage

```bash
docker build -t ubuntu-c-env
```

To run the container, navigate to the directory containing the C source code and run the following command:

```bash
docker run --mount type=bind,source=$(pwd),target=/workspace -it ubuntu-c-env
```

Or choose a specific directory
```bash
docker run --mount type=bind,source=/Users/me/my-c-files,target=/workspace -it ubuntu-c-env
```

or

```bash
export C_WORKSPACE=/Users/me/my-c-files
docker run --mount type=bind,source=${C_WORKSPACE},target=/workspace -it ubuntu-c-env
```

If your C source code is in a file named `hello.c`, we can compile it using the following command:

```bash
gcc hello.c -o hello
```

And then run the compiled program:

```bash
./hello
```

## Example

```bash
c-the-light docker run --mount type=bind,source=${C_WORKSPACE},target=/workspace -it ubuntu-c-env
root@581af0d9f787:/workspace# gcc hello.c -o hello
root@581af0d9f787:/workspace# ./hello
Hello, World!
root@581af0d9f787:/workspace#
```

Where `hello.c` is:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
