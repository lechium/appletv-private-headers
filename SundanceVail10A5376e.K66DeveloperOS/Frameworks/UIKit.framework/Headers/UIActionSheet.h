/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIPopoverController, UIImageView, UIWindow, UILabel, NSAttributedString, NSMutableArray, UIImage, UIToolbar, NSString;
@protocol UIActionSheetDelegate;

@interface UIActionSheet : UIView {
	id<UIActionSheetDelegate> _delegate;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	NSAttributedString *_attributedTitleString;	// 92 = 0x5c
	UILabel *_subtitleLabel;	// 96 = 0x60
	UILabel *_bodyTextLabel;	// 100 = 0x64
	UILabel *_taglineTextLabel;	// 104 = 0x68
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
	NSMutableArray *_buttonsInTable;	// 156 = 0x9c
	NSMutableArray *_textFields;	// 160 = 0xa0
	UIView *_keyboard;	// 164 = 0xa4
	UIView *_table;	// 168 = 0xa8
	UIView *_buttonTableView;	// 172 = 0xac
	UIView *_dimView;	// 176 = 0xb0
	UIPopoverController *_popoverController;	// 180 = 0xb4
	float _fontSizeInTableView;	// 184 = 0xb8
	float _iconOffset;	// 188 = 0xbc
	float _labelOffset;	// 192 = 0xc0
	float _labelWidth;	// 196 = 0xc4
	float _titleWidth;	// 200 = 0xc8
	BOOL _oldIgnoreTapsValue;	// 204 = 0xcc
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
		unsigned sheetWasShown : 1;
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
		unsigned popupFromPoint : 1;
		unsigned inPopover : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned twoColumnsLayoutMode : 7;
		unsigned threeColumnsLayoutMode : 7;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned useThreePartButtons : 1;
		unsigned useTwoPartButtons : 1;
		unsigned displaySelectedButtonGlyph : 1;
		unsigned indexOfSelectedButton : 7;
		unsigned useCustomSelectedButtonGlyph : 1;
	} _modalViewFlags;	// 205 = 0xcd
	int _actionSheetStyle;	// 216 = 0xd8
	UIImage *_selectedButtonGlyphImage;	// 220 = 0xdc
	UIImage *_selectedButtonGlyphHighlightedImage;	// 224 = 0xe0
	UIImageView *_shadowImageView;	// 228 = 0xe4
}
@property(assign, nonatomic) int actionSheetStyle;	// G=0x3056ee99; S=0x303cdea5; 
@property(assign) int alertSheetStyle;	// G=0x3056c825; S=0x303cded9; converted property
@property(assign) BOOL blocksInteraction;	// G=0x3056c8bd; S=0x3056c895; converted property
@property(retain) id bodyText;	// G=0x30566f0d; S=0x30566d69; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x303cea11; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x303d40e9; S=0x303cea55; 
@property(retain) id context;	// G=0x30567769; S=0x30567725; converted property
@property(retain) id defaultButton;	// G=0x30567485; S=0x30567445; converted property
@property(assign) int defaultButtonIndex;	// G=0x3056ee85; S=0x3056ee69; converted property
@property(assign, nonatomic) id<UIActionSheetDelegate> delegate;	// G=0x3056ed9d; S=0x303ce2c1; 
@property(retain) id destructiveButton;	// G=0x30567501; S=0x305674c1; converted property
@property(assign, nonatomic) int destructiveButtonIndex;	// G=0x3056eea9; S=0x3056eeb9; 
@property(assign) BOOL dimsBackground;	// G=0x3056c861; S=0x3056c839; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x303cea25; 
@property(readonly, retain) UIView *keyboard;	// G=0x30567391; converted property
@property(retain) id message;	// G=0x3056edbd; S=0x3056edad; converted property
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x3056ee19; 
@property(assign) int numberOfRows;	// G=0x3056c811; S=0x3056c7f9; converted property
@property(assign) BOOL runsModal;	// G=0x3056c8ed; S=0x3056c8d5; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x30567de9; S=0x30567dcd; converted property
@property(retain) id subtitle;	// G=0x30566eed; S=0x30566e71; converted property
@property(assign) int suspendTag;	// G=0x3056c885; S=0x3056c875; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x30567be1; S=0x30567bc9; converted property
@property(assign) int threeColumnsLayoutMode;	// G=0x3056eae1; S=0x3056ea81; converted property
@property(copy, nonatomic) NSString *title;	// G=0x303ce195; S=0x303ce105; 
@property(assign) int titleMaxLineCount;	// G=0x30566f35; S=0x303ce05d; converted property
@property(assign) int twoColumnsLayoutMode;	// G=0x303d255d; S=0x3056e9d5; converted property
@property(assign) BOOL useThreeColumnsButtonsLayout;	// G=0x303d24ad; S=0x3056ea0d; converted property
@property(assign) BOOL useTwoColumnsButtonsLayout;	// G=0x303d2491; S=0x3056e955; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x3056ee39; 
+ (Class)_popoverControllerClass;	// 0x3056f9e9
+ (id)_popupAlertBackground;	// 0x3056ac49
+ (CGSize)minimumSize;	// 0x30566479
- (id)initWithFrame:(CGRect)frame;	// 0x303cdd95
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x30566529
- (id)initWithTitle:(id)title delegate:(id)delegate cancelButtonTitle:(id)title3 destructiveButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x303cdc31
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x3056ec69
- (void)_actionSheetHidingAnimationDidStop:(id)_actionSheetHidingAnimation finished:(id)finished;	// 0x30569c09
- (void)_actionSheetRepresentingAnimationDidStop:(id)_actionSheetRepresentingAnimation finished:(id)finished;	// 0x3056a0cd
- (id)_addButtonWithTitle:(id)title;	// 0x30567561
- (id)_addButtonWithTitle:(id)title label:(id)label;	// 0x305675f1
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x303ce4f5
- (id)_addMediaButtonWithTitle:(id)title iconView:(id)view andTableIconView:(id)view3;	// 0x30567615
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x303d39a9
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x305672b5
- (void)_appSuspended:(id)suspended;	// 0x3056c5dd
- (id)_attributedTitleString;	// 0x30566d59
- (float)_bottomVerticalInset;	// 0x303d2505
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x30568959
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x30568861
- (id)_buttonAtIndex:(int)index;	// 0x305675d1
- (void)_buttonClicked:(id)clicked;	// 0x303d3e99
- (float)_buttonHeight;	// 0x303d24d5
- (BOOL)_canShowAlerts;	// 0x3056a7cd
- (void)_cancelAnimated:(BOOL)animated;	// 0x3056a8e9
- (void)_cleanupAfterPopupAnimation;	// 0x30567849
- (void)_createBodyTextLabelIfNeeded;	// 0x30566941
- (void)_createSubtitleLabelIfNeeded;	// 0x30566791
- (void)_createTaglineTextLabelIfNeeded;	// 0x30566b25
- (void)_createTitleLabelIfNeeded;	// 0x303ce1c1
- (int)_currentOrientation;	// 0x305666c9
- (id)_dimView;	// 0x3056ba75
- (id)_dimViewWithFrame:(CGRect)frame;	// 0x303d339d
- (BOOL)_dimsBackground;	// 0x3056a7b5
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x30568749
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3056eb01
- (void)_hideActionSheetInsidePopOverAnimated:(BOOL)animated;	// 0x30569ed5
- (void)_hideHostingPopOverViewAnimated:(BOOL)animated;	// 0x305692f5
- (BOOL)_isAnimating;	// 0x30568969
- (BOOL)_isHostedByPopOver;	// 0x3056a70d
- (BOOL)_isInsidePopOverContent;	// 0x3056a6f5
- (BOOL)_isSBAlert;	// 0x3056ec65
- (void)_keyboardWillHide:(id)_keyboard;	// 0x3056fc99
- (void)_keyboardWillShow:(id)_keyboard;	// 0x3056fa05
- (void)_layoutIfNeeded;	// 0x3056af6d
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x3056af29
- (float)_maxHeight;	// 0x3056c949
- (CGSize)_maxSize;	// 0x303d1f81
- (BOOL)_needsKeyboard;	// 0x30567cf1
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x30568cd1
- (void)_performPopup:(BOOL)popup;	// 0x30567e01
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x3056897d
- (void)_popoverHiddingAnimationDidStop:(id)_popoverHiddingAnimation finished:(id)finished;	// 0x30568fe9
- (void)_popoverRepresentationAnimationDidStop:(id)_popoverRepresentationAnimation finished:(id)finished;	// 0x30569549
- (void)_presentFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x3056eec9
- (void)_presentPopoverInCenterOfWindowForView:(id)view;	// 0x3056f541
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x3056b23d
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x303d2631
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate inView:(id)view;	// 0x3056bad1
- (void)_presentViaResponderChain:(id)chain asPopoverFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view withPreferredArrowDirections:(int)preferredArrowDirections passthroughViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x3056f47d
- (void)_presentViaResponderChainFromYCoordinate:(float)ycoordinate;	// 0x303d2575
- (id)_presentingViewForView:(id)view;	// 0x303cebcd
- (id)_relinquishPopoverController;	// 0x305677cd
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x303d4ae9
- (void)_repopup;	// 0x3056a781
- (void)_repopupNoAnimation;	// 0x3056a725
- (void)_representActionSheetInsidePopOverAnimated:(BOOL)animated;	// 0x3056a10d
- (void)_representHostingPopOverViewAnimated:(BOOL)animated;	// 0x30569589
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x3056ac85
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x30566709
- (void)_setAttributedTitleString:(id)string;	// 0x30566d15
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x303cea39
- (void)_setupInitialFrame;	// 0x3056a985
- (void)_setupTitleStyle;	// 0x303d20a9
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x30567d1d
- (void)_slideSheetOut:(BOOL)anOut;	// 0x303d4589
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x3056a7f5
- (float)_titleHorizontalInset;	// 0x303d2379
- (id)_titleLabel;	// 0x305676f5
- (float)_titleVerticalBottomInset;	// 0x303d2425
- (float)_titleVerticalTopInset;	// 0x303d23a9
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x3056cbad
// declared property getter: - (int)actionSheetStyle;	// 0x3056ee99
- (int)addButtonWithTitle:(id)title;	// 0x303ce4bd
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x30567581
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x3056753d
- (id)addMediaButtonWithTitle:(id)title iconView:(id)view andTableIconView:(id)view3;	// 0x305675a1
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x30567015
// converted property getter: - (int)alertSheetStyle;	// 0x3056c825
- (CGSize)backgroundSize;	// 0x3056c5a1
- (BOOL)becomeFirstResponder;	// 0x303d3651
// converted property getter: - (BOOL)blocksInteraction;	// 0x3056c8bd
- (int)bodyMaxLineCount;	// 0x30566ffd
// converted property getter: - (id)bodyText;	// 0x30566f0d
- (id)buttonAtIndex:(int)index;	// 0x305675b1
- (int)buttonCount;	// 0x30567705
- (id)buttonTitleAtIndex:(int)index;	// 0x3056edd1
// converted property getter: - (id)buttons;	// 0x303cea11
- (BOOL)canBecomeFirstResponder;	// 0x303d3695
// declared property getter: - (int)cancelButtonIndex;	// 0x303d40e9
// converted property getter: - (id)context;	// 0x30567769
- (void)dealloc;	// 0x303d4c7d
// converted property getter: - (id)defaultButton;	// 0x30567485
// converted property getter: - (int)defaultButtonIndex;	// 0x3056ee85
// declared property getter: - (id)delegate;	// 0x3056ed9d
// converted property getter: - (id)destructiveButton;	// 0x30567501
// declared property getter: - (int)destructiveButtonIndex;	// 0x3056eea9
// converted property getter: - (BOOL)dimsBackground;	// 0x3056c861
- (void)dismiss;	// 0x3056c559
- (void)dismissAnimated:(BOOL)animated;	// 0x3056c56d
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x303d40fd
- (void)drawRect:(CGRect)rect;	// 0x303d3699
// declared property getter: - (int)firstOtherButtonIndex;	// 0x303cea25
- (BOOL)isBodyTextTruncated;	// 0x3056af11
// declared property getter: - (BOOL)isVisible;	// 0x3056ee39
// converted property getter: - (id)keyboard;	// 0x30567391
- (void)layout;	// 0x303cee41
- (void)layoutAnimated:(BOOL)animated;	// 0x3056ac95
// converted property getter: - (id)message;	// 0x3056edbd
- (CGSize)minimumSize;	// 0x305664c5
// declared property getter: - (int)numberOfButtons;	// 0x3056ee19
- (int)numberOfLinesInTitle;	// 0x3056ca59
// converted property getter: - (int)numberOfRows;	// 0x3056c811
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30567779
- (void)popupAlertAnimated:(BOOL)animated;	// 0x3056b225
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x3056b089
- (void)presentFromBarButtonItem:(id)barButtonItem direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x3056f3ed
- (void)presentFromRect:(CGRect)rect inView:(id)view direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x3056f435
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x3056b515
- (void)presentSheetFromBehindView:(id)behindView;	// 0x3056b501
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x3056e899
- (void)presentSheetInContentView:(id)contentView;	// 0x3056b649
- (void)presentSheetInPopoverView:(id)popoverView;	// 0x3056b529
- (void)presentSheetInView:(id)view;	// 0x303cec39
- (void)presentSheetToAboveView:(id)aboveView;	// 0x3056b7c1
- (void)removeFromSuperview;	// 0x303d4a8d
- (BOOL)requiresPortraitOrientation;	// 0x3056668d
- (BOOL)resignFirstResponder;	// 0x303d3481
// converted property getter: - (BOOL)runsModal;	// 0x3056c8ed
// declared property setter: - (void)setActionSheetStyle:(int)style;	// 0x303cdea5
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x303cded9
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x3056c895
// converted property setter: - (void)setBodyText:(id)text;	// 0x30566d69
- (void)setBodyTextMaxLineCount:(int)count;	// 0x30566f49
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x303cea55
// converted property setter: - (void)setContext:(id)context;	// 0x30567725
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x30567445
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x3056ee69
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303ce2c1
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x305674c1
// declared property setter: - (void)setDestructiveButtonIndex:(int)index;	// 0x3056eeb9
- (void)setDimView:(id)view;	// 0x3056ba39
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x3056c839
- (void)setInPopover:(BOOL)popover;	// 0x3056e931
- (void)setIndexOfSelectedButton:(int)selectedButton;	// 0x3056eb85
// converted property setter: - (void)setMessage:(id)message;	// 0x3056edad
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x3056c7f9
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x3056c8d5
- (void)setSelectedButtonGlyphHighlightedImage:(id)image;	// 0x3056ec21
- (void)setSelectedButtonGlyphImage:(id)image;	// 0x3056ebbd
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x30567dcd
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x30566e71
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x3056c875
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x30567bc9
- (void)setTaglineText:(id)text;	// 0x30566df5
// converted property setter: - (void)setThreeColumnsLayoutMode:(int)mode;	// 0x3056ea81
// declared property setter: - (void)setTitle:(id)title;	// 0x303ce105
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x303ce05d
// converted property setter: - (void)setTwoColumnsLayoutMode:(int)mode;	// 0x3056e9d5
// converted property setter: - (void)setUseThreeColumnsButtonsLayout:(BOOL)layout;	// 0x3056ea0d
// converted property setter: - (void)setUseTwoColumnsButtonsLayout:(BOOL)layout;	// 0x3056e955
- (void)showFromBarButtonItem:(id)barButtonItem;	// 0x3056f9d5
- (void)showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3056f7d5
- (void)showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3056f8dd
- (void)showFromTabBar:(id)tabBar;	// 0x3056f721
- (void)showFromToolbar:(id)toolbar;	// 0x3056f66d
- (void)showInView:(id)view;	// 0x303cea75
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x30567de9
// converted property getter: - (id)subtitle;	// 0x30566eed
// converted property getter: - (int)suspendTag;	// 0x3056c885
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x30567be1
- (id)tableView;	// 0x30567bf9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3056cdf1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3056e831
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3056cdd1
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x3056e2d1
- (id)textField;	// 0x30567275
- (id)textFieldAtIndex:(int)index;	// 0x30567229
- (int)textFieldCount;	// 0x3056724d
// converted property getter: - (int)threeColumnsLayoutMode;	// 0x3056eae1
// declared property getter: - (id)title;	// 0x303ce195
// converted property getter: - (int)titleMaxLineCount;	// 0x30566f35
- (CGRect)titleRect;	// 0x3056c901
// converted property getter: - (int)twoColumnsLayoutMode;	// 0x303d255d
// converted property getter: - (BOOL)useThreeColumnsButtonsLayout;	// 0x303d24ad
// converted property getter: - (BOOL)useTwoColumnsButtonsLayout;	// 0x303d2491
@end

