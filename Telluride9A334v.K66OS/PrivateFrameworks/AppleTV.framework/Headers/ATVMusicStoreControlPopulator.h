/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlPopulator : NSObject {
@private
	unsigned _matchOrder;	// 4 = 0x4
}
@property(readonly, assign) unsigned matchOrder;	// G=0x330f7f4d; @synthesize=_matchOrder
+ (BOOL)canHandleData:(id)data;	// 0x330f5799
- (id)init;	// 0x330f57dd
- (float)_shelfBoxTitleHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related;	// 0x330f8485
- (float)_shelfTitleWidthScaleForCollectionType:(id)collectionType featured:(BOOL)featured moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x330f85e5
- (float)_shelfWidthForData:(id)data;	// 0x330f84ed
- (id)buttonForData:(id)data;	// 0x330f5889
- (float)buttonHeightForData:(id)data;	// 0x330f7bb5
- (id)coverArtURLForData:(id)data thumbnail:(BOOL)thumbnail;	// 0x330f7f5d
- (id)gridForData:(id)data;	// 0x330f6c81
- (float)gridHeightForData:(id)data;	// 0x330f7de5
- (id)listForData:(id)data;	// 0x330f7041
- (float)listHeightForData:(id)data;	// 0x330f7de9
- (id)listRowForData:(id)data;	// 0x330f72fd
- (float)listRowHeightForData:(id)data;	// 0x330f7ded
- (id)mainMenuButtonForData:(id)data;	// 0x330f62e1
// declared property getter: - (unsigned)matchOrder;	// 0x330f7f4d
- (id)mediaPreviewControlForData:(id)data;	// 0x330f7851
- (float)mediaPreviewHeightForData:(id)data;	// 0x330f7f3d
- (id)pagedViewForData:(id)data;	// 0x330f7b81
- (float)pagedViewHeightForData:(id)data;	// 0x330f7f41
- (id)placeholderImageForData:(id)data;	// 0x330f8069
- (id)placeholderImageForMenuItemData:(id)menuItemData;	// 0x330f8405
- (id)placeholderImageForShelfData:(id)shelfData;	// 0x330f828d
- (id)playButtonEnabledMenuItem;	// 0x330f881d
- (id)shelfForData:(id)data;	// 0x330f647d
- (float)shelfHeightForData:(id)data;	// 0x330f7cc1
@end

