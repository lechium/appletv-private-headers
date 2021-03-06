/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicArtistsController : MusicController {
	int _mode;	// 164 = 0xa4
	NSString *_genre;	// 168 = 0xa8
	NSMutableArray *_artistData;	// 172 = 0xac
}
+ (id)allArtistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1b3385
+ (id)allComposersControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1b3421
+ (id)artistsControllerByGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1b34bd
- (id)initWithGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1b3505
- (int)_headerCount;	// 0x1b4429
- (void)_setMode:(int)mode;	// 0x1b4419
- (id)data;	// 0x1b3761
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1b4389
- (BOOL)dataQueryComplete:(id)complete;	// 0x1b3735
- (void)dealloc;	// 0x1b3589
- (id)errorForNoContent;	// 0x1b3ec9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1b4041
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1b40d1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1b3fed
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1b3ee9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1b3ff9
- (id)newDataQuery;	// 0x1b3601
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1b3c51
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1b39f5
- (void)playQueryComplete:(id)complete;	// 0x1b3dad
@end

