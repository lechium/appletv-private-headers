/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVSystemFeedResources : NSObject {
@private
	NSDictionary *_bundlesByNamespace;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x3020f779
- (id)init;	// 0x3020f7dd
- (id)_computedResourceNamed:(id)named;	// 0x3020fbe5
- (id)_resourceNamed:(id)named inBundles:(id)bundles;	// 0x3020fb41
- (void)dealloc;	// 0x3020fa59
- (id)feedResourceNamed:(id)named inNamespace:(id)aNamespace;	// 0x3020faa5
@end

