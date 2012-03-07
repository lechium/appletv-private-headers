/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRBaseMediaAsset.h"

@class BRImageManager, NSString;

@interface BRPhotoMediaAsset : BRBaseMediaAsset {
@private
	NSString *_thumbURL;	// 8 = 0x8
	NSString *_coverArtURL;	// 12 = 0xc
	NSString *_fullURL;	// 16 = 0x10
	NSString *_artID;	// 20 = 0x14
	double _dateTakenTimerInterval;	// 24 = 0x18
	BOOL _isLocal;	// 32 = 0x20
	NSString *_title;	// 36 = 0x24
}
@property(retain) NSString *artID;	// G=0x33a5e4ad; S=0x33a5e3dd; converted property
@property(retain) NSString *coverArtURL;	// G=0x33a5e031; S=0x33a5e0fd; converted property
@property(retain) id dateTaken;	// G=0x33a5e1cd; S=0x33a5e215; converted property
@property(retain) NSString *fullURL;	// G=0x33a5dcf9; S=0x33a5ddc5; converted property
@property(assign) BOOL isLocal;	// G=0x33a5d7f5; S=0x33a5d7e5; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x33a5e5b1; 
@property(retain) NSString *thumbURL;	// G=0x33a5de95; S=0x33a5df61; converted property
@property(retain) NSString *title;	// G=0x33a5e241; S=0x33a5e30d; converted property
- (id)init;	// 0x33a5d65d
// converted property getter: - (id)artID;	// 0x33a5e4ad
- (id)assetID;	// 0x33a5d825
- (id)coverArt;	// 0x33a5dbb9
- (id)coverArtID;	// 0x33a5d949
// converted property getter: - (id)coverArtURL;	// 0x33a5e031
// converted property getter: - (id)dateTaken;	// 0x33a5e1cd
- (void)dealloc;	// 0x33a5d6a1
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x33a5e579
- (id)faces;	// 0x33a5e59d
- (id)fullSizeArt;	// 0x33a5dc49
- (id)fullSizeArtID;	// 0x33a5da39
// converted property getter: - (id)fullURL;	// 0x33a5dcf9
- (unsigned)hash;	// 0x33a5d73d
- (id)imageProxy;	// 0x33a5d805
- (BOOL)isEqual:(id)equal;	// 0x33a5d765
// converted property getter: - (BOOL)isLocal;	// 0x33a5d7f5
- (id)mediaType;	// 0x33a5dcd9
// declared property getter: - (id)preferredImageManager;	// 0x33a5e5b1
- (id)primaryCollection;	// 0x33a5dcf5
// converted property setter: - (void)setArtID:(id)anId;	// 0x33a5e3dd
// converted property setter: - (void)setCoverArtURL:(id)url;	// 0x33a5e0fd
// converted property setter: - (void)setDateTaken:(id)taken;	// 0x33a5e215
// converted property setter: - (void)setFullURL:(id)url;	// 0x33a5ddc5
// converted property setter: - (void)setIsLocal:(BOOL)local;	// 0x33a5d7e5
// converted property setter: - (void)setThumbURL:(id)url;	// 0x33a5df61
// converted property setter: - (void)setTitle:(id)title;	// 0x33a5e30d
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x33a5e5a1
// converted property getter: - (id)thumbURL;	// 0x33a5de95
- (id)thumbnailArt;	// 0x33a5db29
- (id)thumbnailArtID;	// 0x33a5d859
// converted property getter: - (id)title;	// 0x33a5e241
@end
