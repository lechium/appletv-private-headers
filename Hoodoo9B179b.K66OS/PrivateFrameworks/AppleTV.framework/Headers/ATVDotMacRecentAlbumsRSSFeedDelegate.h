/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacRecentAlbumsRSSFeedDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_recentAlbums;	// 12 = 0xc
	NSMutableDictionary *_currentAlbumInfo;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *recentAlbums;	// G=0x301cb2cd; converted property
+ (id)delegate;	// 0x301cb1c1
- (id)init;	// 0x301cb209
- (void)dealloc;	// 0x301cb26d
- (void)endItem;	// 0x301cb489
- (void)endLink;	// 0x301cb5a9
- (void)endPubDate;	// 0x301cb4dd
- (void)endTitle;	// 0x301cb545
// converted property getter: - (id)recentAlbums;	// 0x301cb2cd
- (void)startEnclosureWithAttributes:(id)attributes;	// 0x301cb33d
- (void)startItemWithAttributes:(id)attributes;	// 0x301cb2f9
@end

