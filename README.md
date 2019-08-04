# OpenCV Playground

## Installation

```shell script
conda create -n opencv python=3.7
conda activate opencv

conda install -c anaconda cmake
conda install -c omgarcia gcc-6 

conda install -c conda-forge opencv
```

## Build

```shell script
$ mkdir build && cd build
$ cmake .. -DCMAKE_PREFIX_PATH=${HOME}/anaconda3/envs/opencv
$ make
```