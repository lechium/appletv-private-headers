/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MRAsset : NSObject {
	NSString *mPath;	// 4 = 0x4
}
@property(copy) NSString *path;	// G=0x333a4125; S=0x333a4139; @synthesize=mPath
+ (id)mrAssetWithPath:(id)path;	// 0x333a405d
- (CGImageRef)CGImageForSize:(CGSize)size;	// 0x333a4121
- (void)dealloc;	// 0x333a40bd
// declared property getter: - (id)path;	// 0x333a4125
// declared property setter: - (void)setPath:(id)path;	// 0x333a4139
- (id)workingPath;	// 0x333a4101
- (id)workingPathForSize:(CGSize)size;	// 0x333a4111
@end
