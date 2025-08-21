#!/usr/bin/env bash
set -e
echo "Installing dev dependencies (Debian/Ubuntu)..."
sudo apt-get update
sudo apt-get install -y build-essential cmake golang-go g++ clang libbpfcc-dev \
    libelf-dev iproute2 iputils-ping tcpdump bpftool libpcap-dev
echo "Done. Please ensure you have kernel headers installed for building kernel modules."
