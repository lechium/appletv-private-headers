/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIImage.h> // Unknown library

@class NSData;

@interface SBWallpaperImage : UIImage {
	int _variant;	// 36 = 0x24
	NSData *_data;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x349b3a3d; @synthesize=_data
@property(readonly, assign, nonatomic) int variant;	// G=0x349b3a2d; @synthesize=_variant
+ (id)cachedWallpaperDataForVariant:(int)variant;	// 0x349b3671
+ (void)clearCachedWallpaper;	// 0x349b3631
+ (void)preheatWallpaperDataForVariant:(int)variant;	// 0x349b36b1
- (id)initWithVariant:(int)variant;	// 0x349b3799
// declared property getter: - (id)data;	// 0x349b3a3d
- (void)dealloc;	// 0x349b3919
- (BOOL)isEqual:(id)equal;	// 0x349b3965
// declared property getter: - (int)variant;	// 0x349b3a2d
@end

