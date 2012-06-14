/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"

@class MRCroppingSprite, MRImage;

@interface MRFlipupRenderable : MUPoolObject {
	float zPosition;	// 8 = 0x8
	BOOL needsBlend;	// 12 = 0xc
	float modelViewMatrix[16];	// 16 = 0x10
	float color;	// 80 = 0x50
	float opacity;	// 84 = 0x54
	MRImage *slide;	// 88 = 0x58
	MRCroppingSprite *sprite;	// 92 = 0x5c
	CGPoint position;	// 96 = 0x60
	CGSize size;	// 104 = 0x68
	float flippedModelViewMatrix[16];	// 112 = 0x70
	MRCroppingSprite *reflectionSprite;	// 176 = 0xb0
	CGPoint reflectionPosition;	// 180 = 0xb4
}
@property(retain, nonatomic) MRCroppingSprite *reflectionSprite;	// G=0x3659eeed; S=0x3659eefd; @synthesize
@property(retain, nonatomic) MRImage *slide;	// G=0x3659ee85; S=0x3659ee95; @synthesize
@property(retain, nonatomic) MRCroppingSprite *sprite;	// G=0x3659eeb9; S=0x3659eec9; @synthesize
+ (XXStruct_raCX$B *)poolInfo;	// 0x3659edd1
- (void)dealloc;	// 0x3659ee45
- (void)purge;	// 0x3659eddd
// declared property getter: - (id)reflectionSprite;	// 0x3659eeed
// declared property setter: - (void)setReflectionSprite:(id)sprite;	// 0x3659eefd
// declared property setter: - (void)setSlide:(id)slide;	// 0x3659ee95
// declared property setter: - (void)setSprite:(id)sprite;	// 0x3659eec9
// declared property getter: - (id)slide;	// 0x3659ee85
// declared property getter: - (id)sprite;	// 0x3659eeb9
@end

