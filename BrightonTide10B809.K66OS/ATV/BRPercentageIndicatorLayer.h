/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRHorizontalSegmentedWidget.h"

@class BRImageControl, BRImage;

__attribute__((visibility("hidden")))
@interface BRPercentageIndicatorLayer : BRHorizontalSegmentedWidget {
	BRImageControl *_centerOnLayer;	// 124 = 0x7c
	BRImage *_leftOnImage;	// 128 = 0x80
	BRImage *_leftOffImage;	// 132 = 0x84
	BRImage *_rightOnImage;	// 136 = 0x88
	BRImage *_rightOffImage;	// 140 = 0x8c
	BRImage *_centerOnImage;	// 144 = 0x90
	BRImage *_centerOffImage;	// 148 = 0x94
	float _percentage;	// 152 = 0x98
}
@property(assign) float percentage;	// G=0x35b809; S=0x35b819; converted property
- (id)initWithLeftOnPath:(id)leftOnPath leftOffPath:(id)path centerOnPath:(id)path3 centerOffPath:(id)path4 rightOnPath:(id)path5 rightOffPath:(id)path6;	// 0x35b49d
- (void)_updateProgressToPercentage:(float)percentage;	// 0x35b9f5
- (id)accessibilityLabel;	// 0x35bb9d
- (void)dealloc;	// 0x35b741
- (void)layoutSubcontrols;	// 0x35b895
// converted property getter: - (float)percentage;	// 0x35b809
// converted property setter: - (void)setPercentage:(float)percentage;	// 0x35b819
@end
