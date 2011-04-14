/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRDotArrayControl, CATransition, BRImage, BRImageControl;

@interface BRPagedView : BRControl {
@private
	id _delegate;	// 44 = 0x2c
	id _dataSource;	// 48 = 0x30
	unsigned _currentPage;	// 52 = 0x34
	BRControl *_contentPanel;	// 56 = 0x38
	BRControl *_content;	// 60 = 0x3c
	BRImage *_arrowImage;	// 64 = 0x40
	BRImageControl *_rightArrow;	// 68 = 0x44
	BRImageControl *_leftArrow;	// 72 = 0x48
	BRDotArrayControl *_pageDots;	// 76 = 0x4c
	CATransition *_prevPageTransition;	// 80 = 0x50
	CATransition *_nextPageTransition;	// 84 = 0x54
	BOOL _showsArrows;	// 88 = 0x58
	BOOL _showsDots;	// 89 = 0x59
}
@property(readonly, assign) unsigned currentPage;	// G=0x329aab19; @synthesize=_currentPage
@property(assign) id dataSource;	// G=0x329aab29; S=0x329aab39; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x329aab09; S=0x329aae79; 
@property(retain) CATransition *nextPageTransition;	// G=0x329ab8ad; S=0x329ab8dd; @synthesize=_nextPageTransition
@property(retain) CATransition *prevPageTransition;	// G=0x329ab8c5; S=0x329ab909; @synthesize=_prevPageTransition
@property(assign) BOOL showsArrows;	// G=0x329aaae9; S=0x329ab0e9; 
@property(assign) BOOL showsDots;	// G=0x329aaaf9; S=0x329ab0b1; 
- (id)init;	// 0x329ab209
- (BOOL)brEventAction:(id)action;	// 0x329aab49
// declared property getter: - (unsigned)currentPage;	// 0x329aab19
// declared property getter: - (id)dataSource;	// 0x329aab29
- (void)dealloc;	// 0x329ab141
// declared property getter: - (id)delegate;	// 0x329aab09
- (void)layoutSubcontrols;	// 0x329ab591
- (BOOL)nextPage;	// 0x329aad71
// declared property getter: - (id)nextPageTransition;	// 0x329ab8ad
- (BOOL)prevPage;	// 0x329aac8d
// declared property getter: - (id)prevPageTransition;	// 0x329ab8c5
- (void)reloadData;	// 0x329aaf91
// declared property setter: - (void)setDataSource:(id)source;	// 0x329aab39
- (void)setDatasource:(id)datasource;	// 0x329aaf05
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x329aae79
// declared property setter: - (void)setNextPageTransition:(id)transition;	// 0x329ab8dd
// declared property setter: - (void)setPrevPageTransition:(id)transition;	// 0x329ab909
// declared property setter: - (void)setShowsArrows:(BOOL)arrows;	// 0x329ab0e9
// declared property setter: - (void)setShowsDots:(BOOL)dots;	// 0x329ab0b1
// declared property getter: - (BOOL)showsArrows;	// 0x329aaae9
// declared property getter: - (BOOL)showsDots;	// 0x329aaaf9
@end

