SRC_URI += "https://proxy.golang.org/modernc.org/libc/@v/v1.22.6.zip;srcoutput=modernc.org/libc;srcinput=modernc.org/libc@v1.22.6;downloadfilename=modernc-org-libc-1.22.6.zip;name=modernc-org-libc"
SRC_URI[modernc-org-libc.sha256sum] = "1dfe9d0293eb17cf6cc473ab6b9aea8196499294f4d2ae2cf3889a357e6f79c5"

GOSRC_LICENSE += "\
    BSD-3-Clause \
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/modernc.org/libc/LICENSE-GO;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707 \
    file://src/modernc.org/libc/LICENSE;md5=e8aca590db3d9304f507bcd5fe4de5a0 \
    file://src/modernc.org/libc/honnef.co/go/netdb/LICENSE;md5=4ae12a3f1c5e6dd2f1511ab748cc307b \
"

GOSRC_INCLUDEGUARD += "modernc.org-libc-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-dustin-go-humanize-sources.inc', '', 'github.com-dustin-go-humanize-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-google-uuid-sources.inc', '', 'github.com-google-uuid-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-mattn-go-isatty-sources.inc', '', 'github.com-mattn-go-isatty-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-sys-sources.inc', '', 'golang.org-x-sys-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'modernc.org-mathutil-sources.inc', '', 'modernc.org-mathutil-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'modernc.org-memory-sources.inc', '', 'modernc.org-memory-sources.inc', d)}