/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsset.h"

@class NSURL, AVURLAssetInternal, NSString, AVAssetCache;
@protocol AVURLAssetFailedURLRequestHandling;

@interface AVURLAsset : AVAsset {
@private
	AVURLAssetInternal *_asset;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30ab3091; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x30ab43d1; 
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x30ab4465; 
@property(assign, nonatomic, setter=setFailedURLRequestDelegate:) id<AVURLAssetFailedURLRequestHandling> failedURLRequestDelegate;	// G=0x30ab4611; S=0x30ab4535; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x30ab43fd; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x30ab4431; 
+ (id)URLAssetWithURL:(id)url options:(id)options;	// 0x30ab2511
+ (id)_avfValidationPlist;	// 0x30ab2119
+ (void)_ensureAudiovisualTypes;	// 0x30ab2129
+ (id)audiovisualMIMETypes;	// 0x30ab2495
+ (id)audiovisualTypes;	// 0x30ab2465
+ (void)initialize;	// 0x30ab2079
+ (BOOL)isPlayableExtendedMIMEType:(id)type;	// 0x30ab24c5
- (id)init;	// 0x30ab255d
- (id)initWithURL:(id)url options:(id)options;	// 0x30ab2571
// declared property getter: - (id)URL;	// 0x30ab3091
- (CFURLRef)_URL;	// 0x30ab3081
- (unsigned)_addChapterMetadataItem:(id)item withDuration:(XXStruct_pwHToB)duration timeRange:(XXStruct_yD8eWC)range toChapters:(id)chapters fromIndex:(unsigned)index;	// 0x30ab34e1
- (void)_addFigAssetNotifications;	// 0x30ab2735
- (id)_assetInspector;	// 0x30ab2e5d
- (id)_assetInspectorLoader;	// 0x30ab2de1
- (id)_chapterGroupInfo;	// 0x30ab3109
- (id)_errorForFigNotificationPayload:(CFDictionaryRef)figNotificationPayload key:(CFStringRef)key;	// 0x30ab26d1
- (OpaqueFigFormatReader *)_formatReader;	// 0x30ab2e89
- (void)_removeFigAssetNotifications;	// 0x30ab2b51
- (void)_setAssetInspectorLoader:(id)loader;	// 0x30ab2e01
- (void)_tracksDidChange;	// 0x30ab3041
// declared property getter: - (id)assetCache;	// 0x30ab43d1
- (id)availableChapterLocales;	// 0x30ab3381
// declared property getter: - (id)cacheKey;	// 0x30ab4465
- (void)cancelLoading;	// 0x30ab30b1
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x30ab3745
- (void)dealloc;	// 0x30ab2c51
- (id)description;	// 0x30ab2d79
- (id)downloadDestinationURL;	// 0x30ab4509
// declared property getter: - (id)failedURLRequestDelegate;	// 0x30ab4611
- (void)finalize;	// 0x30ab2d21
- (void)finishHandlingFailedURLRequestWithResponseProperties:(id)responseProperties;	// 0x30ab4631
- (id)lyrics;	// 0x30ab30dd
- (id)resolvedURL;	// 0x30ab44dd
// declared property setter: - (void)setFailedURLRequestDelegate:(id)delegate;	// 0x30ab4535
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x30ab43fd
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x30ab4431
- (id)tracks;	// 0x30ab2eb5
@end
