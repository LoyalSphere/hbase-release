#!/usr/bin/env bash
#
# Build local environment tarball
#
# See: http://hbase.apache.org/book.html#_build_a_tarball

set -ex

git clean -fdx

mvn \
    -DskipTests \
    install

mvn \
    -DskipTests \
    package \
    assembly:single
