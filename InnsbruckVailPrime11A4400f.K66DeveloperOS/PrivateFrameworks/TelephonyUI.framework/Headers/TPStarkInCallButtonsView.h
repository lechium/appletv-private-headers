/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIKit/UIView.h>
#import "TelephonyUI-Structs.h"

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol TPStarkInCallButtonsViewDelegate;

@interface TPStarkInCallButtonsView : UIView {
	int _highlightedControlIndex;	// 96 = 0x60
	int _buttonsMode;	// 100 = 0x64
	id<TPStarkInCallButtonsViewDelegate> _delegate;	// 104 = 0x68
	float _buttonDistributionScalingFactor;	// 108 = 0x6c
	NSMutableDictionary *_buttonsDictionary;	// 112 = 0x70
	NSArray *_buttonsArray;	// 116 = 0x74
	NSMutableArray *_buttonDividerViews;	// 120 = 0x78
}
@property(assign) float buttonDistributionScalingFactor;	// G=0x329d15cd; S=0x329d15e1; @synthesize=_buttonDistributionScalingFactor
@property(retain) NSMutableArray *buttonDividerViews;	// G=0x329d1681; S=0x329d1695; @synthesize=_buttonDividerViews
@property(retain) NSArray *buttonsArray;	// G=0x329d163d; S=0x329d1651; @synthesize=_buttonsArray
@property(retain) NSMutableDictionary *buttonsDictionary;	// G=0x329d15f9; S=0x329d160d; @synthesize=_buttonsDictionary
@property(assign) int buttonsMode;	// G=0x329d1575; S=0x329d1589; @synthesize=_buttonsMode
@property(assign) id<TPStarkInCallButtonsViewDelegate> delegate;	// G=0x329d15a1; S=0x329d15b5; @synthesize=_delegate
@property(assign, nonatomic) int highlightedControlIndex;	// G=0x329d0009; S=0x329cff25; 
@property(readonly, assign) int numberOfControls;	// G=0x329d00a5; 
- (id)initWithFrame:(CGRect)frame;	// 0x329cfbe1
- (void)applyHorizontalPositioningConstraintWithFraction:(float)fraction forButton:(id)button;	// 0x329d0e21
- (void)applyHorizontalPositioningConstraintWithFraction:(float)fraction forDividerView:(id)dividerView;	// 0x329d0ffd
// declared property getter: - (float)buttonDistributionScalingFactor;	// 0x329d15cd
// declared property getter: - (id)buttonDividerViews;	// 0x329d1681
- (id)buttonForButtonType:(int)buttonType createIfNecessary:(BOOL)necessary createWithHorizontalPositionFraction:(float)horizontalPositionFraction;	// 0x329d1215
- (void)buttonWasTapped:(id)tapped;	// 0x329d1529
// declared property getter: - (id)buttonsArray;	// 0x329d163d
// declared property getter: - (id)buttonsDictionary;	// 0x329d15f9
// declared property getter: - (int)buttonsMode;	// 0x329d1575
- (void)callCenterModelStateChangedNotification:(id)notification;	// 0x329d1555
- (void)dealloc;	// 0x329cfdb9
// declared property getter: - (id)delegate;	// 0x329d15a1
- (float)distributedFractionForUndistributedFraction:(float)undistributedFraction;	// 0x329d10c5
- (id)existingButtonsNotInArray:(id)array;	// 0x329d13f5
// declared property getter: - (int)highlightedControlIndex;	// 0x329d0009
- (id)keyForButtonType:(int)buttonType;	// 0x329d1459
- (int)nextHighlightableControlFromIndex:(int)index ascending:(BOOL)ascending;	// 0x329cfe8d
// declared property getter: - (int)numberOfControls;	// 0x329d00a5
- (void)performActionForHighlightedControl;	// 0x329d00cd
- (void)phoneCallStatusChangedNotification:(id)notification;	// 0x329d1565
- (void)removeButtons:(id)buttons;	// 0x329d0d11
// declared property setter: - (void)setButtonDistributionScalingFactor:(float)factor;	// 0x329d15e1
// declared property setter: - (void)setButtonDividerViews:(id)views;	// 0x329d1695
// declared property setter: - (void)setButtonsArray:(id)array;	// 0x329d1651
// declared property setter: - (void)setButtonsDictionary:(id)dictionary;	// 0x329d160d
// declared property setter: - (void)setButtonsMode:(int)mode;	// 0x329d1589
- (void)setButtonsMode:(int)mode animated:(BOOL)animated;	// 0x329d0191
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x329d15b5
// declared property setter: - (void)setHighlightedControlIndex:(int)index;	// 0x329cff25
- (void)setMuted:(BOOL)muted;	// 0x329d0155
- (void)updateButtonsForCallModelState;	// 0x329d1105
@end
