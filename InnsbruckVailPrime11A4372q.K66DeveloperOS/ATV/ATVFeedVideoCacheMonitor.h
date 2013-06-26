/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, BRPosterControl, NSArray, BRMenuItem;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoCacheMonitor : XXUnknownSuperclass {
	NSAttributedString *_posterOriginalText;	// 4 = 0x4
	BOOL _posterAlwaysShowTitlesOriginal;	// 8 = 0x8
	BRMenuItem *_menuItem;	// 12 = 0xc
	BRPosterControl *_poster;	// 16 = 0x10
	NSArray *_assetIDs;	// 20 = 0x14
}
@property(readonly, assign) NSArray *assetIDs;	// G=0x117789; @synthesize=_assetIDs
@property(readonly, assign) BRMenuItem *menuItem;	// G=0x117761; @synthesize=_menuItem
@property(readonly, assign) BRPosterControl *poster;	// G=0x117775; @synthesize=_poster
- (id)initWithMenuItem:(id)menuItem assetIDs:(id)ids;	// 0x117589
- (id)initWithPoster:(id)poster assetIDs:(id)ids;	// 0x117605
- (BOOL)_assetWithAssetIDIsLoading;	// 0x117a6d
- (void)_cacheManagerStateChanged:(id)changed;	// 0x117b89
- (id)_initWithObject:(id)object assetIDs:(id)ids;	// 0x11779d
- (void)_itemUpdated:(id)updated;	// 0x117bbd
- (void)_updateMenuItemText;	// 0x1178a5
- (void)_updatePosterText;	// 0x117941
// declared property getter: - (id)assetIDs;	// 0x117789
- (void)dealloc;	// 0x1176d1
// declared property getter: - (id)menuItem;	// 0x117761
// declared property getter: - (id)poster;	// 0x117775
@end
