/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class UIWindow, UILabel, NSMutableArray, UIToolbar, NSString;
@protocol UIModalViewDelegate;

@interface UIModalView : UIView <UITextFieldDelegate> {
	id<UIModalViewDelegate> _delegate;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	UILabel *_subtitleLabel;	// 92 = 0x5c
	UILabel *_bodyTextLabel;	// 96 = 0x60
	UILabel *_taglineTextLabel;	// 100 = 0x64
	float _startX;	// 104 = 0x68
	float _startY;	// 108 = 0x6c
	id _context;	// 112 = 0x70
	int _cancelButton;	// 116 = 0x74
	int _defaultButton;	// 120 = 0x78
	int _firstOtherButton;	// 124 = 0x7c
	UIToolbar *_toolbar;	// 128 = 0x80
	UIWindow *_originalWindow;	// 132 = 0x84
	UIWindow *_dimWindow;	// 136 = 0x88
	int _suspendTag;	// 140 = 0x8c
	int _dismissButtonIndex;	// 144 = 0x90
	float _bodyTextHeight;	// 148 = 0x94
	NSMutableArray *_buttons;	// 152 = 0x98
	NSMutableArray *_textFields;	// 156 = 0x9c
	UIView *_keyboard;	// 160 = 0xa0
	UIView *_table;	// 164 = 0xa4
	UIView *_dimView;	// 168 = 0xa8
	UIView *_sheetView;	// 172 = 0xac
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateCancel : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateDidDismiss : 1;
		unsigned popupFromPoint : 1;
		unsigned extra : 20;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
	} _modalViewFlags;	// 176 = 0xb0
}
@property(assign) int alertSheetStyle;	// G=0x32e34549; S=0x32e3455d; converted property
@property(assign) BOOL blocksInteraction;	// G=0x32e34729; S=0x32e34701; converted property
@property(retain) id bodyText;	// G=0x32e2f275; S=0x32e2f0d1; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x32e2e7c9; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x32e37c65; S=0x32e37c49; 
@property(retain) id context;	// G=0x32e2ffa5; S=0x32e2ff61; converted property
@property(retain) id defaultButton;	// G=0x32e2fa6d; S=0x32e2fa2d; converted property
@property(assign) int defaultButtonIndex;	// G=0x32e37c39; S=0x32e37c1d; converted property
@property(assign, nonatomic) id<UIModalViewDelegate> delegate;	// G=0x32e37a79; S=0x32e37925; 
@property(retain) id destructiveButton;	// G=0x32e2fb65; S=0x32e2fb25; converted property
@property(assign) BOOL dimsBackground;	// G=0x32e346cd; S=0x32e346a5; converted property
@property(assign, nonatomic) BOOL groupsTextFields;	// G=0x32e2e6d9; S=0x32e2e6f1; 
@property(readonly, retain) UIView *keyboard;	// G=0x32e2f911; converted property
@property(copy, nonatomic) NSString *message;	// G=0x32e37b51; S=0x32e37b41; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x32e37bcd; 
@property(assign) int numberOfRows;	// G=0x32e34535; S=0x32e3451d; converted property
@property(assign) BOOL runsModal;	// G=0x32e34759; S=0x32e34741; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x32e30b5d; S=0x32e30b45; converted property
@property(retain) id subtitle;	// G=0x32e2f255; S=0x32e2f1d9; converted property
@property(assign) int suspendTag;	// G=0x32e346f1; S=0x32e346e1; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x32e30959; S=0x32e3093d; converted property
@property(copy, nonatomic) NSString *title;	// G=0x32e37b19; S=0x32e37a89; 
@property(assign) int titleMaxLineCount;	// G=0x32e2f345; S=0x32e2f29d; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x32e37bed; 
+ (id)_popupAlertBackground;	// 0x32c359b9
+ (BOOL)atLeastOneAlertVisible;	// 0x32e3476d
+ (CGSize)minimumSize;	// 0x32c35969
+ (void)noteOrientationChangingTo:(int)to;	// 0x32e3480d
+ (id)topMostAlert;	// 0x32e347d5
+ (id)visibleAlert;	// 0x32e347f1
- (id)initWithFrame:(CGRect)frame;	// 0x32e373b9
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x32e2e575
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x32e37499
- (id)_addButtonWithTitle:(id)title;	// 0x32e2fee1
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x32e2fba1
- (id)_addButtonWithTitleText:(id)titleText;	// 0x32e2ff21
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x32e34225
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x32e2f835
- (void)_appSuspended:(id)suspended;	// 0x32e3405d
- (float)_bottomVerticalInset;	// 0x32e33e25
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x32e31669
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x32e31571
- (void)_buttonClicked:(id)clicked;	// 0x32e2ffb5
- (float)_buttonHeight;	// 0x32e349ad
- (BOOL)_canShowAlerts;	// 0x32e31de9
- (void)_cancelAnimated:(BOOL)animated;	// 0x32e31ffd
- (void)_cleanupAfterPopupAnimation;	// 0x32e30561
- (void)_createBodyTextLabelIfNeeded;	// 0x32e2ea89
- (void)_createSubtitleLabelIfNeeded;	// 0x32e2e8d9
- (void)_createTaglineTextLabelIfNeeded;	// 0x32e2ec6d
- (void)_createTitleLabelIfNeeded;	// 0x32e2e7d9
- (int)_currentOrientation;	// 0x32e2e70d
- (id)_defaultButton;	// 0x32e2fae9
- (id)_dimView;	// 0x32e33095
- (BOOL)_dimsBackground;	// 0x32e31dd1
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x32e31459
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x32e37331
- (void)_hideAnimated:(BOOL)animated;	// 0x32e31fed
- (id)_initWithTelephoneNumber:(id)telephoneNumber buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x32e375e9
- (BOOL)_isAnimating;	// 0x32e31679
- (BOOL)_isSBAlert;	// 0x32e3008d
- (void)_keyboardWillHide:(id)_keyboard;	// 0x32e30325
- (void)_keyboardWillShow:(id)_keyboard;	// 0x32e30091
- (void)_layoutIfNeeded;	// 0x32e32639
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x32e325c9
- (BOOL)_manualKeyboardIsVisible;	// 0x32e30a91
- (float)_maxHeight;	// 0x32e34871
- (BOOL)_needsKeyboard;	// 0x32e30a65
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x32e319c9
- (void)_performPopup:(BOOL)popup;	// 0x32e30b71
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x32e3168d
- (void)_prepareForDisplay;	// 0x32e37221
- (void)_prepareToBeReplaced;	// 0x32e37319
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x32e32975
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x32e33191
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x32e31e0d
- (void)_repopup;	// 0x32e31d85
- (void)_repopupNoAnimation;	// 0x32e31d21
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x32e322d5
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x32e2e74d
- (void)_setDefaultButton:(id)button;	// 0x32e2faa9
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x32e37c75
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x32e2f645
- (void)_setupInitialFrame;	// 0x32e3205d
- (void)_setupTitleStyle;	// 0x32e2ee59
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x32e30a95
- (void)_slideSheetOut:(BOOL)anOut;	// 0x32e33aa1
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x32e31f85
- (float)_titleHorizontalInset;	// 0x32e33df9
- (float)_titleVerticalBottomInset;	// 0x32e33dcd
- (float)_titleVerticalTopInset;	// 0x32e33da1
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x32e34b2d
- (int)addButtonWithTitle:(id)title;	// 0x32e37b61
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x32e2ff01
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x32e2febd
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x32e2f41d
// converted property getter: - (int)alertSheetStyle;	// 0x32e34549
- (CGSize)backgroundSize;	// 0x32e33d69
// converted property getter: - (BOOL)blocksInteraction;	// 0x32e34729
- (int)bodyMaxLineCount;	// 0x32e2f409
// converted property getter: - (id)bodyText;	// 0x32e2f275
- (id)bodyTextView;	// 0x32e37201
- (int)buttonCount;	// 0x32e2ff41
- (id)buttonTitleAtIndex:(int)index;	// 0x32e37b95
// converted property getter: - (id)buttons;	// 0x32e2e7c9
- (BOOL)canBecomeFirstResponder;	// 0x32e373b5
// declared property getter: - (int)cancelButtonIndex;	// 0x32e37c65
// converted property getter: - (id)context;	// 0x32e2ffa5
- (void)dealloc;	// 0x32e37611
// converted property getter: - (id)defaultButton;	// 0x32e2fa6d
// converted property getter: - (int)defaultButtonIndex;	// 0x32e37c39
// declared property getter: - (id)delegate;	// 0x32e37a79
// converted property getter: - (id)destructiveButton;	// 0x32e2fb65
// converted property getter: - (BOOL)dimsBackground;	// 0x32e346cd
- (void)dismiss;	// 0x32e33d21
- (void)dismissAnimated:(BOOL)animated;	// 0x32e33d35
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x32e37ca1
- (void)drawRect:(CGRect)rect;	// 0x32e33e51
- (int)firstOtherButtonIndex;	// 0x32e37c91
// declared property getter: - (BOOL)groupsTextFields;	// 0x32e2e6d9
- (BOOL)isBodyTextTruncated;	// 0x32e325b1
// declared property getter: - (BOOL)isVisible;	// 0x32e37bed
// converted property getter: - (id)keyboard;	// 0x32e2f911
- (void)layout;	// 0x32e34c09
- (void)layoutAnimated:(BOOL)animated;	// 0x32e32569
- (void)layoutAnimated:(BOOL)animated withDuration:(double)duration;	// 0x32e322e5
// declared property getter: - (id)message;	// 0x32e37b51
// declared property getter: - (int)numberOfButtons;	// 0x32e37bcd
- (int)numberOfLinesInTitle;	// 0x32e349d9
// converted property getter: - (int)numberOfRows;	// 0x32e34535
- (void)popupAlertAnimated:(BOOL)animated;	// 0x32e3295d
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x32e32755
- (void)popupAlertAnimated:(BOOL)animated fromBarButtonItem:(id)barButtonItem;	// 0x32e32911
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x32e32c51
- (void)presentSheetFromBehindView:(id)behindView;	// 0x32e32c3d
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x32e37169
- (void)presentSheetInView:(id)view;	// 0x32e32c65
- (void)presentSheetToAboveView:(id)aboveView;	// 0x32e32de1
- (void)replaceAlert:(id)alert;	// 0x32e37251
- (BOOL)requiresPortraitOrientation;	// 0x32e2e709
// converted property getter: - (BOOL)runsModal;	// 0x32e34759
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x32e3455d
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x32e34701
// converted property setter: - (void)setBodyText:(id)text;	// 0x32e2f0d1
- (void)setBodyTextMaxLineCount:(int)count;	// 0x32e2f359
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x32e37c49
// converted property setter: - (void)setContext:(id)context;	// 0x32e2ff61
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x32e2fa2d
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x32e37c1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e37925
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x32e2fb25
- (void)setDimView:(id)view;	// 0x32e33059
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x32e346a5
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x32e2e6f1
// declared property setter: - (void)setMessage:(id)message;	// 0x32e37b41
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x32e3451d
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x32e34741
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x32e30b45
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32e2f1d9
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x32e346e1
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x32e3093d
- (void)setTaglineText:(id)text;	// 0x32e2f15d
// declared property setter: - (void)setTitle:(id)title;	// 0x32e37a89
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x32e2f29d
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x32e30b5d
// converted property getter: - (id)subtitle;	// 0x32e2f255
// converted property getter: - (int)suspendTag;	// 0x32e346f1
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x32e30959
- (id)tableView;	// 0x32e3096d
- (id)taglineTextView;	// 0x32e37211
- (id)textField;	// 0x32e2f7f5
- (id)textFieldAtIndex:(int)index;	// 0x32e2f7a9
- (int)textFieldCount;	// 0x32e2f7cd
// declared property getter: - (id)title;	// 0x32e37b19
// converted property getter: - (int)titleMaxLineCount;	// 0x32e2f345
- (CGRect)titleRect;	// 0x32e34829
- (void)userDidCancelPopoverView:(id)user;	// 0x32e32959
@end

