/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableArray;
@protocol ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVPhotoFullScreenView : BRControl {
@private
	id<ATVPhotoFullScreenViewDataSource> dataSource;	// 48 = 0x30
	id<ATVPhotoFullScreenViewDelegate> delegate;	// 52 = 0x34
	BOOL prefetchImages;	// 56 = 0x38
	long _startIndex;	// 60 = 0x3c
	long _displayedItemIndex;	// 64 = 0x40
	BOOL _initialLayoutCompleted;	// 68 = 0x44
	int _startTouchXPosition;	// 72 = 0x48
	float _curTouchOffset;	// 76 = 0x4c
	NSMutableArray *_requestedImages;	// 80 = 0x50
	unsigned _lastRequestedItemIndex;	// 84 = 0x54
}
@property(assign, nonatomic) float _curTouchOffset;	// G=0x3317c699; S=0x3317c6a9; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x3317c639; S=0x3317c649; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x3317c659; S=0x3317c669; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x3317c6ed; S=0x3317c6fd; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x3317c6b9; S=0x3317c6c9; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x3317c619; S=0x3317c629; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x3317c679; S=0x3317c689; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x3317c5b9; S=0x3317c5c9; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x3317c5d9; S=0x3317c5e9; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x3317c5f9; S=0x3317c609; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x3317b50d
- (id)initWithStartIndex:(long)startIndex;	// 0x3317b555
// declared property getter: - (float)_curTouchOffset;	// 0x3317c699
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x3317be89
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x3317bdc9
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x3317be29
// declared property getter: - (long)_displayedItemIndex;	// 0x3317c639
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x3317c659
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x3317c6ed
- (void)_requestNextImage;	// 0x3317c38d
- (void)_requestedImageWritten:(id)written;	// 0x3317c52d
// declared property getter: - (id)_requestedImages;	// 0x3317c6b9
- (void)_setImageLayerTargetBounds;	// 0x3317c231
// declared property getter: - (long)_startIndex;	// 0x3317c619
// declared property getter: - (int)_startTouchXPosition;	// 0x3317c679
- (id)accessibilityLabel;	// 0x3317b981
- (BOOL)brEventAction:(id)action;	// 0x3317ba8d
- (void)controlWasActivated;	// 0x3317b709
- (void)controlWasDeactivated;	// 0x3317b799
// declared property getter: - (id)dataSource;	// 0x3317c5b9
- (void)dealloc;	// 0x3317b671
// declared property getter: - (id)delegate;	// 0x3317c5d9
- (BOOL)isAccessibilityElement;	// 0x3317b81d
- (void)layoutSubcontrols;	// 0x3317b821
// declared property getter: - (BOOL)prefetchImages;	// 0x3317c5f9
- (void)reload;	// 0x3317b929
// declared property setter: - (void)setDataSource:(id)source;	// 0x3317c5c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3317c5e9
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x3317c609
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x3317c6a9
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x3317c649
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x3317c669
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x3317c6fd
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x3317c6c9
// declared property setter: - (void)set_startIndex:(long)index;	// 0x3317c629
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x3317c689
@end

