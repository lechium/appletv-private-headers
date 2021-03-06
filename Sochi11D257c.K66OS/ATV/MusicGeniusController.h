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
@property(assign, nonatomic) BOOL startGeniusPlayback;	// G=0x1c67c1; S=0x1c67d1; @synthesize=_startGeniusPlayback
- (id)initFromMetadataWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x1c560d
- (id)initWithSeed:(id)seed;	// 0x1c5561
- (void)_setup;	// 0x1c67e1
- (void)_showMediaMenuView;	// 0x1c68b9
- (id)data;	// 0x1c577d
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1c5d25
- (BOOL)dataQueryComplete:(id)complete;	// 0x1c5901
- (void)dealloc;	// 0x1c5719
- (id)errorControlForQuery:(id)query;	// 0x1c5c05
- (id)indexPathForDataItem:(void *)dataItem;	// 0x1c5cb5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1c608d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1c6585
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1c63fd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1c5f65
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1c6679
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1c65c1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1c5da1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1c5f9d
- (id)newDataQuery;	// 0x1c5839
// declared property setter: - (void)setStartGeniusPlayback:(BOOL)playback;	// 0x1c67d1
// declared property getter: - (BOOL)startGeniusPlayback;	// 0x1c67c1
@end

