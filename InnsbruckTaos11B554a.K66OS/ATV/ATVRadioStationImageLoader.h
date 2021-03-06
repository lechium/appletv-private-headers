/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperation, BRURLImageProxy, NSURL;
@protocol ATVRadioStationImageLoaderDelegate;

__attribute__((visibility("hidden")))
@interface ATVRadioStationImageLoader : XXUnknownSuperclass {
	id<ATVRadioStationImageLoaderDelegate> _delegate;	// 4 = 0x4
	NSURL *_artworkURL;	// 8 = 0x8
	unsigned _style;	// 12 = 0xc
	BRURLImageProxy *_originalImageProxy;	// 16 = 0x10
	NSOperation *_decorationOperation;	// 20 = 0x14
}
@property(retain) NSURL *artworkURL;	// G=0x4ac991; S=0x4ac9a5; @synthesize=_artworkURL
@property(retain, nonatomic) NSOperation *decorationOperation;	// G=0x4aca19; S=0x4aca29; @synthesize=_decorationOperation
@property(assign, nonatomic) __weak id<ATVRadioStationImageLoaderDelegate> delegate;	// G=0x4ac95d; S=0x4ac97d; @synthesize=_delegate
@property(retain, nonatomic) BRURLImageProxy *originalImageProxy;	// G=0x4ac9e1; S=0x4ac9f1; @synthesize=_originalImageProxy
@property(assign) unsigned style;	// G=0x4ac9b5; S=0x4ac9c9; @synthesize=_style
+ (id)_attributesForImageAtIndex:(unsigned)index withStyle:(unsigned)style;	// 0x4ab19d
+ (id)_decorateOriginalImage:(id)image withStyle:(unsigned)style forItemAtIndex:(unsigned)index;	// 0x4ab2fd
+ (id)processingQueue;	// 0x4ab10d
- (id)initWithStation:(id)station style:(unsigned)style;	// 0x4ab815
- (void).cxx_destruct;	// 0x4aca51
- (void)_createStackImagesWithOriginalImage:(id)originalImage;	// 0x4abfb5
- (id)_decoratedImagesFromCacheForOperation:(id)operation;	// 0x4abe6d
- (void)_didLoadImages:(id)images;	// 0x4abc39
- (void)_imageNotAvailable:(id)available;	// 0x4ac839
- (void)_imageUpdated:(id)updated;	// 0x4ac6b1
- (void)_loadOriginalImage;	// 0x4abac5
- (id)_nameForDecoratedImageAtIndex:(unsigned)index;	// 0x4abced
- (unsigned)_numberOfImages;	// 0x4ab911
// declared property getter: - (id)artworkURL;	// 0x4ac991
- (void)dealloc;	// 0x4ab8a5
// declared property getter: - (id)decorationOperation;	// 0x4aca19
// declared property getter: - (id)delegate;	// 0x4ac95d
// declared property getter: - (id)originalImageProxy;	// 0x4ac9e1
// declared property setter: - (void)setArtworkURL:(id)url;	// 0x4ac9a5
// declared property setter: - (void)setDecorationOperation:(id)operation;	// 0x4aca29
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4ac97d
// declared property setter: - (void)setOriginalImageProxy:(id)proxy;	// 0x4ac9f1
// declared property setter: - (void)setStyle:(unsigned)style;	// 0x4ac9c9
- (void)startLoadingImages;	// 0x4ab915
- (void)stopLoadingImages;	// 0x4ab991
// declared property getter: - (unsigned)style;	// 0x4ac9b5
@end

