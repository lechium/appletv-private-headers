/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacAlbumDelegate : ATVDotMacParserDelegate {
@private
	NSString *_keyImageID;	// 24 = 0x18
	NSArray *_imageOrder;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDictionary *_startSelectors;	// 36 = 0x24
	NSDictionary *_endSelectors;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x32f3bfa9; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x32f3c2c1; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x32f3bf99; converted property
- (id)init;	// 0x32f3b815
- (void)__atv_end_dotmac_keyImagePath;	// 0x32f3bc2d
- (void)__atv_end_dotmac_largeImagePath;	// 0x32f3bd8d
- (void)__atv_end_dotmac_moviePath;	// 0x32f3becd
- (void)__atv_end_dotmac_title;	// 0x32f3bd4d
- (void)__atv_end_dotmac_userHidden;	// 0x32f3be0d
- (void)__atv_end_dotmac_useritemguid;	// 0x32f3be4d
- (void)__atv_end_dotmac_userorder;	// 0x32f3bc71
- (void)__atv_end_dotmac_videoDuration;	// 0x32f3bf0d
- (void)__atv_end_dotmac_viewIdentifier;	// 0x32f3bccd
- (void)__atv_end_dotmac_webImagePath;	// 0x32f3bdcd
- (void)__atv_end_iphoto_photoDate;	// 0x32f3be8d
- (void)__atv_end_title;	// 0x32f3bd0d
- (void)__atv_end_updated;	// 0x32f3bf4d
- (id)albumID;	// 0x32f3c279
- (id)albumName;	// 0x32f3c2d1
- (void)dealloc;	// 0x32f3bb91
// converted property getter: - (id)endSelectors;	// 0x32f3bfa9
- (int)imageCount;	// 0x32f3c251
- (id)itemInfos;	// 0x32f3bfb9
- (id)keyImageInfo;	// 0x32f3c195
// converted property getter: - (id)modDate;	// 0x32f3c2c1
- (id)sortedItemInfos;	// 0x32f3c13d
// converted property getter: - (id)startSelectors;	// 0x32f3bf99
@end
