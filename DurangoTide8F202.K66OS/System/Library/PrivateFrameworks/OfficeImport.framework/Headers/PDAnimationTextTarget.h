/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimationShapeTarget.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PDAnimationTextTarget : PDAnimationShapeTarget {
@private
	int mType;	// 8 = 0x8
	NSRange mRange;	// 12 = 0xc
}
@property(assign) NSRange range;	// G=0x31af2a05; S=0x31a5844d; converted property
@property(assign) int type;	// G=0x31af29e5; S=0x31af29f5; converted property
- (id)init;	// 0x31a58421
- (unsigned)hash;	// 0x31af3fd9
- (BOOL)isEqual:(id)equal;	// 0x31af3ef5
// converted property getter: - (NSRange)range;	// 0x31af2a05
// converted property setter: - (void)setRange:(NSRange)range;	// 0x31a5844d
// converted property setter: - (void)setType:(int)type;	// 0x31af29f5
// converted property getter: - (int)type;	// 0x31af29e5
@end

