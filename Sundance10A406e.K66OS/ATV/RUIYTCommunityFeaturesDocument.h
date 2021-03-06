/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "RUIYTDocument.h"

@class RUIYTMediaAsset, YTAuthenticatedAccountPost, YTVideo, RUIYTDocumentLoader;

__attribute__((visibility("hidden")))
@interface RUIYTCommunityFeaturesDocument : RUIYTDocument <RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	YTAuthenticatedAccountPost *_request;	// 8 = 0x8
	RUIYTMediaAsset *_asset;	// 12 = 0xc
}
@property(retain, nonatomic) RUIYTMediaAsset *asset;	// G=0x2623b1; S=0x2623c1; @synthesize=_asset
@property(retain, nonatomic) RUIYTDocumentLoader *documentLoader;	// G=0x262341; S=0x262351; @synthesize=_documentLoader
@property(retain, nonatomic) YTAuthenticatedAccountPost *request;	// G=0x262379; S=0x262389; @synthesize=_request
@property(readonly, assign, nonatomic) YTVideo *video;	// G=0x261e45; 
- (id)initWithAsset:(id)asset;	// 0x261c6d
- (void).cxx_destruct;	// 0x2623e9
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x261e99
- (BOOL)_shouldSilentlyIgnoreError:(id)error type:(int)type;	// 0x2622cd
// declared property getter: - (id)asset;	// 0x2623b1
- (void)dealloc;	// 0x261db1
// declared property getter: - (id)documentLoader;	// 0x262341
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x262131
// declared property getter: - (id)request;	// 0x262379
// declared property setter: - (void)setAsset:(id)asset;	// 0x2623c1
// declared property setter: - (void)setDocumentLoader:(id)loader;	// 0x262351
// declared property setter: - (void)setRequest:(id)request;	// 0x262389
// declared property getter: - (id)video;	// 0x261e45
@end

