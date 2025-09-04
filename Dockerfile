FROM ubuntu:24.04
RUN apt update -y
RUN apt install -y clang-19 cmake lsb-release
ENV CXX=clang++-19
WORKDIR /naut
ADD . .
