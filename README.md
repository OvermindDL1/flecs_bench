To just get going then just `git clone ...` this and in the directory just run `./build-run.sh`, and you can pass any usual nonius options to it as well (can start with `--help` if curious).


To do things manually then create the build system with something like (or ninja or whatever, this will use your system default):
```sh
rm -r Build/release; cmake -H. -B"Build/release" -DCMAKE_BUILD_TYPE=Release
```

Then build it with (or add like `-j9` for 9 jobs with MakeFiles or so, etc...):
```sh
cmake --build "Build/release"
```

