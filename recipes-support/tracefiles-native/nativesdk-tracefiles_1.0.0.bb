SUMMARY = "A utility to find used sources from a binary using DWARF info and more"

DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=42b280e18423c22b76d77cbbc6f59b47"

SRC_URI = "git://github.com/priv-kweihmann/tracefiles.git;protocol=https;branch=master"
SRCREV = "2ad300a8776cc0624f1fced6a7efe1813ef0f197"

S = "${WORKDIR}/git"

inherit setuptools3
inherit nativesdk
