/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRMenuItem, BRPosterControl, NSAttributedString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoCacheMonitor : NSObject {
@private
	NSAttributedString *_posterOriginalText;	// 4 = 0x4
	BOOL _posterAlwaysShowTitlesOriginal;	// 8 = 0x8
	BRMenuItem *_menuItem;	// 12 = 0xc
	BRPosterControl *_poster;	// 16 = 0x10
	NSArray *_assetIDs;	// 20 = 0x14
}
@property(readonly, assign) NSArray *assetIDs;	// G=0x3038e09d; @synthesize=_assetIDs
@property(readonly, assign) BRMenuItem *menuItem;	// G=0x3038e07d; @synthesize=_menuItem
@property(readonly, assign) BRPosterControl *poster;	// G=0x3038e08d; @synthesize=_poster
- (id)initWithMenuItem:(id)menuItem assetIDs:(id)ids;	// 0x3038dea5
- (id)initWithPoster:(id)poster assetIDs:(id)ids;	// 0x3038df21
- (BOOL)_assetWithAssetIDIsLoading;	// 0x3038e379
- (void)_cacheManagerStateChanged:(id)changed;	// 0x3038e49d
- (id)_initWithObject:(id)object assetIDs:(id)ids;	// 0x3038e0ad
- (void)_itemUpdated:(id)updated;	// 0x3038e4d1
- (void)_updateMenuItemText;	// 0x3038e1b5
- (void)_updatePosterText;	// 0x3038e24d
// declared property getter: - (id)assetIDs;	// 0x3038e09d
- (void)dealloc;	// 0x3038dfed
// declared property getter: - (id)menuItem;	// 0x3038e07d
// declared property getter: - (id)poster;	// 0x3038e08d
@end

