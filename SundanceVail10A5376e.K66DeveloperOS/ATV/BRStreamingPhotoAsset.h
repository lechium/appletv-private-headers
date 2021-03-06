/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRPhotoMediaAsset.h"
#import "BRATVMediaItem.h"

@class ATVDataClient, BRImageManager, ATVDataItem, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface BRStreamingPhotoAsset : BRPhotoMediaAsset <BRATVMediaItem> {
	BRImageManager *_preferredImageManager;	// 40 = 0x28
	ATVDataClient *_dataClient;	// 44 = 0x2c
	ATVDataItem *_mediaItem;	// 48 = 0x30
	ATVDataCollection *_mediaCollection;	// 52 = 0x34
	BOOL _useForScreenSaver;	// 56 = 0x38
}
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x296485; S=0x296495; @synthesize=_dataClient
@property(retain, nonatomic) ATVDataCollection *mediaCollection;	// G=0x2964c5; S=0x2964d5; @synthesize=_mediaCollection
@property(retain, nonatomic) ATVDataItem *mediaItem;	// G=0x2964a5; S=0x2964b5; @synthesize=_mediaItem
@property(readonly, retain) BRImageManager *preferredImageManager;	// G=0x295d1d; converted property
@property(assign, nonatomic) BOOL useForScreenSaver;	// G=0x29616d; S=0x29615d; @synthesize=_useForScreenSaver
+ (id)assetWithATVMediaItem:(id)atvmediaItem dataClient:(id)client;	// 0x295ba1
- (id)initWithATVMediaCollection:(id)atvmediaCollection dataClient:(id)client;	// 0x295c41
- (id)initWithATVMediaItem:(id)atvmediaItem dataClient:(id)client;	// 0x295be1
- (CGRect)_paddedFaceRectFromFaceRect:(CGRect)faceRect;	// 0x2962b9
- (id)artID;	// 0x295da1
// declared property getter: - (id)dataClient;	// 0x296485
- (id)dateTaken;	// 0x295e75
- (void)dealloc;	// 0x295ca1
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x295f09
- (id)faces;	// 0x2960b5
- (BOOL)hasVideoContent;	// 0x296265
- (id)imageProxy;	// 0x295ea1
- (BOOL)isLocal;	// 0x295d0d
// declared property getter: - (id)mediaCollection;	// 0x2964c5
// declared property getter: - (id)mediaItem;	// 0x2964a5
- (id)mediaItemRef;	// 0x29617d
- (id)mediaType;	// 0x29618d
- (id)mediaURL;	// 0x296219
// converted property getter: - (id)preferredImageManager;	// 0x295d1d
// declared property setter: - (void)setDataClient:(id)client;	// 0x296495
// declared property setter: - (void)setMediaCollection:(id)collection;	// 0x2964d5
// declared property setter: - (void)setMediaItem:(id)item;	// 0x2964b5
// declared property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x29615d
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x2960f1
// declared property getter: - (BOOL)useForScreenSaver;	// 0x29616d
@end

