/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by an internal plugin build system
 */

#ifdef RN_DISABLE_OSS_PLUGIN_HEADER

// FB Internal: FBRCTImagePlugins.h is autogenerated by the build system.
#import <React/FBRCTImagePlugins.h>

#else

// OSS-compatibility layer

#import <Foundation/Foundation.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type-c-linkage"

#ifdef __cplusplus
extern "C" {
#endif

// RCTTurboModuleManagerDelegate should call this to resolve module classes.
Class RCTImageClassProvider(const char* name);

// Lookup functions
Class RCTGIFImageDecoderCls(void) __attribute__((used));
Class RCTImageEditingManagerCls(void) __attribute__((used));
Class RCTImageLoaderCls(void) __attribute__((used));
Class RCTImageStoreManagerCls(void) __attribute__((used));
Class RCTLocalAssetImageLoaderCls(void) __attribute__((used));

#ifdef __cplusplus
}
#endif

#pragma GCC diagnostic pop

#endif // RN_DISABLE_OSS_PLUGIN_HEADER
