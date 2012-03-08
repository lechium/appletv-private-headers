/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRApplianceBrowserProtocol.h"
#import "BRControl.h"

@class BRCursorControl, BRScrollControl, NSTimer, BRTopShelfView, NSString, NSMutableDictionary, NSDate, BRApplianceCategoryListProvider, NSArray, BRApplianceProvider, BRImageControl, BRListView;
@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface BRMainMenuControl : BRControl <BRApplianceBrowserProtocol> {
@private
	int _focusState;	// 48 = 0x30
	BRApplianceProvider *_applianceProvider;	// 52 = 0x34
	id<BRAppliance> _currentAppliance;	// 56 = 0x38
	NSArray *_columns;	// 60 = 0x3c
	long _activeColumn;	// 64 = 0x40
	float _columnScrollAdjustment;	// 68 = 0x44
	long _curPreviewedColumn;	// 72 = 0x48
	long _oldPreviewedColumn;	// 76 = 0x4c
	BRTopShelfView *_curPreview;	// 80 = 0x50
	BRTopShelfView *_oldPreview;	// 84 = 0x54
	NSTimer *_previewTimer;	// 88 = 0x58
	BRImageControl *_logo;	// 92 = 0x5c
	BRImageControl *_backgroundImgControl;	// 96 = 0x60
	BRImageControl *_barGlow;	// 100 = 0x64
	BRControl *_topDivider;	// 104 = 0x68
	BRControl *_bottomDivider;	// 108 = 0x6c
	BRControl *_leftColumnFade;	// 112 = 0x70
	BRControl *_rightColumnFade;	// 116 = 0x74
	BRCursorControl *_cursor;	// 120 = 0x78
	BRScrollControl *_categoryScroller;	// 124 = 0x7c
	BRListView *_categoryList;	// 128 = 0x80
	BRApplianceCategoryListProvider *_categoryListProvider;	// 132 = 0x84
	NSString *_logoPath;	// 136 = 0x88
	NSString *_menuBarGlowPath;	// 140 = 0x8c
	NSString *_menuBarGlowInactivePath;	// 144 = 0x90
	NSString *_gradientBackgroundPath;	// 148 = 0x94
	NSTimer *_menuTimer;	// 152 = 0x98
	NSDate *_menuTriggerTime;	// 156 = 0x9c
	NSMutableDictionary *_remembery;	// 160 = 0xa0
	BOOL _createCategoryList;	// 164 = 0xa4
	BOOL _isLoaded;	// 165 = 0xa5
	id _datasource;	// 168 = 0xa8
	id _delegate;	// 172 = 0xac
}
@property(readonly, assign) id<BRAppliance> currentAppliance;	// G=0x302a5151; @synthesize=_currentAppliance
@property(readonly, assign) long currentApplianceIndex;	// G=0x302a5161; @synthesize=_activeColumn
@property(assign) id datasource;	// G=0x302a5111; S=0x302a5121; @synthesize=_datasource
@property(assign) id delegate;	// G=0x302a5131; S=0x302a5141; @synthesize=_delegate
+ (id)_categoryTextAttributes;	// 0x302a77f9
- (id)init;	// 0x302a32f5
- (BOOL)_activateColumnIndex:(long)index;	// 0x302a6d59
- (void)_applianceProviderChanged:(id)changed;	// 0x302a8789
- (float)_calculateLongestStringForColumn:(long)column;	// 0x302a8019
- (id)_categoryListActions;	// 0x302a81b9
- (void)_categoryListChanged:(id)changed;	// 0x302a7f89
- (id)_categoryListSlowActions;	// 0x302a826d
- (void)_categoryListTimerFired:(id)fired;	// 0x302a7c6d
- (BOOL)_categorySelected:(id)selected;	// 0x302a6cb5
- (void)_createCategoryList;	// 0x302a7d29
- (id)_currentApplianceKey;	// 0x302a6bd9
- (id)_currentCategoryIdentifier;	// 0x302a6c1d
- (void)_delayedResetColumnsAndReload;	// 0x302a87a5
- (void)_expandAndCollapseShelves;	// 0x302a76e9
- (long)_focusedCategoryIndex;	// 0x302a7fe1
- (BOOL)_handleEventInMenuFocusedState:(id)menuFocusedState;	// 0x302a6fbd
- (BOOL)_handleEventInMenuUnocusedState:(id)menuUnocusedState;	// 0x302a7289
- (BOOL)_handleEventInShelfFocusedState:(id)shelfFocusedState;	// 0x302a728d
- (void)_hideCategoryList;	// 0x302a7a35
- (void)_highlightDefaultCategory;	// 0x302a83d5
- (BOOL)_isCategoryListActive;	// 0x302a8319
- (void)_languageChanged:(id)changed;	// 0x302a86e5
- (void)_layoutColumnsUsingFixedSpacing;	// 0x302a553d
- (void)_layoutColumnsUsingVariableSpacing;	// 0x302a5171
- (id)_leftFadeFilters;	// 0x302a84bd
- (BOOL)_previewColumnAtIndex:(long)index;	// 0x302a7311
- (void)_previewTimerFired:(id)fired;	// 0x302a7625
- (void)_reload;	// 0x302a5869
- (void)_removeCategoryList;	// 0x302a7c8d
- (id)_rightFadeFilters;	// 0x302a85d1
- (void)_showCategoryList;	// 0x302a79f5
- (void)_unload;	// 0x302a6805
- (void)_updateAppliance;	// 0x302a691d
- (void)_updateCategoryList;	// 0x302a7a85
- (void)_updateCategoryListAfterDelay:(double)delay;	// 0x302a7b01
- (void)_updateCategoryProvider;	// 0x302a7941
- (void)_updateCategoryRemembery;	// 0x302a8351
- (void)_updatePreviewAfterDelay:(double)delay;	// 0x302a766d
- (id)accessibilityLabel;	// 0x302a50a1
- (id)accessibilityScreenContent;	// 0x302a849d
- (id)actionForCurrentSelection;	// 0x302a3859
- (BOOL)brEventAction:(id)action;	// 0x302a3fad
- (void)clearRemembery;	// 0x302a3ad5
- (void)controlWasActivated;	// 0x302a417d
- (void)controlWasDeactivated;	// 0x302a4261
- (id)controllerForCurrentSelection;	// 0x302a37e5
- (BOOL)controllerMatchesCurrentSelection:(id)selection;	// 0x302a3a09
// declared property getter: - (id)currentAppliance;	// 0x302a5151
// declared property getter: - (long)currentApplianceIndex;	// 0x302a5161
// declared property getter: - (id)datasource;	// 0x302a5111
- (void)dealloc;	// 0x302a357d
// declared property getter: - (id)delegate;	// 0x302a5131
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x302a416d
- (void)highlightApplianceWithKey:(id)key andCategoryWithIdentifier:(id)identifier;	// 0x302a3945
- (void)highlightItemsForController:(id)controller;	// 0x302a38dd
- (BOOL)isAccessibilityElement;	// 0x302a5059
- (void)layoutSubcontrols;	// 0x302a4321
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x302a5041
- (void)reloadTopShelf;	// 0x302a3af5
// declared property setter: - (void)setDatasource:(id)datasource;	// 0x302a5121
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302a5141
- (BOOL)setMenuFocusState:(int)state;	// 0x302a3b15
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302a379d
- (void)windowMaxBoundsChanged;	// 0x302a42c9
@end

