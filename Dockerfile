FROM ubuntu:24.04
RUN apt update -y
RUN apt install -y clang-19 cmake lsb-release git
ENV CXX=clang++-19
WORKDIR /naut
ADD . .
RUN cmake -B build
