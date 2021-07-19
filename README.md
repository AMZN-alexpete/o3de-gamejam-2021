# O3DE GameJam 2021 Project 


## Prerequisites

- O3DE is installed and configured on your computer
- Git LFS is installed

## Installing

If you don't want to build the project, grab the release archive from the releases section, extract it and run it.

## Clone the repository 

```shell
> git clone https://github.com/AMZN-alexpete/o3de-gamejam-2021.git
```

## Configuring and Building

```shell
# register the project with O3DE
> C:/Path/To/o3de/scripts/o3de.bat register -p C:/Path/To/o3de-gamejam-2021

# configure 
> cmake -S C:/Path/To/o3de-gamejam-2021 -b C:/Path/To/o3de-gamejam-2021/build/windows_vs2019 -G "Visual Studio 16" -DLY_3RDPARTY_PATH="C:/3rdparty"

# build 
> cmake --build C:/Path/To/o3de-gamejam-2021/build_vs2019 --target Game.GameLauncher --configure profile -- /m /nologo 
```


## License

For terms please see the LICENSE*.TXT file at the root of this distribution.

