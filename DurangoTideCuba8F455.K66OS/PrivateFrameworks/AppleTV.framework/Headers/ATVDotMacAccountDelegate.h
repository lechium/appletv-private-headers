/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacAccountDelegate : ATVDotMacParserDelegate {
@private
	NSArray *_albumOrder;	// 24 = 0x18
	NSArray *_videoOrder;	// 28 = 0x1c
	NSArray *_slideshowOrder;	// 32 = 0x20
	NSDate *_modDate;	// 36 = 0x24
	NSDictionary *_startSelectors;	// 40 = 0x28
	NSDictionary *_endSelectors;	// 44 = 0x2c
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x3064d2f9; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x3064d309; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x3064d2e9; converted property
- (id)init;	// 0x3064e589
- (void)__atv_end_dotmac_iMovieUserOrder;	// 0x3064e315
- (void)__atv_end_dotmac_keyImagePath;	// 0x3064e151
- (void)__atv_end_dotmac_posterPath;	// 0x3064e001
- (void)__atv_end_dotmac_redacted;	// 0x3064e0e1
- (void)__atv_end_dotmac_title;	// 0x3064e1cd
- (void)__atv_end_dotmac_type;	// 0x3064e205
- (void)__atv_end_dotmac_userHidden;	// 0x3064e071
- (void)__atv_end_dotmac_useritemguid;	// 0x3064e039
- (void)__atv_end_dotmac_userorder;	// 0x3064e3fd
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x3064deb1
- (void)__atv_end_dotmac_videoDurationMed;	// 0x3064df21
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x3064df91
- (void)__atv_end_dotmac_videoPathLrg;	// 0x3064dee9
- (void)__atv_end_dotmac_videoPathMed;	// 0x3064df59
- (void)__atv_end_dotmac_videoPathSmall;	// 0x3064dfc9
- (void)__atv_end_dotmac_viewIdentifier;	// 0x3064e23d
- (void)__atv_end_dotmac_webImagePath;	// 0x3064e119
- (void)__atv_end_iphoto_userHidden;	// 0x3064e0a9
- (void)__atv_end_slideshowUserOrder;	// 0x3064e2ad
- (void)__atv_end_title;	// 0x3064e275
- (void)__atv_end_updated;	// 0x3064ea1d
- (void)__atv_start_link:(id)link;	// 0x3064e189
- (id)_publicMedia;	// 0x3064d319
- (void)_updateEntriesWithDateTaken:(id)dateTaken withType:(id)type;	// 0x3064ec21
- (void)dealloc;	// 0x3064e4e5
- (id)displayName;	// 0x3064d465
// converted property getter: - (id)endSelectors;	// 0x3064d2f9
- (id)listOfAlbumInfos;	// 0x3064dcc9
- (id)listOfAlbumInfosAlphabetically;	// 0x3064dc0d
- (id)listOfAlbumInfosUserSort;	// 0x3064eb99
- (id)listOfVideoInfos;	// 0x3064da11
- (id)listOfVideoInfosAlphabetically;	// 0x3064d955
- (id)listOfVideoInfosUserSort;	// 0x3064eb11
- (id)mediaUserSort;	// 0x3064de35
// converted property getter: - (id)modDate;	// 0x3064d309
- (id)mostRecentAlbumInfo;	// 0x3064d505
- (id)slideshowInfos;	// 0x3064d789
- (id)slideshowInfosAlphabetically;	// 0x3064d6cd
- (id)slideshowInfosUserSort;	// 0x3064ea89
// converted property getter: - (id)startSelectors;	// 0x3064d2e9
@end

