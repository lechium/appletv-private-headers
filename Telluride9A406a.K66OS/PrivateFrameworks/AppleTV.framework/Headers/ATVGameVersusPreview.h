/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRReady.h"
#import "BRControl.h"

@class BRTextControl, NSString, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVGameVersusPreview : BRControl <BRReady> {
@private
	BRTextControl *_centerTextControl;	// 48 = 0x30
	BOOL _isReady;	// 52 = 0x34
	BRAsyncImageControl *_backgroundImageControl;	// 56 = 0x38
	BRAsyncImageControl *_leftImageControl;	// 60 = 0x3c
	BRAsyncImageControl *_rightImageControl;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BRAsyncImageControl *backgroundImageControl;	// G=0x32fca0cd; @synthesize=_backgroundImageControl
@property(copy, nonatomic) NSString *centerText;	// G=0x32fc9e85; S=0x32fc9ebd; 
@property(readonly, assign) BOOL isReady;	// G=0x32fc9e75; converted property
@property(readonly, assign, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0x32fca0dd; @synthesize=_leftImageControl
@property(readonly, assign, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0x32fca0ed; @synthesize=_rightImageControl
- (id)init;	// 0x32fc9b1d
- (id)_centerTextAttributes;	// 0x32fca0fd
- (void)_imageLoadedNotification:(id)notification;	// 0x32fca121
- (void)_setHiddenOnSubcontrols:(BOOL)subcontrols;	// 0x32fca215
// declared property getter: - (id)backgroundImageControl;	// 0x32fca0cd
// declared property getter: - (id)centerText;	// 0x32fc9e85
- (void)dealloc;	// 0x32fc9d49
- (void)getReady;	// 0x32fc9e01
// converted property getter: - (BOOL)isReady;	// 0x32fc9e75
- (void)layoutSubcontrols;	// 0x32fc9f11
// declared property getter: - (id)leftImageControl;	// 0x32fca0dd
// declared property getter: - (id)rightImageControl;	// 0x32fca0ed
// declared property setter: - (void)setCenterText:(id)text;	// 0x32fc9ebd
@end

