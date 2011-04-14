/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIPopoverController, UISearchBar, UILabel, UITableView, UIViewController, NSString, UIView;
@protocol UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource;

@interface UISearchDisplayController : NSObject {
@private
	UIViewController *_viewController;	// 4 = 0x4
	UITableView *_tableView;	// 8 = 0x8
	UIView *_dimmingView;	// 12 = 0xc
	UISearchBar *_searchBar;	// 16 = 0x10
	UILabel *_noResultsLabel;	// 20 = 0x14
	NSString *_noResultsMessage;	// 24 = 0x18
	id<UISearchDisplayDelegate> _delegate;	// 28 = 0x1c
	id<UITableViewDataSource> _tableViewDataSource;	// 32 = 0x20
	id<UITableViewDelegate> _tableViewDelegate;	// 36 = 0x24
	CFArrayRef _containingScrollViews;	// 40 = 0x28
	float _lastKeyboardAdjustment;	// 44 = 0x2c
	float _lastFooterAdjustment;	// 48 = 0x30
	UIPopoverController *_popoverController;	// 52 = 0x34
	int _searchResultsTableViewStyle;	// 56 = 0x38
	id _navigationControllerBookkeeper;	// 60 = 0x3c
	struct {
		unsigned visible : 1;
		unsigned animating : 1;
		unsigned hidIndexBar : 1;
		unsigned hidNavigationBar : 1;
		unsigned noResultsMessageVisible : 1;
		unsigned noResultsMessageAutoDisplay : 1;
		unsigned navigationBarHidingEnabled : 1;
		unsigned dimTableViewOnEmptySearchString : 1;
		unsigned isRotatingWithPopover : 1;
		unsigned cancelButtonManagementDisabled : 1;
	} _searchDisplayControllerFlags;	// 64 = 0x40
}
@property(assign, nonatomic, getter=isActive) BOOL active;	// G=0x306089bd; S=0x30686cf1; 
@property(assign, nonatomic) BOOL automaticallyShowsNoResultsMessage;	// G=0x307ddbc9; S=0x306065d5; 
@property(assign, nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) BOOL cancelButtonManagementDisabled;	// G=0x307ddc09; S=0x306caf39; 
@property(assign, nonatomic) id<UISearchDisplayDelegate> delegate;	// G=0x307ddc51; S=0x30606799; @synthesize=_delegate
@property(assign, nonatomic) BOOL dimTableViewOnEmptySearchString;	// G=0x30669481; S=0x3060677d; 
@property(readonly, assign, nonatomic) BOOL hidNavigationBar;	// G=0x307ddba1; 
@property(assign, nonatomic, getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;	// G=0x30668f99; S=0x307ddbdd; 
@property(copy, nonatomic) NSString *noResultsMessage;	// G=0x30682835; S=0x307ddc85; 
@property(assign, nonatomic) BOOL noResultsMessageVisible;	// G=0x307ddbb5; S=0x306814a1; 
@property(readonly, assign, nonatomic) UISearchBar *searchBar;	// G=0x3060d2bd; @synthesize=_searchBar
@property(readonly, assign, nonatomic) UIViewController *searchContentsController;	// G=0x307ddc41; @synthesize=_viewController
@property(assign, nonatomic) id<UITableViewDataSource> searchResultsDataSource;	// G=0x307ddc31; S=0x306067a9; @synthesize=_tableViewDataSource
@property(assign, nonatomic) id<UITableViewDelegate> searchResultsDelegate;	// G=0x307ddc21; S=0x306067d9; @synthesize=_tableViewDelegate
@property(readonly, assign, nonatomic) UITableView *searchResultsTableView;	// G=0x306374a9; @synthesize=_tableView
- (id)init;	// 0x307de2f5
- (id)initWithCoder:(id)coder;	// 0x307de30d
- (id)initWithSearchBar:(id)searchBar contentsController:(id)controller;	// 0x30605c51
- (id)initWithSearchBar:(id)searchBar contentsController:(id)controller searchResultsTableViewStyle:(int)style;	// 0x30605c75
- (void)_adjustTableViewContentInsets;	// 0x30681a59
- (BOOL)_areSearchContentsSplitViewMaster;	// 0x30605fe5
- (void)_cleanUpSearchBar;	// 0x3062078d
- (void)_clearViewController;	// 0x307ddbf9
- (void)_configureNewSearchBar;	// 0x30605d75
- (void)_configureSearchBarForTableView;	// 0x306060d1
- (id)_containingTableView;	// 0x30606175
- (id)_containingViewOfClass:(Class)aClass;	// 0x306061a9
- (id)_createPopoverController;	// 0x307de3a9
- (void)_destroyManagedTableView;	// 0x30685315
- (void)_disableParentScrollViews;	// 0x30669ca9
- (void)_enableParentScrollViews;	// 0x30684de1
- (void)_indexBarFrameChanged:(id)changed;	// 0x30606e81
// declared property getter: - (BOOL)_isCancelButtonManagementDisabled;	// 0x307ddc09
- (BOOL)_isSearchBarInBar;	// 0x30668b39
- (void)_keyboardWillHide:(id)_keyboard;	// 0x3068d709
- (void)_keyboardWillShow:(id)_keyboard;	// 0x30672549
- (void)_managedTableViewDidScroll;	// 0x3068d45d
- (id)_noResultsMessageLabel;	// 0x307ddc61
- (void)_popoverClearButtonPressed:(id)pressed;	// 0x307de009
- (void)_popoverKeyboardDidHide:(id)_popoverKeyboard;	// 0x307de049
- (void)_popoverKeyboardDidShow:(id)_popoverKeyboard;	// 0x307de099
- (void)_searchBarSuperviewChanged;	// 0x30620825
- (void)_searchBarSuperviewWillChange;	// 0x30620779
// declared property setter: - (void)_setCancelButtonManagementDisabled:(BOOL)disabled;	// 0x306caf39
- (void)_setTableViewVisible:(BOOL)visible inView:(id)view;	// 0x30681529
- (void)_setupNoResultsLabelIfNecessary;	// 0x306826ed
- (CGRect)_tableViewFrame;	// 0x30681b39
- (void)_updateNoSearchResultsMessageVisiblity;	// 0x30606615
- (void)_updateSearchBarForTableViewIndexBar:(id)tableViewIndexBar;	// 0x30606285
// declared property getter: - (BOOL)automaticallyShowsNoResultsMessage;	// 0x307ddbc9
- (void)dealloc;	// 0x3068664d
// declared property getter: - (id)delegate;	// 0x307ddc51
// declared property getter: - (BOOL)dimTableViewOnEmptySearchString;	// 0x30669481
- (void)encodeWithCoder:(id)coder;	// 0x307ddb9d
// declared property getter: - (BOOL)hidNavigationBar;	// 0x307ddba1
// declared property getter: - (BOOL)isActive;	// 0x306089bd
// declared property getter: - (BOOL)isNavigationBarHidingEnabled;	// 0x30668f99
- (void)navigationControllerDidShowViewController:(id)navigationController;	// 0x306c76b1
- (void)navigationControllerWillShowViewController:(id)navigationController;	// 0x306c7409
// declared property getter: - (id)noResultsMessage;	// 0x30682835
// declared property getter: - (BOOL)noResultsMessageVisible;	// 0x307ddbb5
- (void)popoverController:(id)controller animationCompleted:(int)completed;	// 0x307ddcf1
// declared property getter: - (id)searchBar;	// 0x3060d2bd
- (void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;	// 0x306c6abd
- (void)searchBar:(id)bar textDidChange:(id)text;	// 0x306813b5
- (void)searchBarCancelButtonClicked:(id)clicked;	// 0x30684901
- (void)searchBarResultsListButtonClicked:(id)clicked;	// 0x307ddd0d
- (void)searchBarSearchButtonClicked:(id)clicked;	// 0x306c7af1
- (void)searchBarTextDidBeginEditing:(id)searchBarText;	// 0x30668b21
// declared property getter: - (id)searchContentsController;	// 0x307ddc41
// declared property getter: - (id)searchResultsDataSource;	// 0x307ddc31
// declared property getter: - (id)searchResultsDelegate;	// 0x307ddc21
// declared property getter: - (id)searchResultsTableView;	// 0x306374a9
// declared property setter: - (void)setActive:(BOOL)active;	// 0x30686cf1
- (void)setActive:(BOOL)active animated:(BOOL)animated;	// 0x306225e9
// declared property setter: - (void)setAutomaticallyShowsNoResultsMessage:(BOOL)message;	// 0x306065d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30606799
// declared property setter: - (void)setDimTableViewOnEmptySearchString:(BOOL)string;	// 0x3060677d
// declared property setter: - (void)setNavigationBarHidingEnabled:(BOOL)enabled;	// 0x307ddbdd
// declared property setter: - (void)setNoResultsMessage:(id)message;	// 0x307ddc85
// declared property setter: - (void)setNoResultsMessageVisible:(BOOL)visible;	// 0x306814a1
- (void)setSearchBar:(id)bar;	// 0x307de1f1
- (void)setSearchContentsController:(id)controller;	// 0x307de11d
// declared property setter: - (void)setSearchResultsDataSource:(id)source;	// 0x306067a9
// declared property setter: - (void)setSearchResultsDelegate:(id)delegate;	// 0x306067d9
- (void)showHideAnimationDidFinish;	// 0x30673d45
- (void)windowDidRotate:(id)window;	// 0x3063e25d
- (void)windowWillAnimateRotation:(id)window;	// 0x307ddd61
@end

