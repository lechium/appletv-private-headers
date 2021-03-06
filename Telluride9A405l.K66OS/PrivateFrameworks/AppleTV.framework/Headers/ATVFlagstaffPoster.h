/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"

@class BRImageControl, BRReflectionControl, BRAsyncImageControl, ATVFlagstaffPosterHeader, ATVFlagstaffPosterBottomOverlay;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPoster : BRControl <BRMediaShelfViewCell> {
@private
	BRReflectionControl *_reflectionControl;	// 48 = 0x30
	int _style;	// 52 = 0x34
	ATVFlagstaffPosterHeader *_header;	// 56 = 0x38
	BRImageControl *_backgroundImageControl;	// 60 = 0x3c
	BRAsyncImageControl *_imageControl;	// 64 = 0x40
	ATVFlagstaffPosterBottomOverlay *_bottomOverlay;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRImageControl *backgroundImageControl;	// G=0x35d80b81; @synthesize=_backgroundImageControl
@property(readonly, assign, nonatomic) ATVFlagstaffPosterBottomOverlay *bottomOverlay;	// G=0x35d80ba1; @synthesize=_bottomOverlay
@property(readonly, assign, nonatomic) ATVFlagstaffPosterHeader *header;	// G=0x35d80b71; @synthesize=_header
@property(readonly, assign, nonatomic) BRAsyncImageControl *imageControl;	// G=0x35d80b91; @synthesize=_imageControl
@property(assign, nonatomic) int style;	// G=0x35d80b61; S=0x35d80789; @synthesize=_style
+ (id)flagstaffPosterWithStyle:(int)style;	// 0x35d8060d
- (id)init;	// 0x35d80649
- (id)initWithStyle:(int)style;	// 0x35d8065d
- (CGRect)_contentFrame;	// 0x35d80bb1
- (void)_imageControlImageReady:(id)ready;	// 0x35d80fa1
- (void)_setStyle:(int)style;	// 0x35d80c4d
// declared property getter: - (id)backgroundImageControl;	// 0x35d80b81
// declared property getter: - (id)bottomOverlay;	// 0x35d80ba1
- (void)dealloc;	// 0x35d806bd
- (CGRect)focusCursorFrame;	// 0x35d807b5
// declared property getter: - (id)header;	// 0x35d80b71
- (void)hideTextLayers;	// 0x35d8084d
// declared property getter: - (id)imageControl;	// 0x35d80b91
- (BOOL)isAccessibilityElement;	// 0x35d80b5d
- (void)layoutSubcontrols;	// 0x35d80895
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x35d80851
// declared property setter: - (void)setStyle:(int)style;	// 0x35d80789
// declared property getter: - (int)style;	// 0x35d80b61
@end

