/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRProgressBarWidget, NSString, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSWUProgressView : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
	BRProgressBarWidget *_progress;	// 52 = 0x34
	BRTextControl *_text;	// 56 = 0x38
	NSString *_secondaryProgressImagePath;	// 60 = 0x3c
	float _lastProgressPercentage;	// 64 = 0x40
	float _lastAXProgressPercentage;	// 68 = 0x44
}
@property(readonly, retain) NSString *secondaryProgressImagePath;	// G=0x301d331d; converted property
- (id)init;	// 0x301d296d
- (id)initForUpdateProgress;	// 0x301d2a81
- (id)accessibilityLabel;	// 0x301d332d
- (void)controlWasActivated;	// 0x301d2c7d
- (void)dealloc;	// 0x301d2bf5
- (void)layoutSubcontrols;	// 0x301d2cb1
// converted property getter: - (id)secondaryProgressImagePath;	// 0x301d331d
- (void)setUpdatePercentage:(float)percentage;	// 0x301d3295
@end
