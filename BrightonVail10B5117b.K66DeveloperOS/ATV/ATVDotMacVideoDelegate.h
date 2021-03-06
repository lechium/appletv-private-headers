/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacParserDelegate.h"

@class NSDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoDelegate : ATVDotMacParserDelegate {
	NSDate *_modDate;	// 24 = 0x18
	NSDictionary *_startSelectors;	// 28 = 0x1c
	NSDictionary *_endSelectors;	// 32 = 0x20
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x1ae7d9; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x1ae7e9; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x1ae7c9; converted property
- (id)init;	// 0x1ae111
- (void)__atv_end_dotmac_description;	// 0x1ae541
- (void)__atv_end_dotmac_posterPath;	// 0x1ae5c1
- (void)__atv_end_dotmac_title;	// 0x1ae501
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x1ae741
- (void)__atv_end_dotmac_videoDurationMed;	// 0x1ae6c1
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x1ae641
- (void)__atv_end_dotmac_videoPathLrg;	// 0x1ae701
- (void)__atv_end_dotmac_videoPathMed;	// 0x1ae681
- (void)__atv_end_dotmac_videoPathSmall;	// 0x1ae601
- (void)__atv_end_dotmac_webImagePath;	// 0x1ae581
- (void)__atv_end_title;	// 0x1ae4c1
- (void)__atv_end_updated;	// 0x1ae781
- (void)dealloc;	// 0x1ae449
// converted property getter: - (id)endSelectors;	// 0x1ae7d9
// converted property getter: - (id)modDate;	// 0x1ae7e9
// converted property getter: - (id)startSelectors;	// 0x1ae7c9
- (id)videoName;	// 0x1ae7f9
@end

