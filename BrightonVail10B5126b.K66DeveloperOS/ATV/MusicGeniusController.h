/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSArray, ATVDataItem;

__attribute__((visibility("hidden")))
@interface MusicGeniusController : MusicController {
	ATVDataItem *_geniusSeed;	// 164 = 0xa4
	BOOL _isDataSavedIntoMetadata;	// 168 = 0xa8
	NSArray *_dataFromMetadata;	// 172 = 0xac
	BOOL _startGeniusPlayback;	// 176 = 0xb0
}
@property(assign, nonatomic) BOOL startGeniusPlayback;	// G=0x1cf60d; S=0x1cf61d; @synthesize=_startGeniusPlayback
- (id)initFromMetadataWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1ce451
- (id)initWithSeed:(id)seed;	// 0x1ce3a5
- (void)_setup;	// 0x1cf62d
- (void)_showMediaMenuView;	// 0x1cf705
- (id)data;	// 0x1ce5c1
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1ceb8d
- (BOOL)dataQueryComplete:(id)complete;	// 0x1ce745
- (void)dealloc;	// 0x1ce55d
- (id)errorControlForQuery:(id)query;	// 0x1cea49
- (id)indexPathForDataItem:(void *)dataItem;	// 0x1ceb1d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1ceedd
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1cf3d1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1cf24d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1cedb5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1cf4c5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1cf40d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1cec09
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1ceded
- (id)newDataQuery;	// 0x1ce67d
// declared property setter: - (void)setStartGeniusPlayback:(BOOL)playback;	// 0x1cf61d
// declared property getter: - (BOOL)startGeniusPlayback;	// 0x1cf60d
@end

