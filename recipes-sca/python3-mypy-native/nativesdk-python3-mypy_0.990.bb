SUMMARY = "Optional static typing for Python 3 and 2 (PEP 484)"
HOMEPAGE = "https://github.com/python/mypy"

DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6ba8ec528da02073b7e1f4124c0f836f"

DEPENDS += "\
    nativesdk-python3-mypy-extensions \
    nativesdk-python3-typed-ast \
    nativesdk-python3-typing-extensions \
    python3-tomli-native \
"

SRC_URI[md5sum] = "9650b18e1009358fd7db2078c985d707"
SRC_URI[sha256sum] = "72382cb609142dba3f04140d016c94b4092bc7b4d98ca718740dc989e5271b8d"

PYPI_PACKAGE = "mypy"

inherit pypi

inherit sca-description
inherit setuptools3
inherit nativesdk
SCA_TOOL_DESCRIPTION = "mypy"
RDEPENDS:${PN}:class-nativesdk += "\
    nativesdk-python3-core \
    nativesdk-python3-crypt \
    nativesdk-python3-difflib \
    nativesdk-python3-distutils \
    nativesdk-python3-io \
    nativesdk-python3-json \
    nativesdk-python3-multiprocessing \
    nativesdk-python3-mypy-extensions \
    nativesdk-python3-netclient \
    nativesdk-python3-pickle \
    nativesdk-python3-pytest \
    nativesdk-python3-shell \
    nativesdk-python3-stringold \
    nativesdk-python3-tests \
    nativesdk-python3-threading \
    nativesdk-python3-typed-ast \
    nativesdk-python3-typing-extensions \
    nativesdk-python3-unittest \
"