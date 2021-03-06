/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class BRMetadataPreviewControl, NSDictionary, BRMediaMenuView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVPodcastStationController : BRViewController {
	NSDictionary *_station;	// 104 = 0x68
	BRMediaMenuView *_mediaMenuView;	// 108 = 0x6c
	BRMetadataPreviewControl *_metadataControl;	// 112 = 0x70
	NSDictionary *_collectionIdToShows;	// 116 = 0x74
	BOOL _isGrouped;	// 120 = 0x78
	NSArray *_shows;	// 124 = 0x7c
}
@property(copy, nonatomic) NSArray *shows;	// G=0x20126d; S=0x1ff15d; @synthesize=_shows
- (id)init;	// 0x1feed9
- (id)initWithStation:(id)station;	// 0x1feef5
- (void).cxx_destruct;	// 0x201281
- (id)_allBlueDotParams;	// 0x200215
- (id)_blueDotParamsForSelectedItem;	// 0x1fffc5
- (void)_markAllAsUnwatched;	// 0x20083d
- (void)_markAllAsWatched;	// 0x2007fd
- (void)_markAsUnwatched;	// 0x2007bd
- (void)_markAsWatched;	// 0x20077d
- (void)_markAsWatched:(BOOL)watched blueDotParams:(id)params;	// 0x2004b9
- (void)_selectCollection:(id)collection;	// 0x200b49
- (void)_updateDetail:(id)detail;	// 0x2009e5
- (int)_watchStateWithGroupedShows:(id)groupedShows;	// 0x20087d
- (id)cancelProviderForContextMenu;	// 0x1fffc1
- (void)controlWasActivated;	// 0x1ff4d9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x20120d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x200c7d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x200c89
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2011ed
- (long)numberOfSectionsInList:(id)list;	// 0x2011e9
- (id)providersForContextMenu;	// 0x1ff879
// declared property setter: - (void)setShows:(id)shows;	// 0x1ff15d
// declared property getter: - (id)shows;	// 0x20126d
@end

