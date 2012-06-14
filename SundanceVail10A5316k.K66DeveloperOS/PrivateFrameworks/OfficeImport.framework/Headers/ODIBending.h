/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODIBending : NSObject {
@private
	float mSpaceWidth;	// 4 = 0x4
	float mSpaceHeight;	// 8 = 0x8
	BOOL mWithArrows;	// 12 = 0xc
	float mRectHeight;	// 16 = 0x10
	unsigned mMaxNodeCount;	// 20 = 0x14
	unsigned mMaxColumnCount;	// 24 = 0x18
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x312e9b91
+ (unsigned)mapLogicalBoundsWithShapeSize:(CGSize)shapeSize spaceSize:(CGSize)size maxNodeCount:(unsigned)count maxColumnCount:(unsigned)count4 state:(id)state;	// 0x312ea319
- (id)initWithArrows:(BOOL)arrows;	// 0x312e9d9d
- (void)mapWithState:(id)state;	// 0x312e9e91
- (void)setMaxColumnCount:(unsigned)count;	// 0x312e9e81
- (void)setMaxNodeCount:(unsigned)count;	// 0x312e9e71
- (void)setRectHeight:(float)height;	// 0x312e9e61
@end

