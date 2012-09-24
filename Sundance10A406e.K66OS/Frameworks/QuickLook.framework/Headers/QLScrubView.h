/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIView.h> // Unknown library

@class NSMutableSet, QLPageNumberView, NSMutableDictionary, QLThumbnailView, NSMutableArray, NSOperationQueue;
@protocol QLScrubViewDataSource;

@interface QLScrubView : UIView {
	id<QLScrubViewDataSource> _dataSource;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	BOOL _runOnMainThread;	// 92 = 0x5c
	BOOL _needsThumbLayout;	// 93 = 0x5d
	float _thumbOrigin;	// 96 = 0x60
	float _thumbEnd;	// 100 = 0x64
	float _thumbHeight;	// 104 = 0x68
	int _pageCount;	// 108 = 0x6c
	int _selectedPage;	// 112 = 0x70
	NSOperationQueue *_queue;	// 116 = 0x74
	NSMutableSet *_operations;	// 120 = 0x78
	NSMutableDictionary *_thumbViews;	// 124 = 0x7c
	NSMutableArray *_visibleThumbIndexes;	// 128 = 0x80
	QLThumbnailView *_selectedThumbnailView;	// 132 = 0x84
	QLPageNumberView *_pageNumberLabel;	// 136 = 0x88
}
@property(assign) id<QLScrubViewDataSource> dataSource;	// G=0x30e2e7d9; S=0x30e2e7ed; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x30e2e805; S=0x30e2e819; @synthesize=_delegate
@property(assign) BOOL runOnMainThread;	// G=0x30e2cf95; S=0x30e2cec9; 
+ (float)defaultWidth;	// 0x30e2d551
- (id)initWithFrame:(CGRect)frame;	// 0x30e2cba9
- (void)_cancelAllOperations;	// 0x30e2ccf5
- (void)_handleSwipAtLocation:(CGPoint)location;	// 0x30e2d2e1
- (void)_hidePageLabel;	// 0x30e2d901
- (void)_notifyPageChanged;	// 0x30e2d241
- (void)_notifyScrubingEnded;	// 0x30e2d299
- (void)_notifyScrubingStarted;	// 0x30e2d1f9
- (void)_removeThumbviews;	// 0x30e2cfa5
- (void)_showPageLabel;	// 0x30e2d721
- (CGRect)_thumbnailFrameForPageAtIndex:(int)index;	// 0x30e2d5a1
- (void)_updateSelectedThumbnailView;	// 0x30e2e0a9
// declared property getter: - (id)dataSource;	// 0x30e2e7d9
- (void)dealloc;	// 0x30e2cdf1
// declared property getter: - (id)delegate;	// 0x30e2e805
- (void)didReceiveMemoryWarning;	// 0x30e2ceb9
- (void)drawRect:(CGRect)rect;	// 0x30e2e601
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30e2d195
- (void)layoutSubviews;	// 0x30e2d921
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30e2e529
- (void)reloadThumbnails;	// 0x30e2d0a1
// declared property getter: - (BOOL)runOnMainThread;	// 0x30e2cf95
- (void)selectPageNumber:(int)number;	// 0x30e2d15d
// declared property setter: - (void)setDataSource:(id)source;	// 0x30e2e7ed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30e2e819
- (void)setFrame:(CGRect)frame;	// 0x30e2d559
// declared property setter: - (void)setRunOnMainThread:(BOOL)thread;	// 0x30e2cec9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30e2d425
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30e2d521
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30e2d4f1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30e2d49d
@end
