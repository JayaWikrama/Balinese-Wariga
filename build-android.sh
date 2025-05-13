#!/bin/bash

ANDROID_PLATFORM=21

PROJECT_NAME=warigabali

OUTPUT_DIR="$(pwd)/android/jniLibs"

ABIS=("armeabi-v7a" "arm64-v8a" "x86" "x86_64")

for ABI in "${ABIS[@]}"; do

    echo ">> Building for ABI: $ABI"

    rm "$OUTPUT_DIR/${ABI}/lib${PROJECT_NAME}.so"

    BUILD_DIR="build-android-${ABI}"
    rm -rf "$BUILD_DIR"
    mkdir -p "$BUILD_DIR"

    pushd "$BUILD_DIR"

    cmake ../ \
        -DCMAKE_TOOLCHAIN_FILE="$NDK_PATH/build/cmake/android.toolchain.cmake" \
        -DANDROID_ABI="$ABI" \
        -DANDROID_PLATFORM=android-${ANDROID_PLATFORM} \
        -DCMAKE_BUILD_TYPE=Release \

    cmake --build . --target ${PROJECT_NAME}-lib -j$(nproc)

    mkdir -p "$OUTPUT_DIR/${ABI}"
    cp "lib${PROJECT_NAME}.so" "$OUTPUT_DIR/${ABI}/"

    popd

    rm -rf "$BUILD_DIR"
done

echo ">> Done. Output at: $OUTPUT_DIR"
