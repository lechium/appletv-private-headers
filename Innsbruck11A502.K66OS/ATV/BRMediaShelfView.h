/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class NSDictionary, NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMediaShelfView : BRControl <BRContainerViewCell> {
	id _dataSource;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	NSDictionary *_controlActions;	// 92 = 0x5c
	NSDictionary *_titleActions;	// 96 = 0x60
	BOOL _centered;	// 100 = 0x64
	BOOL _scrollable;	// 101 = 0x65
	NSRange _flatRange;	// 104 = 0x68
	CATransform3D _leftTransform;	// 112 = 0x70
	CATransform3D _rightTransform;	// 176 = 0xb0
	NSMutableArray *_cells;	// 240 = 0xf0
	NSMutableArray *_titles;	// 244 = 0xf4
	NSTimer *_scrollTimer;	// 248 = 0xf8
	BOOL _scrolling;	// 252 = 0xfc
	int _collapsedState;	// 256 = 0x100
	BOOL _ordered;	// 260 = 0x104
	BOOL _needToReloadDataOnActivate;	// 261 = 0x105
	long _numberOfItems;	// 264 = 0x108
	NSRange _refillVisibleRange;	// 268 = 0x10c
	BOOL _restoreLastFocus;	// 276 = 0x114
	NSTimer *_forceDisplayTimer;	// 280 = 0x118
	id _loadCompletionBlock;	// 284 = 0x11c
	BOOL _okToLoad;	// 288 = 0x120
	BOOL _displayComplete;	// 289 = 0x121
	BOOL _explicitlyAcceptsFocus;	// 290 = 0x122
	BOOL antialiasCoverflowPosters;	// 291 = 0x123
	long _columnCount;	// 292 = 0x124
	XXStruct_qlg9jA _horizontalGap;	// 296 = 0x128
	float _coverflowMargin;	// 300 = 0x12c
}
@property(assign, nonatomic) BOOL antialiasCoverflowPosters;	// G=0x320039; S=0x320049; @synthesize
@property(assign) BOOL centered;	// G=0x31f179; S=0x31f14d; converted property
@property(assign) int collapsedState;	// G=0x31f791; S=0x31f769; converted property
@property(assign, nonatomic) long columnCount;	// G=0x31ffed; S=0x31ee99; @synthesize=_columnCount
@property(assign, nonatomic) float coverflowMargin;	// G=0x320019; S=0x320029; @synthesize=_coverflowMargin
@property(retain) id dataSource;	// G=0x31f031; S=0x31ef7d; converted property
@property(assign) id delegate;	// G=0x31f051; S=0x31f041; converted property
@property(retain) id focusedIndexPath;	// G=0x31f475; S=0x31f4f1; converted property
@property(assign, nonatomic) XXStruct_qlg9jA horizontalGap;	// G=0x31fffd; S=0x31eec5; @synthesize=_horizontalGap
@property(assign) BOOL ordered;	// G=0x31f1b5; S=0x31f189; converted property
@property(assign) BOOL scrollable;	// G=0x31f13d; S=0x31f0f5; converted property
- (id)init;	// 0x31e911
- (long)_columnCount;	// 0x320139
- (id)_controlActions;	// 0x321e59
- (id)_controlsInRange:(NSRange)range oldRange:(NSRange)range2;	// 0x322489
- (float)_coverflowMargin;	// 0x320221
- (id)_createControlAtIndex:(int)index;	// 0x322205
- (id)_createControlsInRange:(NSRange)range;	// 0x3225ed
- (void)_displayCellsForce:(BOOL)force;	// 0x322a65
- (NSRange)_dividedRangeForRange:(NSRange)range andDirection:(int)direction;	// 0x322c89
- (unsigned)_dividerCountInRange:(NSRange)range;	// 0x322d8d
- (unsigned)_firstScrollableIndex;	// 0x32038d
- (void)_focusChanged:(id)changed;	// 0x3202cd
- (void)_forceDisplayTimerFired:(id)fired;	// 0x322c65
- (float)_horizontalGap;	// 0x320199
- (long)_indexFromIndexPath:(id)indexPath;	// 0x323259
- (id)_indexPathFromIndex:(long)index sectionIndex:(long *)index2;	// 0x323319
- (BOOL)_isDividerAtIndex:(long)index;	// 0x322dd5
- (unsigned)_lastScrollableIndex;	// 0x320355
- (void)_layoutShelfContents;	// 0x3208e1
- (BOOL)_leftButtonEvent;	// 0x320475
- (void)_loadControlWithStartIndex:(long)startIndex start:(BOOL)start;	// 0x322771
- (void)_loadControlsInRange:(NSRange)range;	// 0x3226cd
- (unsigned)_nextFocusableIndexInDirection:(int)direction;	// 0x32039d
- (long)_numberOfItems;	// 0x323165
- (void)_purgeControls;	// 0x3200e9
- (void)_refillShelf;	// 0x320059
- (void)_reloadTitles;	// 0x322e6d
- (void)_removeSectionHeaderTitleControls;	// 0x3230bd
- (BOOL)_rightButtonEvent;	// 0x320415
- (BOOL)_scrollInDirection:(int)direction;	// 0x3204d5
- (BOOL)_scrollIndexToVisible:(long)visible;	// 0x3208a9
- (BOOL)_scrollLeft;	// 0x3206d9
- (BOOL)_scrollRight;	// 0x3206c1
- (long)_sectionIndexForIndex:(long)index;	// 0x323459
- (id)_setControlRange:(NSRange)range oldRange:(NSRange)range2;	// 0x32228d
- (void)_setDimness:(float)dimness forLayer:(id)layer;	// 0x321d19
- (void)_setFlatRange:(NSRange)range delayedLayout:(BOOL)layout;	// 0x3220b5
- (void)_stopForceDisplayTimer;	// 0x322c31
- (id)_titleActions;	// 0x322f99
- (id)_updateFlatRangeForScrollDirection:(int)scrollDirection;	// 0x321fe9
- (void)_updateSublayerTransform;	// 0x32078d
- (NSRange)_visibleRange;	// 0x3206f5
- (id)accessibilityControls;	// 0x31f929
- (id)accessibilityLabel;	// 0x323519
// declared property getter: - (BOOL)antialiasCoverflowPosters;	// 0x320039
- (BOOL)brEventAction:(id)action;	// 0x31f1c5
- (void)cancelContainerViewLoad;	// 0x31fc4d
// converted property getter: - (BOOL)centered;	// 0x31f179
// converted property getter: - (int)collapsedState;	// 0x31f791
// declared property getter: - (long)columnCount;	// 0x31ffed
- (void)configureCoverflowMarginForPreferredItemWidth:(float)preferredItemWidth;	// 0x31ff15
- (void)controlWasActivated;	// 0x31ec2d
- (void)controlWasDeactivated;	// 0x31ecdd
- (unsigned)countOfCells;	// 0x31f945
// declared property getter: - (float)coverflowMargin;	// 0x320019
- (long)dataCount;	// 0x31f061
// converted property getter: - (id)dataSource;	// 0x31f031
- (void)dealloc;	// 0x31eb19
// converted property getter: - (id)delegate;	// 0x31f051
- (void)focusDirectlyOnControl:(id)control;	// 0x31f5e5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x31f885
// converted property getter: - (id)focusedIndexPath;	// 0x31f475
// declared property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x31fffd
- (unsigned)indexInCellsOfObject:(id)object;	// 0x31f9d1
- (void)layoutSubcontrols;	// 0x31f7a1
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x31fbb5
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x31fab5
// converted property getter: - (BOOL)ordered;	// 0x31f1b5
- (id)randomNavigationLabel;	// 0x323629
- (void)reloadData;	// 0x31eef9
- (BOOL)restorePersistentSavedSelection;	// 0x31fca1
// converted property getter: - (BOOL)scrollable;	// 0x31f13d
- (void)scrollingCompleted;	// 0x31fb71
- (id)selectedControl;	// 0x31f759
- (void)setAcceptsFocus:(BOOL)focus;	// 0x31ebe5
// declared property setter: - (void)setAntialiasCoverflowPosters:(BOOL)posters;	// 0x320049
// converted property setter: - (void)setCentered:(BOOL)centered;	// 0x31f14d
// converted property setter: - (void)setCollapsedState:(int)state;	// 0x31f769
// declared property setter: - (void)setColumnCount:(long)count;	// 0x31ee99
// declared property setter: - (void)setCoverflowMargin:(float)margin;	// 0x320029
// converted property setter: - (void)setDataSource:(id)source;	// 0x31ef7d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31f041
// converted property setter: - (void)setFocusedIndexPath:(id)path;	// 0x31f4f1
// declared property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x31eec5
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x31fc7d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x31fc91
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x31f189
- (void)setReadyToDisplay;	// 0x31fc79
// converted property setter: - (void)setScrollable:(BOOL)scrollable;	// 0x31f0f5
- (void)updatePersistentSavedSelection;	// 0x31fde5
- (void)visibleScrollRectChanged;	// 0x31fb05
- (void)windowMaxBoundsChanged;	// 0x31ee25
@end

