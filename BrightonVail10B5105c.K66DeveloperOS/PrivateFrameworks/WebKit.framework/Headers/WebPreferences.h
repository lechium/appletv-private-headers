/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "WebKit-Structs.h"


@interface WebPreferences : NSObject <NSCoding> {
	WebPreferencesPrivate *_private;	// 4 = 0x4
}
@property(assign, getter=isAVFoundationEnabled) BOOL aVFoundationEnabled;	// G=0x335ba3bd; S=0x335ba3a1; converted property
@property(assign) BOOL accelerated2dCanvasEnabled;	// G=0x33556841; S=0x335ba181; converted property
@property(assign) BOOL acceleratedCompositingEnabled;	// G=0x33556781; S=0x335ba07d; converted property
@property(assign) BOOL acceleratedDrawingEnabled;	// G=0x335567a1; S=0x335ba045; converted property
@property(assign) BOOL allowFileAccessFromFileURLs;	// G=0x33556135; S=0x335b99a1; converted property
@property(assign) BOOL allowUniversalAccessFromFileURLs;	// G=0x33556115; S=0x335b9985; converted property
@property(assign) BOOL allowsAnimatedImageLooping;	// G=0x335b974d; S=0x335b976d; converted property
@property(assign) BOOL allowsAnimatedImages;	// G=0x335b9711; S=0x335b9731; converted property
@property(assign) long long applicationCacheDefaultOriginQuota;	// G=0x33556bb5; S=0x335b9bc1; converted property
@property(assign) long long applicationCacheTotalQuota;	// G=0x335b9b55; S=0x335b9b71; converted property
@property(assign) BOOL applicationChromeModeEnabled;	// G=0x335564dd; S=0x335b9891; converted property
@property(assign) BOOL asynchronousSpellCheckingEnabled;	// G=0x335568e1; S=0x335ba361; converted property
@property(assign) unsigned audioSessionCategoryOverride;	// G=0x335ba415; S=0x335ba431; converted property
@property(assign) BOOL authorAndUserStylesEnabled;	// G=0x335564bd; S=0x335b9875; converted property
@property(assign) BOOL automaticallyDetectsCacheModel;	// G=0x335b9939; S=0x3354eb85; converted property
@property(assign) BOOL autosaves;	// G=0x335b97a5; S=0x3354e819; converted property
@property(assign) BOOL backspaceKeyNavigationEnabled;	// G=0x33556ae9; S=0x335ba545; converted property
@property(assign) unsigned cacheModel;	// G=0x3354f14d; S=0x3354e82d; converted property
@property(assign) BOOL canvasUsesAcceleratedDrawing;	// G=0x335567c1; S=0x335ba061; converted property
@property(retain) id cursiveFontFamily;	// G=0x33555e35; S=0x335b95e9; converted property
@property(assign, getter=isDNSPrefetchingEnabled) BOOL dNSPrefetchingEnabled;	// G=0x33556761; S=0x335b983d; converted property
@property(assign, getter=isDOMPasteAllowed) BOOL dOMPasteAllowed;	// G=0x33556361; S=0x335b9fd1; converted property
@property(assign) BOOL databasesEnabled;	// G=0x335511d5; S=0x335b9c3d; converted property
@property(assign) int defaultFixedFontSize;	// G=0x33555fb5; S=0x335b963d; converted property
@property(assign) int defaultFontSize;	// G=0x33555fd1; S=0x335b9621; converted property
@property(retain) id defaultTextEncodingName;	// G=0x33555fed; S=0x335b9691; converted property
@property(assign) BOOL developerExtrasEnabled;	// G=0x33556419; S=0x335b9859; converted property
@property(assign) BOOL diskImageCacheEnabled;	// G=0x33556c75; S=0x335ba19d; converted property
@property(assign) unsigned diskImageCacheMaximumCacheSize;	// G=0x33556cb1; S=0x335ba1d5; converted property
@property(assign) unsigned diskImageCacheMinimumImageSize;	// G=0x33556c95; S=0x335ba1b9; converted property
@property(assign) int editableLinkBehavior;	// G=0x335562dd; S=0x335b9be9; converted property
@property(assign) int editingBehavior;	// G=0x3355630d; S=0x335ba27d; converted property
@property(assign) BOOL experimentalNotificationsEnabled;	// G=0x335b9c75; S=0x335b9c95; converted property
@property(retain) id fantasyFontFamily;	// G=0x33556029; S=0x335b9605; converted property
@property(retain) id fixedFontFamily;	// G=0x33556045; S=0x335b9595; converted property
@property(assign, getter=isFrameFlatteningEnabled) BOOL frameFlatteningEnabled;	// G=0x33556861; S=0x335ba1f1; converted property
@property(assign) BOOL fullScreenEnabled;	// G=0x335ba341; S=0x335ba325; converted property
@property(assign, getter=isHixie76WebSocketProtocolEnabled) BOOL hixie76WebSocketProtocolEnabled;	// G=0x33556a89; S=0x335ba3dd; converted property
@property(assign) BOOL hyperlinkAuditingEnabled;	// G=0x33556921; S=0x335ba261; converted property
@property(assign) double incrementalRenderingSuppressionTimeoutInSeconds;	// G=0x33556b89; S=0x335ba6c1; converted property
@property(assign, getter=isJavaEnabled) BOOL javaEnabled;	// G=0x335560b5; S=0x335b96bd; converted property
@property(assign) BOOL javaScriptCanAccessClipboard;	// G=0x33556721; S=0x335b9901; converted property
@property(assign) BOOL javaScriptCanOpenWindowsAutomatically;	// G=0x33556155; S=0x335b96f5; converted property
@property(assign, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;	// G=0x335560d5; S=0x335b96d9; converted property
@property(assign) BOOL loadsImagesAutomatically;	// G=0x3355627d; S=0x335b9789; converted property
@property(assign) BOOL loadsSiteIconsIgnoringImageLoadingPreference;	// G=0x3355629d; S=0x335ba385; converted property
@property(assign) BOOL localFileContentSniffingEnabled;	// G=0x335566e1; S=0x335b98c9; converted property
@property(assign) BOOL localStorageEnabled;	// G=0x335561e9; S=0x335b9c59; converted property
@property(assign) BOOL mediaPlaybackAllowsAirPlay;	// G=0x33556a69; S=0x335ba3f9; converted property
@property(assign) BOOL mediaPlaybackAllowsInline;	// G=0x33556a49; S=0x3355b1ad; converted property
@property(assign) BOOL mediaPlaybackRequiresUserGesture;	// G=0x33556a29; S=0x335ba44d; converted property
@property(assign) BOOL memoryInfoEnabled;	// G=0x33556901; S=0x335ba245; converted property
@property(assign) int minimumFontSize;	// G=0x33556175; S=0x335b9659; converted property
@property(assign) int minimumLogicalFontSize;	// G=0x33556191; S=0x335b9675; converted property
@property(assign) BOOL mockScrollbarsEnabled;	// G=0x33556b29; S=0x335ba469; converted property
@property(assign) BOOL notificationsEnabled;	// G=0x335ba64d; S=0x335ba631; converted property
@property(assign) BOOL offlineWebApplicationCacheEnabled;	// G=0x33556701; S=0x3354eb99; converted property
@property(assign) BOOL pageCacheSupportsPlugins;	// G=0x335563f9; S=0x335ba4a1; converted property
@property(assign) BOOL paginateDuringLayoutEnabled;	// G=0x335568a1; S=0x335ba229; converted property
@property(retain) id pictographFontFamily;	// G=0x335561ad; S=0x335ba485; converted property
@property(assign) BOOL privateBrowsingEnabled;	// G=0x33556209; S=0x3355b191; converted property
@property(assign) BOOL regionBasedColumnsEnabled;	// G=0x33556ac9; S=0x335ba66d; converted property
@property(assign) BOOL requestAnimationFrameEnabled;	// G=0x33556b69; S=0x335ba6a5; converted property
@property(retain) id sansSerifFontFamily;	// G=0x33556229; S=0x335b95cd; converted property
@property(retain) id serifFontFamily;	// G=0x33556245; S=0x335b95b1; converted property
@property(assign) BOOL shouldDisplayCaptions;	// G=0x335ba5d5; S=0x335ba5b9; converted property
@property(assign) BOOL shouldDisplaySubtitles;	// G=0x335ba599; S=0x335ba57d; converted property
@property(assign) BOOL shouldDisplayTextDescriptions;	// G=0x335ba611; S=0x335ba5f5; converted property
@property(assign) BOOL shouldRespectImageOrientation;	// G=0x33556b49; S=0x335ba689; converted property
@property(assign) BOOL showDebugBorders;	// G=0x335567e1; S=0x335ba0f1; converted property
@property(assign) BOOL showRepaintCounter;	// G=0x33556801; S=0x335ba10d; converted property
@property(assign) BOOL shrinksStandaloneImagesToFit;	// G=0x335562bd; S=0x3355789d; converted property
@property(assign, getter=isSpatialNavigationEnabled) BOOL spatialNavigationEnabled;	// G=0x33556881; S=0x335ba20d; converted property
@property(retain) id standardFontFamily;	// G=0x33556261; S=0x335b9579; converted property
@property(assign) BOOL storageTrackerEnabled;	// G=0x335514e5; S=0x3354ef59; converted property
@property(assign) BOOL suppressesIncrementalRendering;	// G=0x33556aa9; S=0x335b9821; converted property
@property(assign) int textDirectionSubmenuInclusionBehavior;	// G=0x33556331; S=0x335b9c05; converted property
@property(assign) BOOL usePreHTML5ParserQuirks;	// G=0x335569c5; S=0x335ba299; converted property
@property(assign) BOOL userStyleSheetEnabled;	// G=0x335b96ad; S=0x335b96b1; converted property
@property(retain) id userStyleSheetLocation;	// G=0x335b96b5; S=0x335b96b9; converted property
@property(assign) BOOL usesEncodingDetector;	// G=0x33556009; S=0x335b994d; converted property
@property(assign) BOOL usesPageCache;	// G=0x335563d9; S=0x335b97b9; converted property
@property(assign) BOOL wantsBalancedSetDefersLoadingBehavior;	// G=0x33556b09; S=0x335ba561; converted property
@property(assign) BOOL webArchiveDebugModeEnabled;	// G=0x335566c1; S=0x335b98ad; converted property
@property(assign) BOOL webAudioEnabled;	// G=0x33556821; S=0x335ba129; converted property
@property(assign) BOOL webGLEnabled;	// G=0x335ba145; S=0x335ba165; converted property
@property(assign, getter=isWebSecurityEnabled) BOOL webSecurityEnabled;	// G=0x335560f5; S=0x335b9969; converted property
@property(assign, getter=isXSSAuditorEnabled) BOOL xSSAuditorEnabled;	// G=0x33556741; S=0x335b991d; converted property
@property(assign) BOOL zoomsTextOnly;	// G=0x33556c39; S=0x335b98e5; converted property
+ (id)_IBCreatorID;	// 0x3354e6b5
+ (void)_checkLastReferenceForIdentifier:(id)identifier;	// 0x335b9cb1
+ (id)_concatenateKeyWithIBCreatorID:(id)ibcreatorID;	// 0x335ba6e9
+ (id)_getInstanceForIdentifier:(id)identifier;	// 0x3354e6c5
+ (void)_removeReferenceForIdentifier:(id)identifier;	// 0x335b9d01
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned)policy;	// 0x335b9ed5
+ (void)_setIBCreatorID:(id)anId;	// 0x335b9dc5
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;	// 0x3354efad
+ (void)_setInstance:(id)instance forIdentifier:(id)identifier;	// 0x3354e70d
+ (void)_switchNetworkLoaderToNewTestingSession;	// 0x335b9e01
+ (unsigned long)_systemCFStringEncoding;	// 0x3354f055
+ (void)initialize;	// 0x3354d839
+ (void)setWebKitLinkTimeVersion:(int)version;	// 0x335ba37d
+ (id)standardPreferences;	// 0x3354e4b9
- (id)init;	// 0x335b85bd
- (id)initWithCoder:(id)coder;	// 0x335b8695
- (id)initWithIdentifier:(id)identifier;	// 0x335b8681
- (id)initWithIdentifier:(id)identifier sendChangeNotification:(BOOL)notification;	// 0x3354e4ed
- (int)_NSURLDiskCacheSize;	// 0x33550049
- (int)_NSURLMaxRequestSize;	// 0x33550065
- (int)_NSURLMemoryCacheSize;	// 0x3355002d
- (BOOL)_allowCompositingLayerVisualDegradation;	// 0x335566a1
- (BOOL)_allowMultiElementImplicitFormSubmission;	// 0x3355659d
- (BOOL)_alwaysRequestGeolocationPermission;	// 0x33556661
- (BOOL)_alwaysUseAcceleratedOverflowScroll;	// 0x33556681
- (BOOL)_alwaysUseBaselineOfPrimaryFont;	// 0x3355657d
- (double)_backForwardCacheExpirationInterval;	// 0x335b99bd
- (BOOL)_boolValueForKey:(id)key;	// 0x3354eca1
- (id)_diskImageCacheSavedCacheDirectory;	// 0x33551b95
- (float)_floatValueForKey:(id)key;	// 0x33556615
- (BOOL)_forceFTPDirectoryListings;	// 0x33556061
- (id)_ftpDirectoryTemplatePath;	// 0x33556081
- (int)_integerValueForKey:(id)key;	// 0x3354e961
- (int)_interpolationQuality;	// 0x33556ccd
- (void)_invalidateCachedPreferences;	// 0x3355b055
- (int)_layoutInterval;	// 0x335565dd
- (id)_localStorageDatabasePath;	// 0x335525c9
- (long long)_longLongValueForKey:(id)key;	// 0x33556bd1
- (float)_maxParseDuration;	// 0x335565f9
- (unsigned long)_maximumImageSize;	// 0x3355651d
- (float)_minimumZoomFontSize;	// 0x33556c59
- (int)_objectCacheSize;	// 0x33550011
- (int)_pageCacheSize;	// 0x3354fff5
- (void)_postCacheModelChangedNotification;	// 0x335b97d5
- (void)_postPreferencesChangedAPINotification;	// 0x335b9d59
- (void)_postPreferencesChangedNotification;	// 0x3354e799
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)degradation;	// 0x3354ef75
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)submission;	// 0x335b9ac9
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)permission;	// 0x335b9b01
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)scroll;	// 0x335b9b1d
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)primaryFont;	// 0x335b9aad
- (void)_setBoolValue:(BOOL)value forKey:(id)key;	// 0x3354ebb5
- (void)_setDiskImageCacheSavedCacheDirectory:(id)directory;	// 0x33551bc9
- (void)_setFTPDirectoryTemplatePath:(id)path;	// 0x335b9fed
- (void)_setFloatValue:(float)value forKey:(id)key;	// 0x33558fd9
- (void)_setForceFTPDirectoryListings:(BOOL)listings;	// 0x335ba029
- (void)_setIntegerValue:(int)value forKey:(id)key;	// 0x3354e879
- (void)_setInterpolationQuality:(int)quality;	// 0x335b9b39
- (void)_setLayoutInterval:(int)interval;	// 0x33558fa1
- (void)_setLocalStorageDatabasePath:(id)path;	// 0x3354edcd
- (void)_setLongLongValue:(long long)value forKey:(id)key;	// 0x335b91e9
- (void)_setMaxParseDuration:(float)duration;	// 0x3356aa31
- (void)_setMinimumZoomFontSize:(float)size;	// 0x33558fbd
- (void)_setNSURLDiskCacheSize:(int)size;	// 0x335b9a75
- (void)_setNSURLMaxRequestSize:(int)size;	// 0x335b9a91
- (void)_setNSURLMemoryCacheSize:(int)size;	// 0x335b9a59
- (void)_setObjectCacheSize:(int)size;	// 0x335b9a3d
- (void)_setPageCacheSize:(int)size;	// 0x335b9a21
- (void)_setPreferenceForTestWithValue:(id)value forKey:(id)key;	// 0x335ba315
- (void)_setStandalone:(BOOL)standalone;	// 0x335b9a05
- (void)_setStringValue:(id)value forKey:(id)key;	// 0x3354ee09
- (void)_setTelephoneNumberParsingEnabled:(BOOL)enabled;	// 0x335578d9
- (void)_setUnsignedIntValue:(unsigned)value forKey:(id)key;	// 0x335b8f95
- (void)_setUnsignedLongLongValue:(unsigned long long)value forKey:(id)key;	// 0x335b93d9
- (void)_setUseLegacyNumberInputFieldFormatting:(BOOL)formatting;	// 0x335b9ae5
- (void)_setUseSiteSpecificSpoofing:(BOOL)spoofing;	// 0x335b9c21
- (BOOL)_standalone;	// 0x335564fd
- (id)_stringValueForKey:(id)key;	// 0x3354ef05
- (BOOL)_telephoneNumberParsingEnabled;	// 0x3355655d
- (unsigned)_unsignedIntValueForKey:(id)key;	// 0x335b8f49
- (unsigned long long)_unsignedLongLongValueForKey:(id)key;	// 0x335b9389
- (BOOL)_useLegacyNumberInputFieldFormatting;	// 0x335565bd
- (BOOL)_useSiteSpecificSpoofing;	// 0x33555e15
- (id)_valueForKey:(id)key;	// 0x3354e9ad
// converted property getter: - (BOOL)accelerated2dCanvasEnabled;	// 0x33556841
// converted property getter: - (BOOL)acceleratedCompositingEnabled;	// 0x33556781
// converted property getter: - (BOOL)acceleratedDrawingEnabled;	// 0x335567a1
// converted property getter: - (BOOL)allowFileAccessFromFileURLs;	// 0x33556135
// converted property getter: - (BOOL)allowUniversalAccessFromFileURLs;	// 0x33556115
// converted property getter: - (BOOL)allowsAnimatedImageLooping;	// 0x335b974d
// converted property getter: - (BOOL)allowsAnimatedImages;	// 0x335b9711
// converted property getter: - (long long)applicationCacheDefaultOriginQuota;	// 0x33556bb5
// converted property getter: - (long long)applicationCacheTotalQuota;	// 0x335b9b55
// converted property getter: - (BOOL)applicationChromeModeEnabled;	// 0x335564dd
- (BOOL)arePlugInsEnabled;	// 0x335561c9
// converted property getter: - (BOOL)asynchronousSpellCheckingEnabled;	// 0x335568e1
// converted property getter: - (unsigned)audioSessionCategoryOverride;	// 0x335ba415
// converted property getter: - (BOOL)authorAndUserStylesEnabled;	// 0x335564bd
// converted property getter: - (BOOL)automaticallyDetectsCacheModel;	// 0x335b9939
// converted property getter: - (BOOL)autosaves;	// 0x335b97a5
// converted property getter: - (BOOL)backspaceKeyNavigationEnabled;	// 0x33556ae9
// converted property getter: - (unsigned)cacheModel;	// 0x3354f14d
// converted property getter: - (BOOL)canvasUsesAcceleratedDrawing;	// 0x335567c1
- (BOOL)cssCustomFilterEnabled;	// 0x335ba099
- (BOOL)cssRegionsEnabled;	// 0x335568c1
// converted property getter: - (id)cursiveFontFamily;	// 0x33555e35
// converted property getter: - (BOOL)databasesEnabled;	// 0x335511d5
- (void)dealloc;	// 0x335b8c91
// converted property getter: - (int)defaultFixedFontSize;	// 0x33555fb5
// converted property getter: - (int)defaultFontSize;	// 0x33555fd1
// converted property getter: - (id)defaultTextEncodingName;	// 0x33555fed
// converted property getter: - (BOOL)developerExtrasEnabled;	// 0x33556419
- (void)didRemoveFromWebView;	// 0x335ba2b5
// converted property getter: - (BOOL)diskImageCacheEnabled;	// 0x33556c75
// converted property getter: - (unsigned)diskImageCacheMaximumCacheSize;	// 0x33556cb1
// converted property getter: - (unsigned)diskImageCacheMinimumImageSize;	// 0x33556c95
// converted property getter: - (int)editableLinkBehavior;	// 0x335562dd
// converted property getter: - (int)editingBehavior;	// 0x3355630d
- (void)encodeWithCoder:(id)coder;	// 0x335b8a45
// converted property getter: - (BOOL)experimentalNotificationsEnabled;	// 0x335b9c75
// converted property getter: - (id)fantasyFontFamily;	// 0x33556029
// converted property getter: - (id)fixedFontFamily;	// 0x33556045
// converted property getter: - (BOOL)fullScreenEnabled;	// 0x335ba341
// converted property getter: - (BOOL)hyperlinkAuditingEnabled;	// 0x33556921
- (id)identifier;	// 0x335b8dad
// converted property getter: - (double)incrementalRenderingSuppressionTimeoutInSeconds;	// 0x33556b89
// converted property getter: - (BOOL)isAVFoundationEnabled;	// 0x335ba3bd
// converted property getter: - (BOOL)isDNSPrefetchingEnabled;	// 0x33556761
// converted property getter: - (BOOL)isDOMPasteAllowed;	// 0x33556361
// converted property getter: - (BOOL)isFrameFlatteningEnabled;	// 0x33556861
// converted property getter: - (BOOL)isHixie76WebSocketProtocolEnabled;	// 0x33556a89
// converted property getter: - (BOOL)isJavaEnabled;	// 0x335560b5
// converted property getter: - (BOOL)isJavaScriptEnabled;	// 0x335560d5
// converted property getter: - (BOOL)isSpatialNavigationEnabled;	// 0x33556881
// converted property getter: - (BOOL)isWebSecurityEnabled;	// 0x335560f5
// converted property getter: - (BOOL)isXSSAuditorEnabled;	// 0x33556741
// converted property getter: - (BOOL)javaScriptCanAccessClipboard;	// 0x33556721
// converted property getter: - (BOOL)javaScriptCanOpenWindowsAutomatically;	// 0x33556155
// converted property getter: - (BOOL)loadsImagesAutomatically;	// 0x3355627d
// converted property getter: - (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;	// 0x3355629d
// converted property getter: - (BOOL)localFileContentSniffingEnabled;	// 0x335566e1
// converted property getter: - (BOOL)localStorageEnabled;	// 0x335561e9
// converted property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x33556a69
// converted property getter: - (BOOL)mediaPlaybackAllowsInline;	// 0x33556a49
// converted property getter: - (BOOL)mediaPlaybackRequiresUserGesture;	// 0x33556a29
// converted property getter: - (BOOL)memoryInfoEnabled;	// 0x33556901
// converted property getter: - (int)minimumFontSize;	// 0x33556175
// converted property getter: - (int)minimumLogicalFontSize;	// 0x33556191
// converted property getter: - (BOOL)mockScrollbarsEnabled;	// 0x33556b29
// converted property getter: - (BOOL)notificationsEnabled;	// 0x335ba64d
// converted property getter: - (BOOL)offlineWebApplicationCacheEnabled;	// 0x33556701
// converted property getter: - (BOOL)pageCacheSupportsPlugins;	// 0x335563f9
// converted property getter: - (BOOL)paginateDuringLayoutEnabled;	// 0x335568a1
// converted property getter: - (id)pictographFontFamily;	// 0x335561ad
// converted property getter: - (BOOL)privateBrowsingEnabled;	// 0x33556209
// converted property getter: - (BOOL)regionBasedColumnsEnabled;	// 0x33556ac9
// converted property getter: - (BOOL)requestAnimationFrameEnabled;	// 0x33556b69
// converted property getter: - (id)sansSerifFontFamily;	// 0x33556229
// converted property getter: - (id)serifFontFamily;	// 0x33556245
// converted property setter: - (void)setAVFoundationEnabled:(BOOL)enabled;	// 0x335ba3a1
// converted property setter: - (void)setAccelerated2dCanvasEnabled:(BOOL)enabled;	// 0x335ba181
// converted property setter: - (void)setAcceleratedCompositingEnabled:(BOOL)enabled;	// 0x335ba07d
// converted property setter: - (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x335ba045
// converted property setter: - (void)setAllowFileAccessFromFileURLs:(BOOL)fileURLs;	// 0x335b99a1
// converted property setter: - (void)setAllowUniversalAccessFromFileURLs:(BOOL)fileURLs;	// 0x335b9985
// converted property setter: - (void)setAllowsAnimatedImageLooping:(BOOL)looping;	// 0x335b976d
// converted property setter: - (void)setAllowsAnimatedImages:(BOOL)images;	// 0x335b9731
// converted property setter: - (void)setApplicationCacheDefaultOriginQuota:(long long)quota;	// 0x335b9bc1
// converted property setter: - (void)setApplicationCacheTotalQuota:(long long)quota;	// 0x335b9b71
// converted property setter: - (void)setApplicationChromeModeEnabled:(BOOL)enabled;	// 0x335b9891
// converted property setter: - (void)setAsynchronousSpellCheckingEnabled:(BOOL)enabled;	// 0x335ba361
// converted property setter: - (void)setAudioSessionCategoryOverride:(unsigned)override;	// 0x335ba431
// converted property setter: - (void)setAuthorAndUserStylesEnabled:(BOOL)enabled;	// 0x335b9875
// converted property setter: - (void)setAutomaticallyDetectsCacheModel:(BOOL)model;	// 0x3354eb85
// converted property setter: - (void)setAutosaves:(BOOL)autosaves;	// 0x3354e819
// converted property setter: - (void)setBackspaceKeyNavigationEnabled:(BOOL)enabled;	// 0x335ba545
- (void)setCSSCustomFilterEnabled:(BOOL)enabled;	// 0x335ba0b9
- (void)setCSSRegionsEnabled:(BOOL)enabled;	// 0x335ba0d5
// converted property setter: - (void)setCacheModel:(unsigned)model;	// 0x3354e82d
// converted property setter: - (void)setCanvasUsesAcceleratedDrawing:(BOOL)drawing;	// 0x335ba061
// converted property setter: - (void)setCursiveFontFamily:(id)family;	// 0x335b95e9
// converted property setter: - (void)setDNSPrefetchingEnabled:(BOOL)enabled;	// 0x335b983d
// converted property setter: - (void)setDOMPasteAllowed:(BOOL)allowed;	// 0x335b9fd1
// converted property setter: - (void)setDatabasesEnabled:(BOOL)enabled;	// 0x335b9c3d
// converted property setter: - (void)setDefaultFixedFontSize:(int)size;	// 0x335b963d
// converted property setter: - (void)setDefaultFontSize:(int)size;	// 0x335b9621
// converted property setter: - (void)setDefaultTextEncodingName:(id)name;	// 0x335b9691
// converted property setter: - (void)setDeveloperExtrasEnabled:(BOOL)enabled;	// 0x335b9859
// converted property setter: - (void)setDiskImageCacheEnabled:(BOOL)enabled;	// 0x335ba19d
// converted property setter: - (void)setDiskImageCacheMaximumCacheSize:(unsigned)size;	// 0x335ba1d5
// converted property setter: - (void)setDiskImageCacheMinimumImageSize:(unsigned)size;	// 0x335ba1b9
// converted property setter: - (void)setEditableLinkBehavior:(int)behavior;	// 0x335b9be9
// converted property setter: - (void)setEditingBehavior:(int)behavior;	// 0x335ba27d
// converted property setter: - (void)setExperimentalNotificationsEnabled:(BOOL)enabled;	// 0x335b9c95
// converted property setter: - (void)setFantasyFontFamily:(id)family;	// 0x335b9605
// converted property setter: - (void)setFixedFontFamily:(id)family;	// 0x335b9595
// converted property setter: - (void)setFrameFlatteningEnabled:(BOOL)enabled;	// 0x335ba1f1
// converted property setter: - (void)setFullScreenEnabled:(BOOL)enabled;	// 0x335ba325
// converted property setter: - (void)setHixie76WebSocketProtocolEnabled:(BOOL)enabled;	// 0x335ba3dd
// converted property setter: - (void)setHyperlinkAuditingEnabled:(BOOL)enabled;	// 0x335ba261
// converted property setter: - (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)seconds;	// 0x335ba6c1
// converted property setter: - (void)setJavaEnabled:(BOOL)enabled;	// 0x335b96bd
// converted property setter: - (void)setJavaScriptCanAccessClipboard:(BOOL)clipboard;	// 0x335b9901
// converted property setter: - (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)automatically;	// 0x335b96f5
// converted property setter: - (void)setJavaScriptEnabled:(BOOL)enabled;	// 0x335b96d9
// converted property setter: - (void)setLoadsImagesAutomatically:(BOOL)automatically;	// 0x335b9789
// converted property setter: - (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)preference;	// 0x335ba385
// converted property setter: - (void)setLocalFileContentSniffingEnabled:(BOOL)enabled;	// 0x335b98c9
// converted property setter: - (void)setLocalStorageEnabled:(BOOL)enabled;	// 0x335b9c59
// converted property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x335ba3f9
// converted property setter: - (void)setMediaPlaybackAllowsInline:(BOOL)anInline;	// 0x3355b1ad
// converted property setter: - (void)setMediaPlaybackRequiresUserGesture:(BOOL)gesture;	// 0x335ba44d
// converted property setter: - (void)setMemoryInfoEnabled:(BOOL)enabled;	// 0x335ba245
// converted property setter: - (void)setMinimumFontSize:(int)size;	// 0x335b9659
// converted property setter: - (void)setMinimumLogicalFontSize:(int)size;	// 0x335b9675
// converted property setter: - (void)setMockScrollbarsEnabled:(BOOL)enabled;	// 0x335ba469
// converted property setter: - (void)setNotificationsEnabled:(BOOL)enabled;	// 0x335ba631
// converted property setter: - (void)setOfflineWebApplicationCacheEnabled:(BOOL)enabled;	// 0x3354eb99
// converted property setter: - (void)setPageCacheSupportsPlugins:(BOOL)plugins;	// 0x335ba4a1
// converted property setter: - (void)setPaginateDuringLayoutEnabled:(BOOL)enabled;	// 0x335ba229
// converted property setter: - (void)setPictographFontFamily:(id)family;	// 0x335ba485
- (void)setPlugInsEnabled:(BOOL)enabled;	// 0x3354ef91
// converted property setter: - (void)setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x3355b191
// converted property setter: - (void)setRegionBasedColumnsEnabled:(BOOL)enabled;	// 0x335ba66d
// converted property setter: - (void)setRequestAnimationFrameEnabled:(BOOL)enabled;	// 0x335ba6a5
// converted property setter: - (void)setSansSerifFontFamily:(id)family;	// 0x335b95cd
// converted property setter: - (void)setSerifFontFamily:(id)family;	// 0x335b95b1
// converted property setter: - (void)setShouldDisplayCaptions:(BOOL)displayCaptions;	// 0x335ba5b9
// converted property setter: - (void)setShouldDisplaySubtitles:(BOOL)displaySubtitles;	// 0x335ba57d
// converted property setter: - (void)setShouldDisplayTextDescriptions:(BOOL)displayTextDescriptions;	// 0x335ba5f5
// converted property setter: - (void)setShouldRespectImageOrientation:(BOOL)respectImageOrientation;	// 0x335ba689
// converted property setter: - (void)setShowDebugBorders:(BOOL)borders;	// 0x335ba0f1
// converted property setter: - (void)setShowRepaintCounter:(BOOL)counter;	// 0x335ba10d
// converted property setter: - (void)setShrinksStandaloneImagesToFit:(BOOL)fit;	// 0x3355789d
// converted property setter: - (void)setSpatialNavigationEnabled:(BOOL)enabled;	// 0x335ba20d
// converted property setter: - (void)setStandardFontFamily:(id)family;	// 0x335b9579
// converted property setter: - (void)setStorageTrackerEnabled:(BOOL)enabled;	// 0x3354ef59
// converted property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x335b9821
// converted property setter: - (void)setTextDirectionSubmenuInclusionBehavior:(int)behavior;	// 0x335b9c05
// converted property setter: - (void)setUsePreHTML5ParserQuirks:(BOOL)quirks;	// 0x335ba299
// converted property setter: - (void)setUserStyleSheetEnabled:(BOOL)enabled;	// 0x335b96b1
// converted property setter: - (void)setUserStyleSheetLocation:(id)location;	// 0x335b96b9
// converted property setter: - (void)setUsesEncodingDetector:(BOOL)detector;	// 0x335b994d
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x335b97b9
// converted property setter: - (void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)behavior;	// 0x335ba561
// converted property setter: - (void)setWebArchiveDebugModeEnabled:(BOOL)enabled;	// 0x335b98ad
// converted property setter: - (void)setWebAudioEnabled:(BOOL)enabled;	// 0x335ba129
// converted property setter: - (void)setWebGLEnabled:(BOOL)enabled;	// 0x335ba165
// converted property setter: - (void)setWebSecurityEnabled:(BOOL)enabled;	// 0x335b9969
// converted property setter: - (void)setXSSAuditorEnabled:(BOOL)enabled;	// 0x335b991d
// converted property setter: - (void)setZoomsTextOnly:(BOOL)only;	// 0x335b98e5
// converted property getter: - (BOOL)shouldDisplayCaptions;	// 0x335ba5d5
// converted property getter: - (BOOL)shouldDisplaySubtitles;	// 0x335ba599
// converted property getter: - (BOOL)shouldDisplayTextDescriptions;	// 0x335ba611
// converted property getter: - (BOOL)shouldRespectImageOrientation;	// 0x33556b49
// converted property getter: - (BOOL)showDebugBorders;	// 0x335567e1
// converted property getter: - (BOOL)showRepaintCounter;	// 0x33556801
// converted property getter: - (BOOL)shrinksStandaloneImagesToFit;	// 0x335562bd
// converted property getter: - (id)standardFontFamily;	// 0x33556261
// converted property getter: - (BOOL)storageTrackerEnabled;	// 0x335514e5
// converted property getter: - (BOOL)suppressesIncrementalRendering;	// 0x33556aa9
// converted property getter: - (int)textDirectionSubmenuInclusionBehavior;	// 0x33556331
// converted property getter: - (BOOL)usePreHTML5ParserQuirks;	// 0x335569c5
// converted property getter: - (BOOL)userStyleSheetEnabled;	// 0x335b96ad
// converted property getter: - (id)userStyleSheetLocation;	// 0x335b96b5
// converted property getter: - (BOOL)usesEncodingDetector;	// 0x33556009
// converted property getter: - (BOOL)usesPageCache;	// 0x335563d9
// converted property getter: - (BOOL)wantsBalancedSetDefersLoadingBehavior;	// 0x33556b09
// converted property getter: - (BOOL)webArchiveDebugModeEnabled;	// 0x335566c1
// converted property getter: - (BOOL)webAudioEnabled;	// 0x33556821
// converted property getter: - (BOOL)webGLEnabled;	// 0x335ba145
- (void)willAddToWebView;	// 0x33550fc5
// converted property getter: - (BOOL)zoomsTextOnly;	// 0x33556c39
@end
