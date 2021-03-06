/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateRemoveAnimation : CAStateElement {
	NSString *_key;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *key;	// G=0x32957c45; S=0x32957c59; @synthesize=_key
- (id)initWithCoder:(id)coder;	// 0x32957b01
- (void)apply:(id)apply;	// 0x329578b5
- (id)copyWithZone:(NSZone *)zone;	// 0x32957a29
- (void)dealloc;	// 0x32957b75
- (id)debugDescription;	// 0x32957bc1
- (void)encodeWithCoder:(id)coder;	// 0x32957aa5
// declared property getter: - (id)key;	// 0x32957c45
- (id)keyPath;	// 0x32957799
- (BOOL)matches:(id)matches;	// 0x329577dd
// declared property setter: - (void)setKey:(id)key;	// 0x32957c59
@end

