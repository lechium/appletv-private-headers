/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VideoController.h"
#import "AppleTVAPPBinary-Structs.h"


__attribute__((visibility("hidden")))
@interface VideoController : XXUnknownSuperclass {
	ATVMediaCollectionRef _mediaItemsCollection;	// 124 = 0x7c
	BOOL _displayPlaylistsMenuItem;	// 128 = 0x80
}
@property(assign) BOOL displayPlaylistsMenuItem;	// G=0x7a6b1; S=0x7a6a1; converted property
@property(assign) ATVMediaCollectionRef mediaItemsCollection;	// G=0x7a691; S=0x7a665; converted property
+ (int)getWatchedState:(id)state;	// 0x7a5e1
- (id)controllerIdentifier;	// 0x7ac11
- (id)currentItems;	// 0x7ab11
// converted property getter: - (BOOL)displayPlaylistsMenuItem;	// 0x7a6b1
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x7adc9
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x7aca9
// converted property getter: - (ATVMediaCollectionRef)mediaItemsCollection;	// 0x7a691
- (id)providersForContextMenu;	// 0x7a6c1
// converted property setter: - (void)setDisplayPlaylistsMenuItem:(BOOL)item;	// 0x7a6a1
// converted property setter: - (void)setMediaItemsCollection:(ATVMediaCollectionRef)collection;	// 0x7a665
- (id)unwatchedItems;	// 0x7ab15
@end

@interface VideoController (Private)
- (void)_handleContextMenuMarkUnwatchedSelection:(id)selection;	// 0x7b019
- (void)_handleContextMenuMarkWatchedSelection:(id)selection;	// 0x7af41
- (id)_listIdentifier;	// 0x7b0f1
@end
