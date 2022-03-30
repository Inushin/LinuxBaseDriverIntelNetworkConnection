#!/bin/bash

cd ./e1000e-3.8.4/src
sudo make install
sudo modprobe e1000e insmod e1000e

