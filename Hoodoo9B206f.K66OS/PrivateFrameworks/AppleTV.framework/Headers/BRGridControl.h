/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRProviderGroup, NSString;

@interface BRGridControl : BRControl {
@private
	BRProviderGroup *_group;	// 48 = 0x30
	BRControl *_requester;	// 52 = 0x34
	NSRange _range;	// 56 = 0x38
	float _lastGapHeight;	// 64 = 0x40
	double _heightToRange;	// 68 = 0x44
	double _allRowsHeight;	// 76 = 0x4c
	float _singleControlHeight;	// 84 = 0x54
	BOOL _allRowsAreSameHeight;	// 88 = 0x58
	float _allColumnWidths;	// 92 = 0x5c
	long _columnCount;	// 96 = 0x60
	XXStruct_qlg9jA _horizontalGap;	// 100 = 0x64
	XXStruct_qlg9jA _verticalGap;	// 104 = 0x68
	float _leftMargin;	// 108 = 0x6c
	float _rightMargin;	// 112 = 0x70
	float _bottomMargin;	// 116 = 0x74
	float _bottomMarginFactor;	// 120 = 0x78
	float _topMargin;	// 124 = 0x7c
	float _topMarginFactor;	// 128 = 0x80
	BOOL _wrapsNavigation;	// 132 = 0x84
	BOOL _explicitlyAcceptsFocus;	// 133 = 0x85
	NSString *_accessibilityLabel;	// 136 = 0x88
}
@property(retain) NSString *accessibilityLabel;	// G=0x36691331; S=0x366912ed; converted property
@property(assign) BOOL allRowsAreSameHeight;	// G=0x36690bb5; S=0x36690ba5; converted property
@property(assign) long columnCount;	// G=0x36690335; S=0x36690301; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x3669038d; S=0x36690345; converted property
@property(assign) float leftMargin;	// G=0x36690491; S=0x36690451; converted property
@property(retain) id providerRequester;	// G=0x36690501; S=0x366904f1; converted property
@property(retain) id providers;	// G=0x36690251; S=0x36690049; converted property
@property(assign) float rightMargin;	// G=0x366904e1; S=0x366904a1; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x36690401; S=0x366903a9; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x36690a6d; S=0x36690a5d; converted property
- (id)init;	// 0x3668fedd
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x36692831
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x366923cd
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x366924b9
- (id)_controlsInRange:(NSRange)range;	// 0x366926bd
- (id)_createControlsInRange:(NSRange)range;	// 0x366925f1
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x36691e51
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x36691fa1
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x36692055
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x366921a1
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x3669230d
- (double)_heightToRange;	// 0x36691c39
- (long)_indexOfFocusedControl;	// 0x36692595
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x36691d31
- (void)_providerDataSetChanged:(id)changed;	// 0x366929b1
- (void)_providerModified:(id)modified;	// 0x36692a21
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x366920f9
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x36691a21
- (double)_totalHeight;	// 0x36691b31
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x366928ad
- (id)accessibilityControls;	// 0x36691341
// converted property getter: - (id)accessibilityLabel;	// 0x36691331
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x36690bb5
- (BOOL)brEventAction:(id)action;	// 0x36690705
// converted property getter: - (long)columnCount;	// 0x36690335
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x366914bd
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x36691721
- (CGRect)controlFrameAtIndex:(long)index;	// 0x36691629
- (unsigned)countOfCells;	// 0x3669135d
- (long)dataCount;	// 0x36690271
- (void)dealloc;	// 0x3668ff79
- (void)focusControlAtIndex:(long)index;	// 0x36691501
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3669082d
- (float)heightOfControlAtIndex:(long)index;	// 0x366906d1
- (float)heightToMaximum:(float)maximum;	// 0x366905b5
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x3669038d
- (unsigned)indexInCellsOfObject:(id)object;	// 0x3669136d
- (id)initialFocus;	// 0x366913ed
- (void)layoutSubcontrols;	// 0x36690bd5
// converted property getter: - (float)leftMargin;	// 0x36690491
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x366913ad
- (float)positionOfColumn:(long)column;	// 0x36690679
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x36690291
// converted property getter: - (id)providerRequester;	// 0x36690501
// converted property getter: - (id)providers;	// 0x36690251
- (void)reloadData;	// 0x3669185d
// converted property getter: - (float)rightMargin;	// 0x366904e1
- (long)rowCount;	// 0x366902b1
- (void)setAcceptsFocus:(BOOL)focus;	// 0x366917f5
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x366912ed
- (void)setAllColumnWidths:(float)widths;	// 0x366902f1
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x36690ba5
- (void)setBottomMargin:(float)margin;	// 0x36690a7d
// converted property setter: - (void)setColumnCount:(long)count;	// 0x36690301
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x36690345
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x36690451
- (void)setProvider:(id)provider;	// 0x36690009
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x366904f1
// converted property setter: - (void)setProviders:(id)providers;	// 0x36690049
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x366904a1
- (void)setTopMargin:(float)margin;	// 0x36690b11
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x366903a9
- (void)setVerticalMargins:(float)margins;	// 0x3669041d
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x36690a5d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x36691139
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x36690401
- (id)visibleControlAtIndex:(long)index;	// 0x36690569
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x36690511
- (NSRange)visibleRange;	// 0x3669054d
- (void)visibleScrollRectChanged;	// 0x36690bc5
- (void)windowMaxBoundsChanged;	// 0x3669123d
// converted property getter: - (BOOL)wrapsNavigation;	// 0x36690a6d
@end
