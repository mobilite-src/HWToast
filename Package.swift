// swift-tools-version: 5.10

import PackageDescription

let package = Package(
    name: "HWToast",
    platforms: [
        .iOS(.v15),
    ],
    products: [
        .library(
            name: "HWToast",
            targets: ["HWToast"]),
    ],
    targets: [
        .target(
            name: "HWToast",
            resources: [.process("HWToastImage.bundle")],
            publicHeadersPath: "include",
            cSettings: [
                .headerSearchPath("Sources/**/*.{h,m}")
            ]
        )
    ],
    swiftLanguageVersions: [
        .v5
    ]
)
