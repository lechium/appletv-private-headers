/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider, NSString;

@interface MREffectBackgroundImage : MREffect {
	MRImageProvider *mImageProvider;	// 112 = 0x70
	NSString *mClampingMode;	// 116 = 0x74
}
@property(retain) id assetPath;	// G=0x349a2229; S=0x349a2255; converted property
- (id)initWithEffectID:(id)effectID;	// 0x349a168d
- (void)_cleanup;	// 0x349a1955
- (void)_unload;	// 0x349a2281
// converted property getter: - (id)assetPath;	// 0x349a2229
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349a1a65
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349a1ae5
// converted property setter: - (void)setAssetPath:(id)path;	// 0x349a2255
- (void)setPixelSize:(CGSize)size;	// 0x349a19c1
@end

