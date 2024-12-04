# Use the official Ubuntu image as the base
FROM ubuntu:latest

# Update the package list and install build-essential (includes GCC)
RUN apt-get update && apt-get install -y \
    build-essential \
    && apt-get clean

# Set the working directory inside the container
WORKDIR /workspace

# This directory will be mounted from the host system at runtime