#!/bin/bash
set -eu

mkdir -p m4
touch NEWS AUTHORS ChangeLog
autoreconf -vif
