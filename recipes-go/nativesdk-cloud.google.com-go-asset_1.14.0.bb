SUMMARY = "go.mod: cloud.google.com/go/asset"
HOMEPAGE = "https://pkg.go.dev/cloud.google.com/go/asset"
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require cloud.google.com-go-asset-sources.inc

EXTRA_DEPENDS += "\
    nativesdk-cloud.google.com-go-accesscontextmanager \
    nativesdk-cloud.google.com-go-iam \
    nativesdk-cloud.google.com-go-longrunning \
    nativesdk-cloud.google.com-go-orgpolicy \
    nativesdk-cloud.google.com-go-osconfig \
    nativesdk-github.com-googleapis-gax-go-v2 \
    nativesdk-google.golang.org-api \
    nativesdk-google.golang.org-genproto \
    nativesdk-google.golang.org-genproto-googleapis-api \
    nativesdk-google.golang.org-genproto-googleapis-rpc \
    nativesdk-google.golang.org-grpc \
    nativesdk-google.golang.org-protobuf \
"
GO_IMPORT = "cloud.google.com/go/asset"
inherit gosrc
inherit nativesdk