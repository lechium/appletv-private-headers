/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVCarouselViewDataSource.h"
#import "BRViewController.h"

@class ATVPhotoDetailView, NSMutableDictionary, ATVPhotoMetadataViewConfigurator, NSDate, NSTimer, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFullScreenPhotoBrowserController : BRViewController <ATVCarouselViewDataSource> {
	id _photoMetadataDetails;	// 104 = 0x68
	ATVFullScreenPhotoSelectionMemento _photoSelectionMemento;	// 108 = 0x6c
	id _onPhotoSelection;	// 120 = 0x78
	id _onLikeSelection;	// 124 = 0x7c
	NSMutableDictionary *_transitioningInfo;	// 128 = 0x80
	id _onMetadataRequiresUpdate;	// 132 = 0x84
	NSTimer *_photoMetadataViewRedisplayTimer;	// 136 = 0x88
	int _type;	// 140 = 0x8c
	NSDate *_photoMetadataViewRedisplayTime;	// 144 = 0x90
	id _onMarkCommentsAsViewed;	// 148 = 0x94
	int _selectedIndex;	// 152 = 0x98
	id _photoDetails;	// 156 = 0x9c
	id _onContextMenu;	// 160 = 0xa0
	NSArray *_photos;	// 164 = 0xa4
	id _photoAssetDetails;	// 168 = 0xa8
}
@property(copy, nonatomic) id onContextMenu;	// G=0x3aed41; S=0x3aed55; @synthesize=_onContextMenu
@property(copy, nonatomic) id onLikeSelection;	// G=0x3aebf1; S=0x3aec05; @synthesize=_onLikeSelection
@property(copy, nonatomic) id onMarkCommentsAsViewed;	// G=0x3aece9; S=0x3aecfd; @synthesize=_onMarkCommentsAsViewed
@property(copy, nonatomic) id onMetadataRequiresUpdate;	// G=0x3aec4d; S=0x3aec61; @synthesize=_onMetadataRequiresUpdate
@property(copy, nonatomic) id onPhotoSelection;	// G=0x3aebcd; S=0x3aebe1; @synthesize=_onPhotoSelection
@property(copy, nonatomic) id photoAssetDetails;	// G=0x3aed89; S=0x3aed9d; @synthesize=_photoAssetDetails
@property(readonly, assign, nonatomic) ATVPhotoDetailView *photoDetailView;	// G=0x3aac49; 
@property(copy, nonatomic) id photoDetails;	// G=0x3aed1d; S=0x3aed31; @synthesize=_photoDetails
@property(copy, nonatomic) id photoMetadataDetails;	// G=0x3aeb69; S=0x3aeb7d; @synthesize=_photoMetadataDetails
@property(readonly, assign, nonatomic) ATVPhotoMetadataViewConfigurator *photoMetadataView;	// G=0x3aac59; 
@property(retain, nonatomic) NSDate *photoMetadataViewRedisplayTime;	// G=0x3aecb1; S=0x3aecc1; @synthesize=_photoMetadataViewRedisplayTime
@property(assign, nonatomic) __weak NSTimer *photoMetadataViewRedisplayTimer;	// G=0x3aec71; S=0x3ad805; @synthesize=_photoMetadataViewRedisplayTimer
@property(assign, nonatomic) ATVFullScreenPhotoSelectionMemento photoSelectionMemento;	// G=0x3aeb8d; S=0x3aebad; @synthesize=_photoSelectionMemento
@property(copy, nonatomic) NSArray *photos;	// G=0x3aed65; S=0x3aed79; @synthesize=_photos
@property(assign, nonatomic) int selectedIndex;	// G=0x3aed0d; S=0x3aaca1; @synthesize=_selectedIndex
@property(readonly, assign, nonatomic) id selectedPhoto;	// G=0x3aae4d; 
@property(retain, nonatomic) NSMutableDictionary *transitioningInfo;	// G=0x3aec15; S=0x3aec25; @synthesize=_transitioningInfo
@property(assign, nonatomic) int type;	// G=0x3aec91; S=0x3aeca1; @synthesize=_type
- (id)init;	// 0x3aaa19
- (id)initWithType:(int)type;	// 0x3aaa41
- (void).cxx_destruct;	// 0x3aedad
- (id)_accessibilityLikeTextControl;	// 0x3ae3cd
- (void)_clearPhotoMetadataView;	// 0x3ad941
- (CGSize)_commentsScreenImageSize;	// 0x3ae165
- (CGSize)_fullScreenSize;	// 0x3ae0e9
- (BOOL)_handleLikeSelection:(id)selection;	// 0x3ae24d
- (void)_handlePhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3ae351
- (void)_hidePhotoMetadataViewOnSelectionChange;	// 0x3ada39
- (void)_updateHeaderWithLiked:(id)liked likeStatus:(id)status commentsBadgeCount:(unsigned)count;	// 0x3adcb1
- (int)_updatePhotoSelectionTimestamp;	// 0x3ad869
- (id)accessibilityHint;	// 0x3ae94d
- (id)accessibilityLabel;	// 0x3ae561
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3aeaa1
- (id)accessibilityRangeString;	// 0x3aeaa5
- (id)accessibilitySecondaryLabel;	// 0x3ae9d5
- (BOOL)brEventAction:(id)action;	// 0x3ac211
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x3ac651
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x3ac615
// declared property getter: - (id)onContextMenu;	// 0x3aed41
// declared property getter: - (id)onLikeSelection;	// 0x3aebf1
// declared property getter: - (id)onMarkCommentsAsViewed;	// 0x3aece9
// declared property getter: - (id)onMetadataRequiresUpdate;	// 0x3aec4d
// declared property getter: - (id)onPhotoSelection;	// 0x3aebcd
// declared property getter: - (id)photoAssetDetails;	// 0x3aed89
// declared property getter: - (id)photoDetailView;	// 0x3aac49
// declared property getter: - (id)photoDetails;	// 0x3aed1d
// declared property getter: - (id)photoMetadataDetails;	// 0x3aeb69
// declared property getter: - (id)photoMetadataView;	// 0x3aac59
// declared property getter: - (id)photoMetadataViewRedisplayTime;	// 0x3aecb1
// declared property getter: - (id)photoMetadataViewRedisplayTimer;	// 0x3aec71
// declared property getter: - (ATVFullScreenPhotoSelectionMemento)photoSelectionMemento;	// 0x3aeb8d
// declared property getter: - (id)photos;	// 0x3aed65
- (id)providersForContextMenu;	// 0x3ac539
- (void)reloadPhotoMetadata;	// 0x3ab031
- (void)reloadPhotoMetadataHeader;	// 0x3ab85d
// declared property getter: - (int)selectedIndex;	// 0x3aed0d
// declared property getter: - (id)selectedPhoto;	// 0x3aae4d
// declared property setter: - (void)setOnContextMenu:(id)menu;	// 0x3aed55
// declared property setter: - (void)setOnLikeSelection:(id)selection;	// 0x3aec05
// declared property setter: - (void)setOnMarkCommentsAsViewed:(id)viewed;	// 0x3aecfd
// declared property setter: - (void)setOnMetadataRequiresUpdate:(id)update;	// 0x3aec61
// declared property setter: - (void)setOnPhotoSelection:(id)selection;	// 0x3aebe1
// declared property setter: - (void)setPhotoAssetDetails:(id)details;	// 0x3aed9d
// declared property setter: - (void)setPhotoDetails:(id)details;	// 0x3aed31
// declared property setter: - (void)setPhotoMetadataDetails:(id)details;	// 0x3aeb7d
// declared property setter: - (void)setPhotoMetadataViewRedisplayTime:(id)time;	// 0x3aecc1
// declared property setter: - (void)setPhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3ad805
// declared property setter: - (void)setPhotoSelectionMemento:(ATVFullScreenPhotoSelectionMemento)memento;	// 0x3aebad
// declared property setter: - (void)setPhotos:(id)photos;	// 0x3aed79
- (void)setPhotos:(id)photos initialIndex:(int)index;	// 0x3aaf01
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x3aaca1
// declared property setter: - (void)setTransitioningInfo:(id)info;	// 0x3aec25
// declared property setter: - (void)setType:(int)type;	// 0x3aeca1
// declared property getter: - (id)transitioningInfo;	// 0x3aec15
// declared property getter: - (int)type;	// 0x3aec91
- (void)wasPopped;	// 0x3ac0dd
- (void)wasPushed;	// 0x3ab999
@end

