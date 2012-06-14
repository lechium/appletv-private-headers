/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacAsset.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoAsset : ATVDotMacAsset {
	long _duration;	// 60 = 0x3c
	NSString *_mediaURL;	// 64 = 0x40
	NSString *_description;	// 68 = 0x44
}
@property(assign) long duration;	// G=0x183b6d; S=0x183b7d; converted property
@property(retain) NSString *mediaURL;	// G=0x1839a9; S=0x183a85; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x1838ed
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x183d71
- (void)dealloc;	// 0x183945
// converted property getter: - (long)duration;	// 0x183b6d
- (BOOL)hasVideoContent;	// 0x183d6d
- (id)mediaDescription;	// 0x183b8d
- (id)mediaType;	// 0x183d51
// converted property getter: - (id)mediaURL;	// 0x1839a9
- (void)setDescription:(id)description;	// 0x183c69
// converted property setter: - (void)setDuration:(long)duration;	// 0x183b7d
// converted property setter: - (void)setMediaURL:(id)url;	// 0x183a85
@end
