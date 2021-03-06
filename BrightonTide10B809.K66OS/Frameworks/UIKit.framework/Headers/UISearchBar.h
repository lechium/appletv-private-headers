/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIStatusBarTinting.h"

@class UIImageView, NSArray, UIButton, UITextField, UILabel, UIColor, UIImage, NSString;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView <UIStatusBarTinting> {
	UITextField *_searchField;	// 84 = 0x54
	UILabel *_promptLabel;	// 88 = 0x58
	UIButton *_cancelButton;	// 92 = 0x5c
	id<UISearchBarDelegate> _delegate;	// 96 = 0x60
	id _controller;	// 100 = 0x64
	UIColor *_tintColor;	// 104 = 0x68
	UIImageView *_separator;	// 108 = 0x6c
	NSString *_cancelButtonText;	// 112 = 0x70
	NSArray *_scopes;	// 116 = 0x74
	int _selectedScope;	// 120 = 0x78
	UIView *_background;	// 124 = 0x7c
	UIView *_scopeBar;	// 128 = 0x80
	UIEdgeInsets _contentInset;	// 132 = 0x84
	UIImageView *_shadowView;	// 148 = 0x94
	id _appearanceStorage;	// 152 = 0x98
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;	// 156 = 0x9c
	UIColor *_statusBarTintColor;	// 160 = 0xa0
	UIView *_inputAccessoryView;	// 164 = 0xa4
}
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor;	// G=0x32c4633d; S=0x32c461c5; @synthesize
@property(assign, nonatomic) int autocapitalizationType;	// G=0x32d74d0d; S=0x32baba45; 
@property(assign, nonatomic) int autocorrectionType;	// G=0x32d74d2d; S=0x32b81e35; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x32bba51d; S=0x32bab11d; 
@property(assign, nonatomic) int barStyle;	// G=0x32c463ad; S=0x32bba0d1; 
@property(retain) UIButton *cancelButton;	// G=0x32d74cfd; S=0x32d74ca9; converted property
@property(assign) BOOL combinesLandscapeBars;	// G=0x32d74c81; S=0x32b82d15; converted property
@property(assign) UIEdgeInsets contentInset;	// G=0x32d74ebd; S=0x32b83079; converted property
@property(retain) id controller;	// G=0x32ca5621; S=0x32b82b11; converted property
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;	// G=0x32d754b5; S=0x32b81e55; @synthesize=_delegate
@property(assign) BOOL drawsBackground;	// G=0x32b87231; S=0x32d74c1d; converted property
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x32c468dd; S=0x32d754d5; @synthesize=_inputAccessoryView
@property(assign, nonatomic) int keyboardType;	// G=0x32d74d8d; S=0x32baba25; 
@property(copy, nonatomic) NSString *placeholder;	// G=0x32b82d3d; S=0x32b81ab5; 
@property(assign) BOOL pretendsIsInBar;	// G=0x32d754e5; S=0x32d754f9; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x32d74ad5; S=0x32d74a25; 
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;	// G=0x32d75071; S=0x32d7501d; 
@property(copy, nonatomic) NSArray *scopeButtonTitles;	// G=0x32d74ee1; S=0x32c41a1d; 
@property(readonly, retain) UITextField *searchField;	// G=0x32bab7d9; converted property
@property(assign, nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;	// G=0x32d75369; S=0x32d75225; 
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;	// G=0x32d74b89; S=0x32d74b49; 
@property(assign, nonatomic) UIOffset searchTextPositionAdjustment;	// G=0x32d75405; S=0x32d753bd; 
@property(assign, nonatomic) int selectedScopeButtonIndex;	// G=0x32d74f1d; S=0x32c45ea9; 
@property(assign) int shortcutConversionType;	// G=0x32d74dcd; S=0x32d74dad; converted property
@property(assign, nonatomic) BOOL showsBookmarkButton;	// G=0x32d74bdd; S=0x32d74b9d; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x32c4b2a5; S=0x32b822a9; 
@property(assign, nonatomic) BOOL showsScopeBar;	// G=0x32d74f4d; S=0x32baba65; 
@property(assign, nonatomic) BOOL showsSearchResultsButton;	// G=0x32d74b35; S=0x32d74af5; 
@property(assign, nonatomic) int spellCheckingType;	// G=0x32d74d6d; S=0x32d74d4d; 
@property(copy, nonatomic) NSString *text;	// G=0x32ca4b1d; S=0x32c48ab9; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32d754c5; S=0x32babaa9; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32c46381; S=0x32d749b9; 
@property(assign) BOOL usesEmbeddedAppearance;	// G=0x32d74c95; S=0x32b82b49; converted property
- (id)initWithCoder:(id)coder;	// 0x32d73d65
- (id)initWithFrame:(CGRect)frame;	// 0x32b7fd9d
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x32f24315
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x32f2432d
- (float)_availableBoundsWidth;	// 0x32b87321
- (void)_bookmarkButtonPressed;	// 0x32d75839
- (void)_cancelButtonPressed;	// 0x32c51595
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x32d74df1
- (id)_currentSeparatorImage;	// 0x32b81f25
- (float)_defaultHeight;	// 0x32b820b5
- (void)_destroyCancelButton;	// 0x32c49469
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32b83bb5
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x32f24311
- (void)_hideShowAnimationDidFinish;	// 0x32d74bf5
- (id)_imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x32b80d4d
- (BOOL)_isEnabled;	// 0x32d75971
- (BOOL)_isInBar;	// 0x32b821c5
- (float)_landscapeScopeBarWidth;	// 0x32d74e71
- (float)_landscapeSearchFieldWidth;	// 0x32d74e31
- (id)_makeShadowView;	// 0x32bba365
- (id)_navigationBarForShadow;	// 0x32b82621
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32d74411
- (void)_resultsListButtonPressed;	// 0x32d75881
- (id)_scopeBar;	// 0x32c427f1
- (void)_scopeChanged:(id)changed;	// 0x32c4b095
- (void)_searchFieldBeginEditing;	// 0x32c45e0d
- (void)_searchFieldEditingChanged;	// 0x32c4b445
- (void)_searchFieldEndEditing;	// 0x32c48d1d
- (float)_searchFieldHeight;	// 0x32b872d1
- (void)_searchFieldReturnPressed;	// 0x32c4c479
- (id)_separatorImage;	// 0x32d74f65
- (void)_setAutoDisableCancelButton:(BOOL)button;	// 0x32b82b25
- (void)_setCancelButtonText:(id)text;	// 0x32d757d9
- (void)_setEnabled:(BOOL)enabled;	// 0x32d75989
- (void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x32d75a39
- (void)_setScopeBarHidden:(BOOL)hidden;	// 0x32d74f2d
- (void)_setScopeBarSegmentsEnabled:(BOOL)enabled;	// 0x32d7599d
- (void)_setSeparatorImage:(id)image;	// 0x32bab94d
- (void)_setShadowVisibleIfNecessary:(BOOL)necessary;	// 0x32b824a5
- (void)_setShowsCancelButton:(BOOL)button;	// 0x32c465d9
- (void)_setShowsSeparator:(BOOL)separator;	// 0x32b81e65
// declared property setter: - (void)_setStatusBarTintColor:(id)color;	// 0x32c461c5
- (void)_setTintColor:(id)color forceUpdate:(BOOL)update;	// 0x32babac1
- (void)_setUpScopeBar;	// 0x32c41bb9
- (void)_setupCancelButton;	// 0x32d75821
- (void)_setupCancelButtonWithAppearance:(id)appearance;	// 0x32c45f05
- (void)_setupPromptLabel;	// 0x32d75521
- (void)_setupSearchField;	// 0x32b7fea1
- (BOOL)_shouldCombineLandscapeBars;	// 0x32b870fd
- (BOOL)_shouldDisplayShadow;	// 0x32b826e9
// declared property getter: - (id)_statusBarTintColor;	// 0x32c4633d
- (void)_updateMagnifyingGlassView;	// 0x32b80cb1
- (void)_updateOpacity;	// 0x32b8724d
- (void)_updateRightView;	// 0x32b80e7d
- (void)_updateSearchFieldArt;	// 0x32b81311
// declared property getter: - (int)autocapitalizationType;	// 0x32d74d0d
// declared property getter: - (int)autocorrectionType;	// 0x32d74d2d
// declared property getter: - (id)backgroundImage;	// 0x32bba51d
// declared property getter: - (int)barStyle;	// 0x32c463ad
- (BOOL)becomeFirstResponder;	// 0x32d75929
- (BOOL)canBecomeFirstResponder;	// 0x32d75905
- (BOOL)canResignFirstResponder;	// 0x32d7594d
// converted property getter: - (id)cancelButton;	// 0x32d74cfd
// converted property getter: - (BOOL)combinesLandscapeBars;	// 0x32d74c81
// converted property getter: - (UIEdgeInsets)contentInset;	// 0x32d74ebd
// converted property getter: - (id)controller;	// 0x32ca5621
- (void)dealloc;	// 0x32c51a45
// declared property getter: - (id)delegate;	// 0x32d754b5
- (void)didMoveToWindow:(id)window;	// 0x32d74985
// converted property getter: - (BOOL)drawsBackground;	// 0x32b87231
- (void)encodeWithCoder:(id)coder;	// 0x32d7450d
- (id)imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x32d74fd1
// declared property getter: - (id)inputAccessoryView;	// 0x32c468dd
- (CGSize)intrinsicContentSize;	// 0x32d74df5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32d80f6d
- (BOOL)isFirstResponder;	// 0x32bae2b5
// declared property getter: - (BOOL)isSearchResultsButtonSelected;	// 0x32d74b89
// declared property getter: - (BOOL)isTranslucent;	// 0x32c46381
// declared property getter: - (int)keyboardType;	// 0x32d74d8d
- (void)layoutSubviews;	// 0x32b867cd
- (void)movedToSuperview:(id)superview;	// 0x32b82791
// declared property getter: - (id)placeholder;	// 0x32b82d3d
- (UIOffset)positionAdjustmentForSearchBarIcon:(int)searchBarIcon;	// 0x32d7545d
// converted property getter: - (BOOL)pretendsIsInBar;	// 0x32d754e5
// declared property getter: - (id)prompt;	// 0x32d74ad5
- (void)reloadInputViews;	// 0x32d758e5
- (BOOL)resignFirstResponder;	// 0x32ba7301
// declared property getter: - (id)scopeBarBackgroundImage;	// 0x32d75071
- (id)scopeBarButtonBackgroundImageForState:(unsigned)state;	// 0x32d750ed
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x32d75179
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned)state;	// 0x32d75205
// declared property getter: - (id)scopeButtonTitles;	// 0x32d74ee1
// converted property getter: - (id)searchField;	// 0x32bab7d9
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x32d74f85
// declared property getter: - (UIOffset)searchFieldBackgroundPositionAdjustment;	// 0x32d75369
// declared property getter: - (UIOffset)searchTextPositionAdjustment;	// 0x32d75405
// declared property getter: - (int)selectedScopeButtonIndex;	// 0x32d74f1d
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x32baba45
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x32b81e35
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x32bab11d
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32bba0d1
// converted property setter: - (void)setCancelButton:(id)button;	// 0x32d74ca9
// converted property setter: - (void)setCombinesLandscapeBars:(BOOL)bars;	// 0x32b82d15
// converted property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x32b83079
// converted property setter: - (void)setController:(id)controller;	// 0x32b82b11
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32b81e55
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x32d74c1d
- (void)setImage:(id)image forSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x32bab3f9
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x32d754d5
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x32baba25
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x32b81ab5
- (void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(int)searchBarIcon;	// 0x32bab679
// converted property setter: - (void)setPretendsIsInBar:(BOOL)bar;	// 0x32d754f9
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x32d74a25
// declared property setter: - (void)setScopeBarBackgroundImage:(id)image;	// 0x32d7501d
- (void)setScopeBarButtonBackgroundImage:(id)image forState:(unsigned)state;	// 0x32d75091
- (void)setScopeBarButtonDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x32d7510d
- (void)setScopeBarButtonTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32d751ad
// declared property setter: - (void)setScopeButtonTitles:(id)titles;	// 0x32c41a1d
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x32bab219
// declared property setter: - (void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)adjustment;	// 0x32d75225
// declared property setter: - (void)setSearchResultsButtonSelected:(BOOL)selected;	// 0x32d74b49
// declared property setter: - (void)setSearchTextPositionAdjustment:(UIOffset)adjustment;	// 0x32d753bd
// declared property setter: - (void)setSelectedScopeButtonIndex:(int)index;	// 0x32c45ea9
// converted property setter: - (void)setShortcutConversionType:(int)type;	// 0x32d74dad
// declared property setter: - (void)setShowsBookmarkButton:(BOOL)button;	// 0x32d74b9d
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x32b822a9
- (void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;	// 0x32b822bd
// declared property setter: - (void)setShowsScopeBar:(BOOL)bar;	// 0x32baba65
// declared property setter: - (void)setShowsSearchResultsButton:(BOOL)button;	// 0x32d74af5
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x32d74d4d
// declared property setter: - (void)setText:(id)text;	// 0x32c48ab9
// declared property setter: - (void)setTintColor:(id)color;	// 0x32babaa9
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x32d749b9
// converted property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x32b82b49
// converted property getter: - (int)shortcutConversionType;	// 0x32d74dcd
// declared property getter: - (BOOL)showsBookmarkButton;	// 0x32d74bdd
// declared property getter: - (BOOL)showsCancelButton;	// 0x32c4b2a5
// declared property getter: - (BOOL)showsScopeBar;	// 0x32d74f4d
// declared property getter: - (BOOL)showsSearchResultsButton;	// 0x32d74b35
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32b81fe1
// declared property getter: - (int)spellCheckingType;	// 0x32d74d6d
// declared property getter: - (id)text;	// 0x32ca4b1d
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x32c4b3e5
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x32c45969
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x32c48ccd
// declared property getter: - (id)tintColor;	// 0x32d754c5
// converted property getter: - (BOOL)usesEmbeddedAppearance;	// 0x32d74c95
- (void)willMoveToSuperview:(id)superview;	// 0x32b82465
- (void)willMoveToWindow:(id)window;	// 0x32b83a71
@end

