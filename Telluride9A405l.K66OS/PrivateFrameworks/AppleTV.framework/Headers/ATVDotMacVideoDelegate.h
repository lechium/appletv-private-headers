/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoDelegate : ATVDotMacParserDelegate {
@private
	NSDate *_modDate;	// 24 = 0x18
	NSDictionary *_startSelectors;	// 28 = 0x1c
	NSDictionary *_endSelectors;	// 32 = 0x20
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x35ccfd31; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x35ccfd41; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x35ccfd21; converted property
- (id)init;	// 0x35ccf651
- (void)__atv_end_dotmac_description;	// 0x35ccfa95
- (void)__atv_end_dotmac_posterPath;	// 0x35ccfb15
- (void)__atv_end_dotmac_title;	// 0x35ccfa55
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x35ccfc95
- (void)__atv_end_dotmac_videoDurationMed;	// 0x35ccfc15
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x35ccfb95
- (void)__atv_end_dotmac_videoPathLrg;	// 0x35ccfc55
- (void)__atv_end_dotmac_videoPathMed;	// 0x35ccfbd5
- (void)__atv_end_dotmac_videoPathSmall;	// 0x35ccfb55
- (void)__atv_end_dotmac_webImagePath;	// 0x35ccfad5
- (void)__atv_end_title;	// 0x35ccfa15
- (void)__atv_end_updated;	// 0x35ccfcd5
- (void)dealloc;	// 0x35ccf9a1
// converted property getter: - (id)endSelectors;	// 0x35ccfd31
// converted property getter: - (id)modDate;	// 0x35ccfd41
// converted property getter: - (id)startSelectors;	// 0x35ccfd21
- (id)videoName;	// 0x35ccfd51
@end

