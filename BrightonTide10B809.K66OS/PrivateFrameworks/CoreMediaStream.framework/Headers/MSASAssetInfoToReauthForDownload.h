/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSASAlbum, MSAsset;

@interface MSASAssetInfoToReauthForDownload : NSObject {
	MSAsset *_asset;	// 4 = 0x4
	MSASAlbum *_album;	// 8 = 0x8
}
@property(retain, nonatomic) MSASAlbum *album;	// G=0x3377bdc9; S=0x3377bdd9; @synthesize=_album
@property(retain, nonatomic) MSAsset *asset;	// G=0x3377bd91; S=0x3377bda1; @synthesize=_asset
- (void).cxx_destruct;	// 0x3377be01
// declared property getter: - (id)album;	// 0x3377bdc9
// declared property getter: - (id)asset;	// 0x3377bd91
// declared property setter: - (void)setAlbum:(id)album;	// 0x3377bdd9
// declared property setter: - (void)setAsset:(id)asset;	// 0x3377bda1
@end

