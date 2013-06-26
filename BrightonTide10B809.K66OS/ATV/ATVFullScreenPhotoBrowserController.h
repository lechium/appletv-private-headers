/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"
#import "ATVCarouselViewDataSource.h"

@class NSMutableDictionary, NSDate, NSTimer, NSArray, ATVPhotoDetailView, ATVPhotoMetadataViewConfigurator;

__attribute__((visibility("hidden")))
@interface ATVFullScreenPhotoBrowserController : BRViewController <ATVCarouselViewDataSource> {
	int _type;	// 104 = 0x68
	id _onLikeSelection;	// 108 = 0x6c
	NSArray *_photos;	// 112 = 0x70
	NSMutableDictionary *_transitioningInfo;	// 116 = 0x74
	id _photoMetadataDetails;	// 120 = 0x78
	ATVFullScreenPhotoSelectionMemento _photoSelectionMemento;	// 124 = 0x7c
	id _onPhotoSelection;	// 136 = 0x88
	NSDate *_photoMetadataViewRedisplayTime;	// 140 = 0x8c
	id _onContextMenu;	// 144 = 0x90
	int _selectedIndex;	// 148 = 0x94
	id _onMetadataRequiresUpdate;	// 152 = 0x98
	id _photoAssetDetails;	// 156 = 0x9c
	NSTimer *_photoMetadataViewRedisplayTimer;	// 160 = 0xa0
	id _onMarkCommentsAsViewed;	// 164 = 0xa4
	id _photoDetails;	// 168 = 0xa8
}
@property(copy, nonatomic) id onContextMenu;	// G=0x3cd065; S=0x3cd079; @synthesize=_onContextMenu
@property(copy, nonatomic) id onLikeSelection;	// G=0x3ccf25; S=0x3ccf39; @synthesize=_onLikeSelection
@property(copy, nonatomic) id onMarkCommentsAsViewed;	// G=0x3cd101; S=0x3cd115; @synthesize=_onMarkCommentsAsViewed
@property(copy, nonatomic) id onMetadataRequiresUpdate;	// G=0x3cd099; S=0x3cd0ad; @synthesize=_onMetadataRequiresUpdate
@property(copy, nonatomic) id onPhotoSelection;	// G=0x3cd009; S=0x3cd01d; @synthesize=_onPhotoSelection
@property(copy, nonatomic) id photoAssetDetails;	// G=0x3cd0bd; S=0x3cd0d1; @synthesize=_photoAssetDetails
@property(readonly, assign, nonatomic) ATVPhotoDetailView *photoDetailView;	// G=0x3c92b1; 
@property(copy, nonatomic) id photoDetails;	// G=0x3cd125; S=0x3cd139; @synthesize=_photoDetails
@property(copy, nonatomic) id photoMetadataDetails;	// G=0x3ccfa5; S=0x3ccfb9; @synthesize=_photoMetadataDetails
@property(readonly, assign, nonatomic) ATVPhotoMetadataViewConfigurator *photoMetadataView;	// G=0x3c92c1; 
@property(retain, nonatomic) NSDate *photoMetadataViewRedisplayTime;	// G=0x3cd02d; S=0x3cd03d; @synthesize=_photoMetadataViewRedisplayTime
@property(assign, nonatomic) __weak NSTimer *photoMetadataViewRedisplayTimer;	// G=0x3cd0e1; S=0x3cbbb9; @synthesize=_photoMetadataViewRedisplayTimer
@property(assign, nonatomic) ATVFullScreenPhotoSelectionMemento photoSelectionMemento;	// G=0x3ccfc9; S=0x3ccfe9; @synthesize=_photoSelectionMemento
@property(copy, nonatomic) NSArray *photos;	// G=0x3ccf49; S=0x3ccf5d; @synthesize=_photos
@property(assign, nonatomic) int selectedIndex;	// G=0x3cd089; S=0x3c9309; @synthesize=_selectedIndex
@property(readonly, assign, nonatomic) id selectedPhoto;	// G=0x3c94b5; 
@property(retain, nonatomic) NSMutableDictionary *transitioningInfo;	// G=0x3ccf6d; S=0x3ccf7d; @synthesize=_transitioningInfo
@property(assign, nonatomic) int type;	// G=0x3ccf05; S=0x3ccf15; @synthesize=_type
- (id)init;	// 0x3c9081
- (id)initWithType:(int)type;	// 0x3c90a9
- (void).cxx_destruct;	// 0x3cd149
- (id)_accessibilityLikeTextControl;	// 0x3cc785
- (void)_clearPhotoMetadataView;	// 0x3cbcf9
- (CGSize)_commentsScreenImageSize;	// 0x3cc51d
- (CGSize)_fullScreenSize;	// 0x3cc4a1
- (BOOL)_handleLikeSelection:(id)selection;	// 0x3cc605
- (void)_handlePhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3cc709
- (void)_hidePhotoMetadataViewOnSelectionChange;	// 0x3cbdf1
- (void)_updateHeaderWithLiked:(id)liked likeStatus:(id)status commentsBadgeCount:(unsigned)count;	// 0x3cc069
- (int)_updatePhotoSelectionTimestamp;	// 0x3cbc21
- (id)accessibilityHint;	// 0x3ccce9
- (id)accessibilityLabel;	// 0x3cc919
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3cce3d
- (id)accessibilityRangeString;	// 0x3cce41
- (id)accessibilitySecondaryLabel;	// 0x3ccd71
- (BOOL)brEventAction:(id)action;	// 0x3ca5f1
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x3caa31
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x3ca9f5
// declared property getter: - (id)onContextMenu;	// 0x3cd065
// declared property getter: - (id)onLikeSelection;	// 0x3ccf25
// declared property getter: - (id)onMarkCommentsAsViewed;	// 0x3cd101
// declared property getter: - (id)onMetadataRequiresUpdate;	// 0x3cd099
// declared property getter: - (id)onPhotoSelection;	// 0x3cd009
// declared property getter: - (id)photoAssetDetails;	// 0x3cd0bd
// declared property getter: - (id)photoDetailView;	// 0x3c92b1
// declared property getter: - (id)photoDetails;	// 0x3cd125
// declared property getter: - (id)photoMetadataDetails;	// 0x3ccfa5
// declared property getter: - (id)photoMetadataView;	// 0x3c92c1
// declared property getter: - (id)photoMetadataViewRedisplayTime;	// 0x3cd02d
// declared property getter: - (id)photoMetadataViewRedisplayTimer;	// 0x3cd0e1
// declared property getter: - (ATVFullScreenPhotoSelectionMemento)photoSelectionMemento;	// 0x3ccfc9
// declared property getter: - (id)photos;	// 0x3ccf49
- (id)providersForContextMenu;	// 0x3ca919
- (void)reloadPhotoMetadata;	// 0x3c9699
- (void)reloadPhotoMetadataHeader;	// 0x3c9c3d
// declared property getter: - (int)selectedIndex;	// 0x3cd089
// declared property getter: - (id)selectedPhoto;	// 0x3c94b5
// declared property setter: - (void)setOnContextMenu:(id)menu;	// 0x3cd079
// declared property setter: - (void)setOnLikeSelection:(id)selection;	// 0x3ccf39
// declared property setter: - (void)setOnMarkCommentsAsViewed:(id)viewed;	// 0x3cd115
// declared property setter: - (void)setOnMetadataRequiresUpdate:(id)update;	// 0x3cd0ad
// declared property setter: - (void)setOnPhotoSelection:(id)selection;	// 0x3cd01d
// declared property setter: - (void)setPhotoAssetDetails:(id)details;	// 0x3cd0d1
// declared property setter: - (void)setPhotoDetails:(id)details;	// 0x3cd139
// declared property setter: - (void)setPhotoMetadataDetails:(id)details;	// 0x3ccfb9
// declared property setter: - (void)setPhotoMetadataViewRedisplayTime:(id)time;	// 0x3cd03d
// declared property setter: - (void)setPhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3cbbb9
// declared property setter: - (void)setPhotoSelectionMemento:(ATVFullScreenPhotoSelectionMemento)memento;	// 0x3ccfe9
// declared property setter: - (void)setPhotos:(id)photos;	// 0x3ccf5d
- (void)setPhotos:(id)photos initialIndex:(int)index;	// 0x3c9569
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x3c9309
// declared property setter: - (void)setTransitioningInfo:(id)info;	// 0x3ccf7d
// declared property setter: - (void)setType:(int)type;	// 0x3ccf15
// declared property getter: - (id)transitioningInfo;	// 0x3ccf6d
// declared property getter: - (int)type;	// 0x3ccf05
- (void)wasPopped;	// 0x3ca4bd
- (void)wasPushed;	// 0x3c9d7d
@end
