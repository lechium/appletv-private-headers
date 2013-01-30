/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVCarouselViewDataSource.h"
#import "BRViewController.h"

@class NSMutableDictionary, NSDate, NSTimer, NSArray, ATVPhotoDetailView, ATVPhotoMetadataViewConfigurator;

__attribute__((visibility("hidden")))
@interface ATVFullScreenPhotoBrowserController : BRViewController <ATVCarouselViewDataSource> {
	NSMutableDictionary *_transitioningInfo;	// 104 = 0x68
	id _onContextMenu;	// 108 = 0x6c
	int _type;	// 112 = 0x70
	id _photoDetails;	// 116 = 0x74
	id _photoAssetDetails;	// 120 = 0x78
	ATVFullScreenPhotoSelectionMemento _photoSelectionMemento;	// 124 = 0x7c
	id _photoMetadataDetails;	// 136 = 0x88
	NSDate *_photoMetadataViewRedisplayTime;	// 140 = 0x8c
	id _onPhotoSelection;	// 144 = 0x90
	NSTimer *_photoMetadataViewRedisplayTimer;	// 148 = 0x94
	id _onLikeSelection;	// 152 = 0x98
	NSArray *_photos;	// 156 = 0x9c
	id _onMetadataRequiresUpdate;	// 160 = 0xa0
	int _selectedIndex;	// 164 = 0xa4
	id _onMarkCommentsAsViewed;	// 168 = 0xa8
}
@property(copy, nonatomic) id onContextMenu;	// G=0x3c5f69; S=0x3c5f7d; @synthesize=_onContextMenu
@property(copy, nonatomic) id onLikeSelection;	// G=0x3c60d5; S=0x3c60e9; @synthesize=_onLikeSelection
@property(copy, nonatomic) id onMarkCommentsAsViewed;	// G=0x3c6151; S=0x3c6165; @synthesize=_onMarkCommentsAsViewed
@property(copy, nonatomic) id onMetadataRequiresUpdate;	// G=0x3c611d; S=0x3c6131; @synthesize=_onMetadataRequiresUpdate
@property(copy, nonatomic) id onPhotoSelection;	// G=0x3c6091; S=0x3c60a5; @synthesize=_onPhotoSelection
@property(copy, nonatomic) id photoAssetDetails;	// G=0x3c5fd1; S=0x3c5fe5; @synthesize=_photoAssetDetails
@property(readonly, assign, nonatomic) ATVPhotoDetailView *photoDetailView;	// G=0x3c1ff9; 
@property(copy, nonatomic) id photoDetails;	// G=0x3c5fad; S=0x3c5fc1; @synthesize=_photoDetails
@property(copy, nonatomic) id photoMetadataDetails;	// G=0x3c6035; S=0x3c6049; @synthesize=_photoMetadataDetails
@property(readonly, assign, nonatomic) ATVPhotoMetadataViewConfigurator *photoMetadataView;	// G=0x3c2009; 
@property(retain, nonatomic) NSDate *photoMetadataViewRedisplayTime;	// G=0x3c6059; S=0x3c6069; @synthesize=_photoMetadataViewRedisplayTime
@property(assign, nonatomic) __weak NSTimer *photoMetadataViewRedisplayTimer;	// G=0x3c60b5; S=0x3c4bc9; @synthesize=_photoMetadataViewRedisplayTimer
@property(assign, nonatomic) ATVFullScreenPhotoSelectionMemento photoSelectionMemento;	// G=0x3c5ff5; S=0x3c6015; @synthesize=_photoSelectionMemento
@property(copy, nonatomic) NSArray *photos;	// G=0x3c60f9; S=0x3c610d; @synthesize=_photos
@property(assign, nonatomic) int selectedIndex;	// G=0x3c6141; S=0x3c2051; @synthesize=_selectedIndex
@property(readonly, assign, nonatomic) id selectedPhoto;	// G=0x3c21fd; 
@property(retain, nonatomic) NSMutableDictionary *transitioningInfo;	// G=0x3c5f31; S=0x3c5f41; @synthesize=_transitioningInfo
@property(assign, nonatomic) int type;	// G=0x3c5f8d; S=0x3c5f9d; @synthesize=_type
- (id)init;	// 0x3c1dc9
- (id)initWithType:(int)type;	// 0x3c1df1
- (void).cxx_destruct;	// 0x3c6175
- (id)_accessibilityLikeTextControl;	// 0x3c5795
- (void)_clearPhotoMetadataView;	// 0x3c4d09
- (CGSize)_commentsScreenImageSize;	// 0x3c552d
- (CGSize)_fullScreenSize;	// 0x3c54b1
- (BOOL)_handleLikeSelection:(id)selection;	// 0x3c5615
- (void)_handlePhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3c5719
- (void)_hidePhotoMetadataViewOnSelectionChange;	// 0x3c4e01
- (void)_updateHeaderWithLiked:(id)liked likeStatus:(id)status commentsBadgeCount:(unsigned)count;	// 0x3c5079
- (int)_updatePhotoSelectionTimestamp;	// 0x3c4c31
- (id)accessibilityHint;	// 0x3c5d15
- (id)accessibilityLabel;	// 0x3c5929
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3c5e69
- (id)accessibilityRangeString;	// 0x3c5e6d
- (id)accessibilitySecondaryLabel;	// 0x3c5d9d
- (BOOL)brEventAction:(id)action;	// 0x3c35c1
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x3c3a01
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x3c39c5
// declared property getter: - (id)onContextMenu;	// 0x3c5f69
// declared property getter: - (id)onLikeSelection;	// 0x3c60d5
// declared property getter: - (id)onMarkCommentsAsViewed;	// 0x3c6151
// declared property getter: - (id)onMetadataRequiresUpdate;	// 0x3c611d
// declared property getter: - (id)onPhotoSelection;	// 0x3c6091
// declared property getter: - (id)photoAssetDetails;	// 0x3c5fd1
// declared property getter: - (id)photoDetailView;	// 0x3c1ff9
// declared property getter: - (id)photoDetails;	// 0x3c5fad
// declared property getter: - (id)photoMetadataDetails;	// 0x3c6035
// declared property getter: - (id)photoMetadataView;	// 0x3c2009
// declared property getter: - (id)photoMetadataViewRedisplayTime;	// 0x3c6059
// declared property getter: - (id)photoMetadataViewRedisplayTimer;	// 0x3c60b5
// declared property getter: - (ATVFullScreenPhotoSelectionMemento)photoSelectionMemento;	// 0x3c5ff5
// declared property getter: - (id)photos;	// 0x3c60f9
- (id)providersForContextMenu;	// 0x3c38e9
- (void)reloadPhotoMetadata;	// 0x3c23e1
- (void)reloadPhotoMetadataHeader;	// 0x3c2c0d
// declared property getter: - (int)selectedIndex;	// 0x3c6141
// declared property getter: - (id)selectedPhoto;	// 0x3c21fd
// declared property setter: - (void)setOnContextMenu:(id)menu;	// 0x3c5f7d
// declared property setter: - (void)setOnLikeSelection:(id)selection;	// 0x3c60e9
// declared property setter: - (void)setOnMarkCommentsAsViewed:(id)viewed;	// 0x3c6165
// declared property setter: - (void)setOnMetadataRequiresUpdate:(id)update;	// 0x3c6131
// declared property setter: - (void)setOnPhotoSelection:(id)selection;	// 0x3c60a5
// declared property setter: - (void)setPhotoAssetDetails:(id)details;	// 0x3c5fe5
// declared property setter: - (void)setPhotoDetails:(id)details;	// 0x3c5fc1
// declared property setter: - (void)setPhotoMetadataDetails:(id)details;	// 0x3c6049
// declared property setter: - (void)setPhotoMetadataViewRedisplayTime:(id)time;	// 0x3c6069
// declared property setter: - (void)setPhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3c4bc9
// declared property setter: - (void)setPhotoSelectionMemento:(ATVFullScreenPhotoSelectionMemento)memento;	// 0x3c6015
// declared property setter: - (void)setPhotos:(id)photos;	// 0x3c610d
- (void)setPhotos:(id)photos initialIndex:(int)index;	// 0x3c22b1
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x3c2051
// declared property setter: - (void)setTransitioningInfo:(id)info;	// 0x3c5f41
// declared property setter: - (void)setType:(int)type;	// 0x3c5f9d
// declared property getter: - (id)transitioningInfo;	// 0x3c5f31
// declared property getter: - (int)type;	// 0x3c5f8d
- (void)wasPopped;	// 0x3c348d
- (void)wasPushed;	// 0x3c2d49
@end
