/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class ATVStoreFavorite, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVStoreFavoriteRefreshTask : BRBackgroundTask {
	ATVStoreFavorite *_favorite;	// 44 = 0x2c
	ATVURLDocument *_curDocumentBeingFetched;	// 48 = 0x30
}
- (id)initWithFavorite:(id)favorite;	// 0x132681
- (void)_catalogControlRequestProcessed:(id)processed;	// 0x132981
- (void)_finalizePageRefresh:(id)refresh;	// 0x132de5
- (void)dealloc;	// 0x1326f9
- (void)disable:(id)disable;	// 0x132905
- (BOOL)perform:(id)perform;	// 0x132775
- (void)stop;	// 0x132945
@end

