/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"


__attribute__((visibility("hidden")))
@interface BRRSSMediaAsset : BRXMLMediaAsset {
	BOOL _needsVolumeFading;	// 12 = 0xc
}
@property(assign) BOOL needsVolumeFading;	// G=0x288a55; S=0x288a65; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x2887ad
- (id)coverArt;	// 0x288841
- (id)description;	// 0x288a2d
- (long)duration;	// 0x2887ed
- (BOOL)hasVideoContent;	// 0x2889ed
// converted property getter: - (BOOL)needsVolumeFading;	// 0x288a55
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x288a65
@end
