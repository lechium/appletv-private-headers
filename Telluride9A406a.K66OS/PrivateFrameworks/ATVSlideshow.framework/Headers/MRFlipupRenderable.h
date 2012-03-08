/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRImage;

@interface MRFlipupRenderable : NSObject {
	float zPosition;	// 4 = 0x4
	BOOL needsBlend;	// 8 = 0x8
	float modelViewMatrix[16];	// 12 = 0xc
	float color;	// 76 = 0x4c
	float opacity;	// 80 = 0x50
	MRImage *slide;	// 84 = 0x54
	MRCroppingSprite *sprite;	// 88 = 0x58
	CGPoint position;	// 92 = 0x5c
	CGSize size;	// 100 = 0x64
	float flippedModelViewMatrix[16];	// 108 = 0x6c
	MRCroppingSprite *reflectionSprite;	// 172 = 0xac
	CGPoint reflectionPosition;	// 176 = 0xb0
}
@property(retain, nonatomic) MRCroppingSprite *reflectionSprite;	// G=0x34aab501; S=0x34aab511; @synthesize
@property(retain, nonatomic) MRImage *slide;	// G=0x34aab499; S=0x34aab4a9; @synthesize
@property(retain, nonatomic) MRCroppingSprite *sprite;	// G=0x34aab4cd; S=0x34aab4dd; @synthesize
- (void)dealloc;	// 0x34aab405
// declared property getter: - (id)reflectionSprite;	// 0x34aab501
// declared property setter: - (void)setReflectionSprite:(id)sprite;	// 0x34aab511
// declared property setter: - (void)setSlide:(id)slide;	// 0x34aab4a9
// declared property setter: - (void)setSprite:(id)sprite;	// 0x34aab4dd
// declared property getter: - (id)slide;	// 0x34aab499
// declared property getter: - (id)sprite;	// 0x34aab4cd
@end

