/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MRPatchwork : NSObject {
	NSMutableArray *_patches;	// 4 = 0x4
}
- (id)init;	// 0x3610c32d
- (void)addPatch:(id)patch;	// 0x3610c441
- (void)dealloc;	// 0x3610c391
- (id)patchworkWithPatch:(id)patch;	// 0x3610c3e1
- (void)removeAllPatches;	// 0x3610c461
@end
