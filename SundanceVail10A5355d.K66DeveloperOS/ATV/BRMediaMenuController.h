/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "AppleTV-Structs.h"

@class NSString, BRTextControl, BRWaitSpinnerControl, BRFocusableImageControl, BRControl, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaMenuController : BRMenuController {
	BRControl *_previewControl;	// 140 = 0x8c
	BRControl *_previewContainer;	// 144 = 0x90
	NSString *_previewControlItemHash;	// 148 = 0x94
	BRFocusableImageControl *_actionControl;	// 152 = 0x98
	BRWaitSpinnerControl *_spinner;	// 156 = 0x9c
	float _controlDelay;	// 160 = 0xa0
	NSTimer *_controlDelayTimer;	// 164 = 0xa4
	BRTextControl *_noContentMessageControl;	// 168 = 0xa8
}
@property(retain) id noContentMessage;	// G=0x273811; S=0x27373d; converted property
@property(assign) BOOL showSpinner;	// G=0x2730c1; S=0x273019; converted property
- (id)init;	// 0x272dad
- (void)_cleanupControlDelayTimer;	// 0x274375
- (void)_controlDelayTimerHandler:(id)handler;	// 0x2743a9
- (void)_playstateChanged;	// 0x2743c9
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x2742c1
- (void)_scrollWillStart:(id)_scroll;	// 0x274291
- (void)_setDislaysActionControl:(BOOL)control;	// 0x273f29
- (void)_updateActionControl;	// 0x274131
- (void)_updateControls;	// 0x273ef9
- (void)_updateControlsWithDelay;	// 0x2742d1
- (void)_updatePreview;	// 0x273ca9
- (id)accessibilityScreenContent;	// 0x273b89
- (id)actionItemAtIndex:(long)index;	// 0x273739
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x273735
- (BOOL)allowUnplayedMark;	// 0x2736e9
- (BOOL)brEventAction:(id)action;	// 0x273541
- (void)clearPreviewController;	// 0x273685
- (void)controlWasActivated;	// 0x27393d
- (void)controlWasDeactivated;	// 0x273a85
- (void)dealloc;	// 0x272f39
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x273455
- (void)layoutSubcontrols;	// 0x2730d9
// converted property getter: - (id)noContentMessage;	// 0x273811
- (id)previewControlForItem:(long)item;	// 0x273ba9
- (void)refreshControllerForModelUpdate;	// 0x273849
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x27388d
- (void)resetPreviewController;	// 0x273645
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x27373d
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x273019
// converted property getter: - (BOOL)showSpinner;	// 0x2730c1
- (void)updatePreviewController;	// 0x273635
@end
