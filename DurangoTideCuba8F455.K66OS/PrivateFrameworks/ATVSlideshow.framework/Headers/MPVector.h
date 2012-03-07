/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPVector : NSObject {
	float _vector[4];	// 4 = 0x4
	int _length;	// 20 = 0x14
}
@property(retain) id values;	// G=0x33c707e9; S=0x33c70871; converted property
@property(assign) XXStruct_Te64nB vector;	// G=0x33c70a39; S=0x33c709d5; converted property
+ (id)vectorFromCGColor:(CGColorRef)cgcolor;	// 0x33c70439
+ (id)vectorFromMCVector:(XXStruct_Te64nB)mcvector;	// 0x33c70965
+ (id)vectorFromString:(id)string;	// 0x33c70381
+ (id)vectorWithValues:(id)values;	// 0x33c703f1
- (id)init;	// 0x33c7049d
- (id)initWithCoder:(id)coder;	// 0x33c70569
- (CGColorRef)CGColor;	// 0x33c707a1
- (id)CIColorString;	// 0x33c70661
- (id)copyWithZone:(NSZone *)zone;	// 0x33c704cd
- (int)count;	// 0x33c705e1
- (void)encodeWithCoder:(id)coder;	// 0x33c70539
- (BOOL)isEqualTo:(id)to;	// 0x33c708ed
// converted property setter: - (void)setValues:(id)values;	// 0x33c70871
// converted property setter: - (void)setVector:(XXStruct_Te64nB)vector;	// 0x33c709d5
- (id)string;	// 0x33c705f1
- (float)valueAtIndex:(int)index;	// 0x33c705cd
// converted property getter: - (id)values;	// 0x33c707e9
// converted property getter: - (XXStruct_Te64nB)vector;	// 0x33c70a39
@end
