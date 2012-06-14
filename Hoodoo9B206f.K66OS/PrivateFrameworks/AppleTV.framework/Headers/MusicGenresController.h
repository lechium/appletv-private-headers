/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"


__attribute__((visibility("hidden")))
@interface MusicGenresController : MusicController {
}
+ (id)allGenresControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x367b4e25
- (int)_headerCount;	// 0x367b5419
- (ATVMediaQueryRef)createDataQuery;	// 0x367b4ead
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x367b4f55
- (id)errorForNoContent;	// 0x367b4f35
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x367b521d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x367b52ad
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x367b51c9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x367b5095
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x367b51d5
@end
