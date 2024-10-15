// swift-tools-version:5.3
import PackageDescription

let package = Package(
   name: "accessibility",
   platforms: [
     .iOS(.v14),
   ],
   products: [
      .library(name: "accessibility", targets: ["accessibility"])
   ],
   targets: [
      .binaryTarget(
         name: "Accessibility",
         url: "https://github.com/alejndrofrnndz/kmpSPMTest/releases/download/0.0.1/accessibility.xcframework.zip",
         checksum:"b689c77c010ec4c28ba969921deb5713a7a144136ffd6d31620d8a34c1bd71b9")
   ]
)