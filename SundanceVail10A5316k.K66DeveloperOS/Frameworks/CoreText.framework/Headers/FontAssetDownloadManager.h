/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <NSObject.h> // Unknown library
#import "CoreText-Structs.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FontAssetDownloadManager : NSObject {
@private
	TCFRef<const __CFArray *> fDescriptors;	// 4 = 0x4
	TCFRef<const __CFSet *> fMandatoryAttributes;	// 8 = 0x8
	id fProgressCallbackBlock;	// 12 = 0xc
	NSMutableDictionary *fProgressParams;	// 16 = 0x10
	NSMutableDictionary *fDownloadOptions;	// 20 = 0x14
	NSString *fPreciousFontLanguage;	// 24 = 0x18
}
+ (id)getPreciousFontLanguage;	// 0x33978299
- (id)initWithDescriptors:(CFArrayRef)descriptors andMandatoryAttributes:(CFSetRef)attributes withBlock:(id)block;	// 0x33978061
- (id).cxx_construct;	// 0x3397a0f5
- (void).cxx_destruct;	// 0x3397a0bd
- (BOOL)activateFontsFromAssetURL:(id)assetURL;	// 0x339798d9
- (unsigned long)calculateDownloadSize:(id)size;	// 0x33978d61
- (BOOL)callProgressCallbak:(unsigned)callbak;	// 0x33978319
- (void)dealloc;	// 0x3397817d
- (id)doFinalMatching;	// 0x33979a5d
- (void)downloadFontAssets;	// 0x3397844d
- (BOOL)executeDownloadingFontAssets:(id)assets forDescriptors:(id)descriptors;	// 0x33978ef9
- (id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)descriptor from:(id)from withFailInfo:(BOOL *)failInfo;	// 0x339788b9
- (Class)getASAssetQueryClass;	// 0x33979d19
- (id)getAvailableMobileAssets:(BOOL)assets;	// 0x33978721
- (id)getUnmatchedDescriptors;	// 0x33978541
- (id)mobileAssetsForUnmatched:(id)unmatched;	// 0x33978b15
- (void)setDownloadOptionsForMobileAsset;	// 0x33978239
- (void)setGarbageCollectionBehaviorForAsset:(id)asset;	// 0x3397a041
- (void)setProgressParam:(id)param forKey:(id)key;	// 0x33978419
- (BOOL)shoudTryServer;	// 0x33978b11
@end

