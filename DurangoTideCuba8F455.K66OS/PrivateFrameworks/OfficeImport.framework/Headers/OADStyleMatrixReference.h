/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject <NSCopying> {
@private
	unsigned long mMatrixIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x32c7c905; S=0x32c7c3c1; converted property
@property(assign) unsigned long matrixIndex;	// G=0x32c7c8c1; S=0x32c7c3b1; converted property
+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x32cd996d
- (id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x32ca20f5
- (void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;	// 0x32cd9669
- (void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;	// 0x32cd9765
- (void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;	// 0x32cd9881
// converted property getter: - (id)color;	// 0x32c7c905
- (id)copyWithZone:(NSZone *)zone;	// 0x32c8fbcd
- (void)dealloc;	// 0x32c7ebc9
// converted property getter: - (unsigned long)matrixIndex;	// 0x32c7c8c1
// converted property setter: - (void)setColor:(id)color;	// 0x32c7c3c1
// converted property setter: - (void)setMatrixIndex:(unsigned long)index;	// 0x32c7c3b1
@end
