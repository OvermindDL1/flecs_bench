Create the build system with something like (or ninja or whatever, this will use your system default):
```sh
rm -r Build/release; cmake -H. -B"Build/release" -DCMAKE_BUILD_TYPE=Release
```

Then build it with (or add like `-j9` for 9 jobs with MakeFiles or so, etc...):
```sh
cmake --build "Build/release"
```

