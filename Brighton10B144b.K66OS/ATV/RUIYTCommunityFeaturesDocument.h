/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class YTAuthenticatedAccountPost, YTVideo, RUIYTDocumentLoader, RUIYTMediaAsset;

__attribute__((visibility("hidden")))
@interface RUIYTCommunityFeaturesDocument : RUIYTDocument <RUIYTDocumentLoaderDelegate> {
	YTAuthenticatedAccountPost *_request;	// 4 = 0x4
	RUIYTDocumentLoader *_documentLoader;	// 8 = 0x8
	RUIYTMediaAsset *_asset;	// 12 = 0xc
}
@property(retain, nonatomic) RUIYTMediaAsset *asset;	// G=0x2787a1; S=0x2787b1; @synthesize=_asset
@property(retain, nonatomic) RUIYTDocumentLoader *documentLoader;	// G=0x278769; S=0x278779; @synthesize=_documentLoader
@property(retain, nonatomic) YTAuthenticatedAccountPost *request;	// G=0x278731; S=0x278741; @synthesize=_request
@property(readonly, assign, nonatomic) YTVideo *video;	// G=0x278235; 
- (id)initWithAsset:(id)asset;	// 0x27805d
- (void).cxx_destruct;	// 0x2787d9
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x278289
- (BOOL)_shouldSilentlyIgnoreError:(id)error type:(int)type;	// 0x2786bd
// declared property getter: - (id)asset;	// 0x2787a1
- (void)dealloc;	// 0x2781a1
// declared property getter: - (id)documentLoader;	// 0x278769
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x278521
// declared property getter: - (id)request;	// 0x278731
// declared property setter: - (void)setAsset:(id)asset;	// 0x2787b1
// declared property setter: - (void)setDocumentLoader:(id)loader;	// 0x278779
// declared property setter: - (void)setRequest:(id)request;	// 0x278741
// declared property getter: - (id)video;	// 0x278235
@end
