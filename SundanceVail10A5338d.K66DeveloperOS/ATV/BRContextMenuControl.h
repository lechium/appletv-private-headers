/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRBoxListControl;

__attribute__((visibility("hidden")))
@interface BRContextMenuControl : BRControl {
	BRControl *_endPositionControl;	// 80 = 0x50
	BRControl *_startPositionControl;	// 84 = 0x54
	BRControl *_dimControl;	// 88 = 0x58
	BRControl *_dimPanel;	// 92 = 0x5c
	CGRect _endPositionControlFrame;	// 96 = 0x60
	CGRect _startPositionControlFrame;	// 112 = 0x70
	CGRect _dimControlFrame;	// 128 = 0x80
	BRControl *_container;	// 144 = 0x90
	BRBoxListControl *_contextBox;	// 148 = 0x94
	BRBoxListControl *_detailContextBox;	// 152 = 0x98
	BOOL showingDetailContextBox;	// 156 = 0x9c
	int _dimOption;	// 160 = 0xa0
	NSTimer *_autoDismissTimer;	// 164 = 0xa4
}
@property(retain) BRControl *dimControl;	// G=0x29748d; S=0x297451; converted property
@property(assign) int dimOption;	// G=0x2974bd; S=0x29749d; converted property
@property(retain) BRControl *endPositionControl;	// G=0x297441; S=0x297405; converted property
@property(assign) BOOL isVisible;	// G=0x2979c1; S=0x2978b1; converted property
@property(retain) id providers;	// G=0x297309; S=0x2972cd; converted property
@property(retain) BRControl *startPositionControl;	// G=0x2973f5; S=0x2973b9; converted property
- (id)init;	// 0x296f39
- (void)_addAnimationsForDisplayState:(BOOL)displayState;	// 0x297a11
- (void)_autoDismissTimerFired:(id)fired;	// 0x2979ed
- (CGRect)_dimControlFrame;	// 0x298301
- (void)_dissmissAnimationComplete;	// 0x298041
- (CGRect)_endPositionControlFrame;	// 0x298069
- (void)_flipToContextMenu;	// 0x298511
- (void)_flipToDetailContextMenu;	// 0x29844d
- (CGRect)_startPositionControlFrame;	// 0x2981b5
- (BOOL)brEventAction:(id)action;	// 0x2971b1
- (void)controlWasDeactivated;	// 0x29715d
- (void)dealloc;	// 0x297095
// converted property getter: - (id)dimControl;	// 0x29748d
// converted property getter: - (int)dimOption;	// 0x2974bd
// converted property getter: - (id)endPositionControl;	// 0x297441
// converted property getter: - (BOOL)isVisible;	// 0x2979c1
- (void)layoutSubcontrols;	// 0x2974cd
// converted property getter: - (id)providers;	// 0x297309
- (void)setDetailProviders:(id)providers;	// 0x297329
// converted property setter: - (void)setDimControl:(id)control;	// 0x297451
// converted property setter: - (void)setDimOption:(int)option;	// 0x29749d
// converted property setter: - (void)setEndPositionControl:(id)control;	// 0x297405
// converted property setter: - (void)setIsVisible:(BOOL)visible;	// 0x2978b1
- (void)setProvider:(id)provider;	// 0x29728d
// converted property setter: - (void)setProviders:(id)providers;	// 0x2972cd
// converted property setter: - (void)setStartPositionControl:(id)control;	// 0x2973b9
// converted property getter: - (id)startPositionControl;	// 0x2973f5
@end
