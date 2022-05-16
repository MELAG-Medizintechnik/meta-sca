SRC_URI += "https://proxy.golang.org/github.com/sagikazarmark/crypt/@v/v0.5.0.zip;srcoutput=github.com/sagikazarmark/crypt;srcinput=github.com/sagikazarmark/crypt@v0.5.0;downloadfilename=github-com-sagikazarmark-crypt-0.5.0.zip;name=github-com-sagikazarmark-crypt"
SRC_URI[github-com-sagikazarmark-crypt.sha256sum] = "1f3e20fb4b410d40e60c0e6450d9515cc17a4880ee8c17484eddfea7faadb4f0"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/sagikazarmark/crypt/LICENSE;md5=351758e884debeafa2022e49cac2b154 \
"

GOSRC_INCLUDEGUARD += "github.com-sagikazarmark-crypt-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'cloud.google.com-go-firestore-sources.inc', '', 'cloud.google.com-go-firestore-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-hashicorp-consul-api-sources.inc', '', 'github.com-hashicorp-consul-api-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'go.etcd.io-etcd-client-v2-sources.inc', '', 'go.etcd.io-etcd-client-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-crypto-sources.inc', '', 'golang.org-x-crypto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-api-sources.inc', '', 'google.golang.org-api-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}