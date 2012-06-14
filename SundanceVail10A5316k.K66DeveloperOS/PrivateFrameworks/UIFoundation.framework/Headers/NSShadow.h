/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSShadow : NSObject <NSCopying, NSCoding> {
@private
	unsigned _shadowFlags;	// 4 = 0x4
	id _shadowColor;	// 8 = 0x8
	CGSize _shadowOffset;	// 12 = 0xc
	float _shadowBlurRadius;	// 20 = 0x14
}
@property(assign, nonatomic) float shadowBlurRadius;	// G=0x35f2eded; S=0x35f2edfd; @synthesize=_shadowBlurRadius
@property(retain, nonatomic) id shadowColor;	// G=0x35f2eb9d; S=0x35f2ebe9; @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x35f2edc1; S=0x35f2edd9; @synthesize=_shadowOffset
+ (id)defaultShadowColor;	// 0x35f2e471
+ (void)initialize;	// 0x35f2e401
+ (id)shadow;	// 0x35f2e439
- (id)initWithCoder:(id)coder;	// 0x35f2e9b9
- (id)initWithShadow:(id)shadow;	// 0x35f2e4c9
- (id)copyWithZone:(NSZone *)zone;	// 0x35f2e619
- (void)dealloc;	// 0x35f2eb51
- (id)description;	// 0x35f2ec55
- (void)encodeWithCoder:(id)coder;	// 0x35f2e8a5
- (unsigned)hash;	// 0x35f2e65d
- (BOOL)isEqual:(id)equal;	// 0x35f2e6c5
// declared property setter: - (void)setShadowBlurRadius:(float)radius;	// 0x35f2edfd
// declared property setter: - (void)setShadowColor:(id)color;	// 0x35f2ebe9
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x35f2edd9
// declared property getter: - (float)shadowBlurRadius;	// 0x35f2eded
// declared property getter: - (id)shadowColor;	// 0x35f2eb9d
// declared property getter: - (CGSize)shadowOffset;	// 0x35f2edc1
@end

