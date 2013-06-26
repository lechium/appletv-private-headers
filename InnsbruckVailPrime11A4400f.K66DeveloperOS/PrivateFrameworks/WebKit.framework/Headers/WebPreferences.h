/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSCoding.h"
#import </libobjc.A.h>
#import "WebKit-Structs.h"


@interface WebPreferences : NSObject <NSCoding> {
	WebPreferencesPrivate *_private;	// 4 = 0x4
}
@property(assign, getter=isAVFoundationEnabled) BOOL aVFoundationEnabled;	// G=0x339948d9; S=0x339948bd; converted property
@property(assign) BOOL accelerated2dCanvasEnabled;	// G=0x3393cb35; S=0x339946b9; converted property
@property(assign) BOOL acceleratedCompositingEnabled;	// G=0x3393ca75; S=0x3399453d; converted property
@property(assign) BOOL acceleratedDrawingEnabled;	// G=0x3393ca95; S=0x33994505; converted property
@property(assign) BOOL allowFileAccessFromFileURLs;	// G=0x3393c45d; S=0x33993f79; converted property
@property(assign) BOOL allowUniversalAccessFromFileURLs;	// G=0x3393c43d; S=0x33993f5d; converted property
@property(assign) BOOL allowsAnimatedImageLooping;	// G=0x33993ce9; S=0x33993d09; converted property
@property(assign) BOOL allowsAnimatedImages;	// G=0x33993cad; S=0x33993ccd; converted property
@property(assign) long long applicationCacheDefaultOriginQuota;	// G=0x3393ce85; S=0x33994181; converted property
@property(assign) long long applicationCacheTotalQuota;	// G=0x33994115; S=0x33994131; converted property
@property(assign) BOOL applicationChromeModeEnabled;	// G=0x3393c7f1; S=0x33993e69; converted property
@property(assign) BOOL asynchronousSpellCheckingEnabled;	// G=0x3393cbd5; S=0x3399487d; converted property
@property(assign) unsigned audioSessionCategoryOverride;	// G=0x33994955; S=0x33994971; converted property
@property(assign) BOOL authorAndUserStylesEnabled;	// G=0x3393c7d1; S=0x33993e4d; converted property
@property(assign) BOOL automaticallyDetectsCacheModel;	// G=0x33993f11; S=0x339356d1; converted property
@property(assign) BOOL autosaves;	// G=0x33993d41; S=0x3393537d; converted property
@property(assign) BOOL backspaceKeyNavigationEnabled;	// G=0x3393cdb9; S=0x33994b39; converted property
@property(assign) unsigned cacheModel;	// G=0x33935c95; S=0x33935391; converted property
@property(assign) BOOL canvasUsesAcceleratedDrawing;	// G=0x3393cab5; S=0x33994521; converted property
@property(retain) id cursiveFontFamily;	// G=0x3393c2c1; S=0x33993b85; converted property
@property(assign, getter=isDNSPrefetchingEnabled) BOOL dNSPrefetchingEnabled;	// G=0x3393ca55; S=0x33993dd9; converted property
@property(assign, getter=isDOMPasteAllowed) BOOL dOMPasteAllowed;	// G=0x3393c675; S=0x33994491; converted property
@property(assign) BOOL databasesEnabled;	// G=0x33937c55; S=0x339941fd; converted property
@property(assign) int defaultFixedFontSize;	// G=0x3393c2dd; S=0x33993bd9; converted property
@property(assign) int defaultFontSize;	// G=0x3393c2f9; S=0x33993bbd; converted property
@property(retain) id defaultTextEncodingName;	// G=0x3393c315; S=0x33993c2d; converted property
@property(assign) BOOL developerExtrasEnabled;	// G=0x3393c72d; S=0x33993e31; converted property
@property(assign) BOOL diagnosticLoggingEnabled;	// G=0x33994cdd; S=0x33994cfd; converted property
@property(assign) BOOL diskImageCacheEnabled;	// G=0x3393cf45; S=0x339946d5; converted property
@property(assign) unsigned diskImageCacheMaximumCacheSize;	// G=0x3393cf81; S=0x3399470d; converted property
@property(assign) unsigned diskImageCacheMinimumImageSize;	// G=0x3393cf65; S=0x339946f1; converted property
@property(assign) int editableLinkBehavior;	// G=0x3393c605; S=0x339941a9; converted property
@property(assign) BOOL experimentalNotificationsEnabled;	// G=0x33994235; S=0x33994255; converted property
@property(retain) id fantasyFontFamily;	// G=0x3393c351; S=0x33993ba1; converted property
@property(retain) id fixedFontFamily;	// G=0x3393c36d; S=0x33993b31; converted property
@property(assign, getter=isFrameFlatteningEnabled) BOOL frameFlatteningEnabled;	// G=0x3393cb55; S=0x33994729; converted property
@property(assign) BOOL fullScreenEnabled;	// G=0x3399485d; S=0x33994841; converted property
@property(assign) BOOL hiddenPageCSSAnimationSuspensionEnabled;	// G=0x33994e05; S=0x33994e25; converted property
@property(assign) BOOL hiddenPageDOMTimerThrottlingEnabled;	// G=0x33994dc9; S=0x33994de9; converted property
@property(assign, getter=isHixie76WebSocketProtocolEnabled) BOOL hixie76WebSocketProtocolEnabled;	// G=0x3393cd75; S=0x33994935; converted property
@property(assign) BOOL hyperlinkAuditingEnabled;	// G=0x3393cc15; S=0x33994799; converted property
@property(assign) double incrementalRenderingSuppressionTimeoutInSeconds;	// G=0x3393ce59; S=0x33994cb5; converted property
@property(assign, getter=isJavaEnabled) BOOL javaEnabled;	// G=0x3393c3dd; S=0x33993c59; converted property
@property(assign) BOOL javaScriptCanAccessClipboard;	// G=0x3393ca15; S=0x33993ed9; converted property
@property(assign) BOOL javaScriptCanOpenWindowsAutomatically;	// G=0x3393c47d; S=0x33993c91; converted property
@property(assign, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;	// G=0x3393c3fd; S=0x33993c75; converted property
@property(assign) BOOL javaScriptExperimentsEnabled;	// G=0x33993e11; S=0x33993df5; converted property
@property(assign) BOOL loadsImagesAutomatically;	// G=0x3393c5a5; S=0x33993d25; converted property
@property(assign) BOOL loadsSiteIconsIgnoringImageLoadingPreference;	// G=0x3393c5c5; S=0x339948a1; converted property
@property(assign) BOOL localFileContentSniffingEnabled;	// G=0x3393c9d5; S=0x33993ea1; converted property
@property(assign) BOOL localStorageEnabled;	// G=0x3393c511; S=0x33994219; converted property
@property(assign) BOOL mediaPlaybackAllowsAirPlay;	// G=0x3393cd55; S=0x33994939; converted property
@property(assign) BOOL mediaPlaybackAllowsInline;	// G=0x3393cd35; S=0x33940c15; converted property
@property(assign) BOOL mediaPlaybackRequiresUserGesture;	// G=0x3393cd15; S=0x33994a01; converted property
@property(assign) BOOL memoryInfoEnabled;	// G=0x3393cbf5; S=0x3399477d; converted property
@property(assign) int minimumFontSize;	// G=0x3393c49d; S=0x33993bf5; converted property
@property(assign) int minimumLogicalFontSize;	// G=0x3393c4b9; S=0x33993c11; converted property
@property(assign) BOOL mockScrollbarsEnabled;	// G=0x3393cdf9; S=0x33994a1d; converted property
@property(retain) id networkInterfaceName;	// G=0x339949c9; S=0x339949e5; converted property
@property(assign) BOOL notificationsEnabled;	// G=0x33994c41; S=0x33994c25; converted property
@property(assign) BOOL offlineWebApplicationCacheEnabled;	// G=0x3393c9f5; S=0x339356e5; converted property
@property(assign) BOOL pageCacheSupportsPlugins;	// G=0x3393c70d; S=0x33994a91; converted property
@property(assign) BOOL paginateDuringLayoutEnabled;	// G=0x3393cb95; S=0x33994761; converted property
@property(retain) id pictographFontFamily;	// G=0x3393c4d5; S=0x33994a75; converted property
@property(assign) BOOL plugInSnapshottingEnabled;	// G=0x33994d8d; S=0x33994dad; converted property
@property(assign) BOOL privateBrowsingEnabled;	// G=0x3393c531; S=0x33940bf9; converted property
@property(assign, getter=isQTKitEnabled) BOOL qTKitEnabled;	// G=0x33994915; S=0x339948f9; converted property
@property(assign) BOOL regionBasedColumnsEnabled;	// G=0x3393cd99; S=0x33994c61; converted property
@property(assign) BOOL requestAnimationFrameEnabled;	// G=0x3393ce39; S=0x33994c99; converted property
@property(retain) id sansSerifFontFamily;	// G=0x3393c551; S=0x33993b69; converted property
@property(assign) BOOL screenFontSubstitutionEnabled;	// G=0x33994d19; S=0x33994d39; converted property
@property(assign) BOOL seamlessIFramesEnabled;	// G=0x33994a39; S=0x33994a59; converted property
@property(retain) id serifFontFamily;	// G=0x3393c56d; S=0x33993b4d; converted property
@property(assign) BOOL shouldDisplayCaptions;	// G=0x33994bc9; S=0x33994bad; converted property
@property(assign) BOOL shouldDisplaySubtitles;	// G=0x33994b8d; S=0x33994b71; converted property
@property(assign) BOOL shouldDisplayTextDescriptions;	// G=0x33994c05; S=0x33994be9; converted property
@property(assign) BOOL shouldRespectImageOrientation;	// G=0x3393ce19; S=0x33994c7d; converted property
@property(assign) BOOL showDebugBorders;	// G=0x3393cad5; S=0x33994629; converted property
@property(assign) BOOL showRepaintCounter;	// G=0x3393caf5; S=0x33994645; converted property
@property(assign) BOOL shrinksStandaloneImagesToFit;	// G=0x3393c5e5; S=0x3393dacd; converted property
@property(assign, getter=isSpatialNavigationEnabled) BOOL spatialNavigationEnabled;	// G=0x3393cb75; S=0x33994745; converted property
@property(retain) id standardFontFamily;	// G=0x3393c589; S=0x33993b15; converted property
@property(assign) int storageBlockingPolicy;	// G=0x33994d71; S=0x33994d55; converted property
@property(assign) BOOL storageTrackerEnabled;	// G=0x33937c75; S=0x33935aa5; converted property
@property(assign) BOOL suppressesIncrementalRendering;	// G=0x3393cd79; S=0x33993dbd; converted property
@property(assign) int textDirectionSubmenuInclusionBehavior;	// G=0x3393c645; S=0x339941c5; converted property
@property(assign) BOOL usePreHTML5ParserQuirks;	// G=0x3393ccb1; S=0x339947b5; converted property
@property(assign) BOOL userStyleSheetEnabled;	// G=0x33993c49; S=0x33993c4d; converted property
@property(retain) id userStyleSheetLocation;	// G=0x33993c51; S=0x33993c55; converted property
@property(assign) BOOL usesEncodingDetector;	// G=0x3393c331; S=0x33993f25; converted property
@property(assign) BOOL usesPageCache;	// G=0x3393c6ed; S=0x33993d55; converted property
@property(assign) BOOL wantsBalancedSetDefersLoadingBehavior;	// G=0x3393cdd9; S=0x33994b55; converted property
@property(assign) BOOL webArchiveDebugModeEnabled;	// G=0x3393c9b5; S=0x33993e85; converted property
@property(assign) BOOL webAudioEnabled;	// G=0x3393cb15; S=0x33994661; converted property
@property(assign) BOOL webGLEnabled;	// G=0x3399467d; S=0x3399469d; converted property
@property(assign, getter=isWebSecurityEnabled) BOOL webSecurityEnabled;	// G=0x3393c41d; S=0x33993f41; converted property
@property(assign, getter=isXSSAuditorEnabled) BOOL xSSAuditorEnabled;	// G=0x3393ca35; S=0x33993ef5; converted property
@property(assign) BOOL zoomsTextOnly;	// G=0x3393cf09; S=0x33993ebd; converted property
+ (id)_IBCreatorID;	// 0x33935219
+ (void)_checkLastReferenceForIdentifier:(id)identifier;	// 0x33994271
+ (id)_concatenateKeyWithIBCreatorID:(id)ibcreatorID;	// 0x33994e41
+ (id)_getInstanceForIdentifier:(id)identifier;	// 0x33935229
+ (void)_removeReferenceForIdentifier:(id)identifier;	// 0x339942c1
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned)policy;	// 0x339943d9
+ (void)_setIBCreatorID:(id)anId;	// 0x3399438d
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;	// 0x33935af9
+ (void)_setInstance:(id)instance forIdentifier:(id)identifier;	// 0x33935271
+ (void)_switchNetworkLoaderToNewTestingSession;	// 0x339943c9
+ (unsigned long)_systemCFStringEncoding;	// 0x33935ba1
+ (void)initialize;	// 0x33934119
+ (void)setWebKitLinkTimeVersion:(int)version;	// 0x33994899
+ (id)standardPreferences;	// 0x33934f5d
- (id)init;	// 0x33992c09
- (id)initWithCoder:(id)coder;	// 0x33992ce1
- (id)initWithIdentifier:(id)identifier;	// 0x33992ccd
- (id)initWithIdentifier:(id)identifier sendChangeNotification:(BOOL)notification;	// 0x33934f91
- (int)_NSURLDiskCacheSize;	// 0x33936a65
- (int)_NSURLMemoryCacheSize;	// 0x33936a49
- (BOOL)_allowCompositingLayerVisualDegradation;	// 0x3393c995
- (BOOL)_allowMultiElementImplicitFormSubmission;	// 0x3393c8b1
- (BOOL)_allowPasswordEcho;	// 0x339940d9
- (BOOL)_alwaysRequestGeolocationPermission;	// 0x3393c955
- (BOOL)_alwaysUseAcceleratedOverflowScroll;	// 0x3393c975
- (BOOL)_alwaysUseBaselineOfPrimaryFont;	// 0x3393c891
- (double)_backForwardCacheExpirationInterval;	// 0x33993f95
- (BOOL)_boolValueForKey:(id)key;	// 0x339357ed
- (id)_diskImageCacheSavedCacheDirectory;	// 0x33938229
- (float)_floatValueForKey:(id)key;	// 0x3393c909
- (BOOL)_forceFTPDirectoryListings;	// 0x3393c389
- (id)_ftpDirectoryTemplatePath;	// 0x3393c3a9
- (int)_integerValueForKey:(id)key;	// 0x339354c1
- (int)_interpolationQuality;	// 0x3393cf9d
- (void)_invalidateCachedPreferences;	// 0x33940ac1
- (int)_layoutInterval;	// 0x3393c8d1
- (id)_localStorageDatabasePath;	// 0x339389c1
- (long long)_longLongValueForKey:(id)key;	// 0x3393cea1
- (float)_maxParseDuration;	// 0x3393c8ed
- (unsigned long)_maximumImageSize;	// 0x3393c831
- (float)_minimumZoomFontSize;	// 0x3393cf29
- (int)_objectCacheSize;	// 0x33936a2d
- (int)_pageCacheSize;	// 0x33936a11
- (float)_passwordEchoDuration;	// 0x339940f9
- (void)_postCacheModelChangedNotification;	// 0x33993d71
- (void)_postPreferencesChangedAPINotification;	// 0x33994321
- (void)_postPreferencesChangedNotification;	// 0x339352fd
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)degradation;	// 0x33935ac1
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)submission;	// 0x33994069
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)permission;	// 0x33994085
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)scroll;	// 0x339940a1
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)primaryFont;	// 0x3399404d
- (void)_setBoolValue:(BOOL)value forKey:(id)key;	// 0x33935701
- (void)_setDiskImageCacheSavedCacheDirectory:(id)directory;	// 0x3393825d
- (void)_setFTPDirectoryTemplatePath:(id)path;	// 0x339944ad
- (void)_setFloatValue:(float)value forKey:(id)key;	// 0x3393efb9
- (void)_setForceFTPDirectoryListings:(BOOL)listings;	// 0x339944e9
- (void)_setIntegerValue:(int)value forKey:(id)key;	// 0x339353dd
- (void)_setInterpolationQuality:(int)quality;	// 0x339940bd
- (void)_setLayoutInterval:(int)interval;	// 0x3393ef81
- (void)_setLocalStorageDatabasePath:(id)path;	// 0x33935919
- (void)_setLongLongValue:(long long)value forKey:(id)key;	// 0x33993785
- (void)_setMaxParseDuration:(float)duration;	// 0x3394c6c5
- (void)_setMinimumZoomFontSize:(float)size;	// 0x3393ef9d
- (void)_setNSURLDiskCacheSize:(int)size;	// 0x33994031
- (void)_setNSURLMemoryCacheSize:(int)size;	// 0x33994015
- (void)_setObjectCacheSize:(int)size;	// 0x33993ff9
- (void)_setPageCacheSize:(int)size;	// 0x33993fdd
- (void)_setPreferenceForTestWithValue:(id)value forKey:(id)key;	// 0x33994831
- (void)_setStandalone:(BOOL)standalone;	// 0x33993fc1
- (void)_setStringValue:(id)value forKey:(id)key;	// 0x33935955
- (void)_setTelephoneNumberParsingEnabled:(BOOL)enabled;	// 0x3393db09
- (void)_setUnsignedIntValue:(unsigned)value forKey:(id)key;	// 0x33993539
- (void)_setUnsignedLongLongValue:(unsigned long long)value forKey:(id)key;	// 0x33993975
- (void)_setUseSiteSpecificSpoofing:(BOOL)spoofing;	// 0x339941e1
- (BOOL)_standalone;	// 0x3393c811
- (id)_stringValueForKey:(id)key;	// 0x33935a51
- (BOOL)_telephoneNumberParsingEnabled;	// 0x3393c871
- (unsigned)_unsignedIntValueForKey:(id)key;	// 0x339934ed
- (unsigned long long)_unsignedLongLongValueForKey:(id)key;	// 0x33993925
- (BOOL)_useSiteSpecificSpoofing;	// 0x3393c2a1
- (id)_valueForKey:(id)key;	// 0x3393550d
// converted property getter: - (BOOL)accelerated2dCanvasEnabled;	// 0x3393cb35
// converted property getter: - (BOOL)acceleratedCompositingEnabled;	// 0x3393ca75
// converted property getter: - (BOOL)acceleratedDrawingEnabled;	// 0x3393ca95
// converted property getter: - (BOOL)allowFileAccessFromFileURLs;	// 0x3393c45d
// converted property getter: - (BOOL)allowUniversalAccessFromFileURLs;	// 0x3393c43d
// converted property getter: - (BOOL)allowsAnimatedImageLooping;	// 0x33993ce9
// converted property getter: - (BOOL)allowsAnimatedImages;	// 0x33993cad
// converted property getter: - (long long)applicationCacheDefaultOriginQuota;	// 0x3393ce85
// converted property getter: - (long long)applicationCacheTotalQuota;	// 0x33994115
// converted property getter: - (BOOL)applicationChromeModeEnabled;	// 0x3393c7f1
- (BOOL)arePlugInsEnabled;	// 0x3393c4f1
// converted property getter: - (BOOL)asynchronousSpellCheckingEnabled;	// 0x3393cbd5
// converted property getter: - (unsigned)audioSessionCategoryOverride;	// 0x33994955
// converted property getter: - (BOOL)authorAndUserStylesEnabled;	// 0x3393c7d1
// converted property getter: - (BOOL)automaticallyDetectsCacheModel;	// 0x33993f11
// converted property getter: - (BOOL)autosaves;	// 0x33993d41
// converted property getter: - (BOOL)backspaceKeyNavigationEnabled;	// 0x3393cdb9
// converted property getter: - (unsigned)cacheModel;	// 0x33935c95
// converted property getter: - (BOOL)canvasUsesAcceleratedDrawing;	// 0x3393cab5
- (BOOL)cssCompositingEnabled;	// 0x339945b1
- (BOOL)cssCustomFilterEnabled;	// 0x33994559
- (BOOL)cssGridLayoutEnabled;	// 0x339945ed
- (BOOL)cssRegionsEnabled;	// 0x3393cbb5
// converted property getter: - (id)cursiveFontFamily;	// 0x3393c2c1
// converted property getter: - (BOOL)databasesEnabled;	// 0x33937c55
- (void)dealloc;	// 0x339932f1
// converted property getter: - (int)defaultFixedFontSize;	// 0x3393c2dd
// converted property getter: - (int)defaultFontSize;	// 0x3393c2f9
// converted property getter: - (id)defaultTextEncodingName;	// 0x3393c315
// converted property getter: - (BOOL)developerExtrasEnabled;	// 0x3393c72d
// converted property getter: - (BOOL)diagnosticLoggingEnabled;	// 0x33994cdd
- (void)didRemoveFromWebView;	// 0x339947d1
// converted property getter: - (BOOL)diskImageCacheEnabled;	// 0x3393cf45
// converted property getter: - (unsigned)diskImageCacheMaximumCacheSize;	// 0x3393cf81
// converted property getter: - (unsigned)diskImageCacheMinimumImageSize;	// 0x3393cf65
// converted property getter: - (int)editableLinkBehavior;	// 0x3393c605
- (void)encodeWithCoder:(id)coder;	// 0x339930a5
// converted property getter: - (BOOL)experimentalNotificationsEnabled;	// 0x33994235
// converted property getter: - (id)fantasyFontFamily;	// 0x3393c351
// converted property getter: - (id)fixedFontFamily;	// 0x3393c36d
// converted property getter: - (BOOL)fullScreenEnabled;	// 0x3399485d
// converted property getter: - (BOOL)hiddenPageCSSAnimationSuspensionEnabled;	// 0x33994e05
// converted property getter: - (BOOL)hiddenPageDOMTimerThrottlingEnabled;	// 0x33994dc9
// converted property getter: - (BOOL)hyperlinkAuditingEnabled;	// 0x3393cc15
- (id)identifier;	// 0x33993351
// converted property getter: - (double)incrementalRenderingSuppressionTimeoutInSeconds;	// 0x3393ce59
// converted property getter: - (BOOL)isAVFoundationEnabled;	// 0x339948d9
// converted property getter: - (BOOL)isDNSPrefetchingEnabled;	// 0x3393ca55
// converted property getter: - (BOOL)isDOMPasteAllowed;	// 0x3393c675
// converted property getter: - (BOOL)isFrameFlatteningEnabled;	// 0x3393cb55
// converted property getter: - (BOOL)isHixie76WebSocketProtocolEnabled;	// 0x3393cd75
// converted property getter: - (BOOL)isJavaEnabled;	// 0x3393c3dd
// converted property getter: - (BOOL)isJavaScriptEnabled;	// 0x3393c3fd
// converted property getter: - (BOOL)isQTKitEnabled;	// 0x33994915
// converted property getter: - (BOOL)isSpatialNavigationEnabled;	// 0x3393cb75
// converted property getter: - (BOOL)isWebSecurityEnabled;	// 0x3393c41d
// converted property getter: - (BOOL)isXSSAuditorEnabled;	// 0x3393ca35
// converted property getter: - (BOOL)javaScriptCanAccessClipboard;	// 0x3393ca15
// converted property getter: - (BOOL)javaScriptCanOpenWindowsAutomatically;	// 0x3393c47d
// converted property getter: - (BOOL)javaScriptExperimentsEnabled;	// 0x33993e11
// converted property getter: - (BOOL)loadsImagesAutomatically;	// 0x3393c5a5
// converted property getter: - (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;	// 0x3393c5c5
// converted property getter: - (BOOL)localFileContentSniffingEnabled;	// 0x3393c9d5
// converted property getter: - (BOOL)localStorageEnabled;	// 0x3393c511
// converted property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x3393cd55
// converted property getter: - (BOOL)mediaPlaybackAllowsInline;	// 0x3393cd35
// converted property getter: - (BOOL)mediaPlaybackRequiresUserGesture;	// 0x3393cd15
// converted property getter: - (BOOL)memoryInfoEnabled;	// 0x3393cbf5
// converted property getter: - (int)minimumFontSize;	// 0x3393c49d
// converted property getter: - (int)minimumLogicalFontSize;	// 0x3393c4b9
// converted property getter: - (BOOL)mockScrollbarsEnabled;	// 0x3393cdf9
- (BOOL)networkDataUsageTrackingEnabled;	// 0x3399498d
// converted property getter: - (id)networkInterfaceName;	// 0x339949c9
// converted property getter: - (BOOL)notificationsEnabled;	// 0x33994c41
// converted property getter: - (BOOL)offlineWebApplicationCacheEnabled;	// 0x3393c9f5
// converted property getter: - (BOOL)pageCacheSupportsPlugins;	// 0x3393c70d
// converted property getter: - (BOOL)paginateDuringLayoutEnabled;	// 0x3393cb95
// converted property getter: - (id)pictographFontFamily;	// 0x3393c4d5
// converted property getter: - (BOOL)plugInSnapshottingEnabled;	// 0x33994d8d
// converted property getter: - (BOOL)privateBrowsingEnabled;	// 0x3393c531
// converted property getter: - (BOOL)regionBasedColumnsEnabled;	// 0x3393cd99
// converted property getter: - (BOOL)requestAnimationFrameEnabled;	// 0x3393ce39
// converted property getter: - (id)sansSerifFontFamily;	// 0x3393c551
// converted property getter: - (BOOL)screenFontSubstitutionEnabled;	// 0x33994d19
// converted property getter: - (BOOL)seamlessIFramesEnabled;	// 0x33994a39
// converted property getter: - (id)serifFontFamily;	// 0x3393c56d
// converted property setter: - (void)setAVFoundationEnabled:(BOOL)enabled;	// 0x339948bd
// converted property setter: - (void)setAccelerated2dCanvasEnabled:(BOOL)enabled;	// 0x339946b9
// converted property setter: - (void)setAcceleratedCompositingEnabled:(BOOL)enabled;	// 0x3399453d
// converted property setter: - (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x33994505
// converted property setter: - (void)setAllowFileAccessFromFileURLs:(BOOL)fileURLs;	// 0x33993f79
// converted property setter: - (void)setAllowUniversalAccessFromFileURLs:(BOOL)fileURLs;	// 0x33993f5d
// converted property setter: - (void)setAllowsAnimatedImageLooping:(BOOL)looping;	// 0x33993d09
// converted property setter: - (void)setAllowsAnimatedImages:(BOOL)images;	// 0x33993ccd
// converted property setter: - (void)setApplicationCacheDefaultOriginQuota:(long long)quota;	// 0x33994181
// converted property setter: - (void)setApplicationCacheTotalQuota:(long long)quota;	// 0x33994131
// converted property setter: - (void)setApplicationChromeModeEnabled:(BOOL)enabled;	// 0x33993e69
// converted property setter: - (void)setAsynchronousSpellCheckingEnabled:(BOOL)enabled;	// 0x3399487d
// converted property setter: - (void)setAudioSessionCategoryOverride:(unsigned)override;	// 0x33994971
// converted property setter: - (void)setAuthorAndUserStylesEnabled:(BOOL)enabled;	// 0x33993e4d
// converted property setter: - (void)setAutomaticallyDetectsCacheModel:(BOOL)model;	// 0x339356d1
// converted property setter: - (void)setAutosaves:(BOOL)autosaves;	// 0x3393537d
// converted property setter: - (void)setBackspaceKeyNavigationEnabled:(BOOL)enabled;	// 0x33994b39
- (void)setCSSCompositingEnabled:(BOOL)enabled;	// 0x339945d1
- (void)setCSSCustomFilterEnabled:(BOOL)enabled;	// 0x33994579
- (void)setCSSGridLayoutEnabled:(BOOL)enabled;	// 0x3399460d
- (void)setCSSRegionsEnabled:(BOOL)enabled;	// 0x33994595
// converted property setter: - (void)setCacheModel:(unsigned)model;	// 0x33935391
// converted property setter: - (void)setCanvasUsesAcceleratedDrawing:(BOOL)drawing;	// 0x33994521
// converted property setter: - (void)setCursiveFontFamily:(id)family;	// 0x33993b85
// converted property setter: - (void)setDNSPrefetchingEnabled:(BOOL)enabled;	// 0x33993dd9
// converted property setter: - (void)setDOMPasteAllowed:(BOOL)allowed;	// 0x33994491
// converted property setter: - (void)setDatabasesEnabled:(BOOL)enabled;	// 0x339941fd
// converted property setter: - (void)setDefaultFixedFontSize:(int)size;	// 0x33993bd9
// converted property setter: - (void)setDefaultFontSize:(int)size;	// 0x33993bbd
// converted property setter: - (void)setDefaultTextEncodingName:(id)name;	// 0x33993c2d
// converted property setter: - (void)setDeveloperExtrasEnabled:(BOOL)enabled;	// 0x33993e31
// converted property setter: - (void)setDiagnosticLoggingEnabled:(BOOL)enabled;	// 0x33994cfd
// converted property setter: - (void)setDiskImageCacheEnabled:(BOOL)enabled;	// 0x339946d5
// converted property setter: - (void)setDiskImageCacheMaximumCacheSize:(unsigned)size;	// 0x3399470d
// converted property setter: - (void)setDiskImageCacheMinimumImageSize:(unsigned)size;	// 0x339946f1
// converted property setter: - (void)setEditableLinkBehavior:(int)behavior;	// 0x339941a9
// converted property setter: - (void)setExperimentalNotificationsEnabled:(BOOL)enabled;	// 0x33994255
// converted property setter: - (void)setFantasyFontFamily:(id)family;	// 0x33993ba1
// converted property setter: - (void)setFixedFontFamily:(id)family;	// 0x33993b31
// converted property setter: - (void)setFrameFlatteningEnabled:(BOOL)enabled;	// 0x33994729
// converted property setter: - (void)setFullScreenEnabled:(BOOL)enabled;	// 0x33994841
// converted property setter: - (void)setHiddenPageCSSAnimationSuspensionEnabled:(BOOL)enabled;	// 0x33994e25
// converted property setter: - (void)setHiddenPageDOMTimerThrottlingEnabled:(BOOL)enabled;	// 0x33994de9
// converted property setter: - (void)setHixie76WebSocketProtocolEnabled:(BOOL)enabled;	// 0x33994935
// converted property setter: - (void)setHyperlinkAuditingEnabled:(BOOL)enabled;	// 0x33994799
// converted property setter: - (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)seconds;	// 0x33994cb5
// converted property setter: - (void)setJavaEnabled:(BOOL)enabled;	// 0x33993c59
// converted property setter: - (void)setJavaScriptCanAccessClipboard:(BOOL)clipboard;	// 0x33993ed9
// converted property setter: - (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)automatically;	// 0x33993c91
// converted property setter: - (void)setJavaScriptEnabled:(BOOL)enabled;	// 0x33993c75
// converted property setter: - (void)setJavaScriptExperimentsEnabled:(BOOL)enabled;	// 0x33993df5
// converted property setter: - (void)setLoadsImagesAutomatically:(BOOL)automatically;	// 0x33993d25
// converted property setter: - (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)preference;	// 0x339948a1
// converted property setter: - (void)setLocalFileContentSniffingEnabled:(BOOL)enabled;	// 0x33993ea1
// converted property setter: - (void)setLocalStorageEnabled:(BOOL)enabled;	// 0x33994219
// converted property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x33994939
// converted property setter: - (void)setMediaPlaybackAllowsInline:(BOOL)anInline;	// 0x33940c15
// converted property setter: - (void)setMediaPlaybackRequiresUserGesture:(BOOL)gesture;	// 0x33994a01
// converted property setter: - (void)setMemoryInfoEnabled:(BOOL)enabled;	// 0x3399477d
// converted property setter: - (void)setMinimumFontSize:(int)size;	// 0x33993bf5
// converted property setter: - (void)setMinimumLogicalFontSize:(int)size;	// 0x33993c11
// converted property setter: - (void)setMockScrollbarsEnabled:(BOOL)enabled;	// 0x33994a1d
- (void)setNetworkDataUsageTrackingEnabled:(bool)enabled;	// 0x339949ad
// converted property setter: - (void)setNetworkInterfaceName:(id)name;	// 0x339949e5
// converted property setter: - (void)setNotificationsEnabled:(BOOL)enabled;	// 0x33994c25
// converted property setter: - (void)setOfflineWebApplicationCacheEnabled:(BOOL)enabled;	// 0x339356e5
// converted property setter: - (void)setPageCacheSupportsPlugins:(BOOL)plugins;	// 0x33994a91
// converted property setter: - (void)setPaginateDuringLayoutEnabled:(BOOL)enabled;	// 0x33994761
// converted property setter: - (void)setPictographFontFamily:(id)family;	// 0x33994a75
// converted property setter: - (void)setPlugInSnapshottingEnabled:(BOOL)snapshottingEnabled;	// 0x33994dad
- (void)setPlugInsEnabled:(BOOL)enabled;	// 0x33935add
// converted property setter: - (void)setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x33940bf9
// converted property setter: - (void)setQTKitEnabled:(BOOL)enabled;	// 0x339948f9
// converted property setter: - (void)setRegionBasedColumnsEnabled:(BOOL)enabled;	// 0x33994c61
// converted property setter: - (void)setRequestAnimationFrameEnabled:(BOOL)enabled;	// 0x33994c99
// converted property setter: - (void)setSansSerifFontFamily:(id)family;	// 0x33993b69
// converted property setter: - (void)setScreenFontSubstitutionEnabled:(BOOL)enabled;	// 0x33994d39
// converted property setter: - (void)setSeamlessIFramesEnabled:(BOOL)enabled;	// 0x33994a59
// converted property setter: - (void)setSerifFontFamily:(id)family;	// 0x33993b4d
// converted property setter: - (void)setShouldDisplayCaptions:(BOOL)displayCaptions;	// 0x33994bad
// converted property setter: - (void)setShouldDisplaySubtitles:(BOOL)displaySubtitles;	// 0x33994b71
// converted property setter: - (void)setShouldDisplayTextDescriptions:(BOOL)displayTextDescriptions;	// 0x33994be9
// converted property setter: - (void)setShouldRespectImageOrientation:(BOOL)respectImageOrientation;	// 0x33994c7d
// converted property setter: - (void)setShowDebugBorders:(BOOL)borders;	// 0x33994629
// converted property setter: - (void)setShowRepaintCounter:(BOOL)counter;	// 0x33994645
// converted property setter: - (void)setShrinksStandaloneImagesToFit:(BOOL)fit;	// 0x3393dacd
// converted property setter: - (void)setSpatialNavigationEnabled:(BOOL)enabled;	// 0x33994745
// converted property setter: - (void)setStandardFontFamily:(id)family;	// 0x33993b15
// converted property setter: - (void)setStorageBlockingPolicy:(int)policy;	// 0x33994d55
// converted property setter: - (void)setStorageTrackerEnabled:(BOOL)enabled;	// 0x33935aa5
// converted property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x33993dbd
// converted property setter: - (void)setTextDirectionSubmenuInclusionBehavior:(int)behavior;	// 0x339941c5
// converted property setter: - (void)setUsePreHTML5ParserQuirks:(BOOL)quirks;	// 0x339947b5
// converted property setter: - (void)setUserStyleSheetEnabled:(BOOL)enabled;	// 0x33993c4d
// converted property setter: - (void)setUserStyleSheetLocation:(id)location;	// 0x33993c55
// converted property setter: - (void)setUsesEncodingDetector:(BOOL)detector;	// 0x33993f25
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x33993d55
// converted property setter: - (void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)behavior;	// 0x33994b55
// converted property setter: - (void)setWebArchiveDebugModeEnabled:(BOOL)enabled;	// 0x33993e85
// converted property setter: - (void)setWebAudioEnabled:(BOOL)enabled;	// 0x33994661
// converted property setter: - (void)setWebGLEnabled:(BOOL)enabled;	// 0x3399469d
// converted property setter: - (void)setWebSecurityEnabled:(BOOL)enabled;	// 0x33993f41
// converted property setter: - (void)setXSSAuditorEnabled:(BOOL)enabled;	// 0x33993ef5
// converted property setter: - (void)setZoomsTextOnly:(BOOL)only;	// 0x33993ebd
// converted property getter: - (BOOL)shouldDisplayCaptions;	// 0x33994bc9
// converted property getter: - (BOOL)shouldDisplaySubtitles;	// 0x33994b8d
// converted property getter: - (BOOL)shouldDisplayTextDescriptions;	// 0x33994c05
// converted property getter: - (BOOL)shouldRespectImageOrientation;	// 0x3393ce19
// converted property getter: - (BOOL)showDebugBorders;	// 0x3393cad5
// converted property getter: - (BOOL)showRepaintCounter;	// 0x3393caf5
// converted property getter: - (BOOL)shrinksStandaloneImagesToFit;	// 0x3393c5e5
// converted property getter: - (id)standardFontFamily;	// 0x3393c589
// converted property getter: - (int)storageBlockingPolicy;	// 0x33994d71
// converted property getter: - (BOOL)storageTrackerEnabled;	// 0x33937c75
// converted property getter: - (BOOL)suppressesIncrementalRendering;	// 0x3393cd79
// converted property getter: - (int)textDirectionSubmenuInclusionBehavior;	// 0x3393c645
// converted property getter: - (BOOL)usePreHTML5ParserQuirks;	// 0x3393ccb1
// converted property getter: - (BOOL)userStyleSheetEnabled;	// 0x33993c49
// converted property getter: - (id)userStyleSheetLocation;	// 0x33993c51
// converted property getter: - (BOOL)usesEncodingDetector;	// 0x3393c331
// converted property getter: - (BOOL)usesPageCache;	// 0x3393c6ed
// converted property getter: - (BOOL)wantsBalancedSetDefersLoadingBehavior;	// 0x3393cdd9
// converted property getter: - (BOOL)webArchiveDebugModeEnabled;	// 0x3393c9b5
// converted property getter: - (BOOL)webAudioEnabled;	// 0x3393cb15
// converted property getter: - (BOOL)webGLEnabled;	// 0x3399467d
- (void)willAddToWebView;	// 0x33937a4d
// converted property getter: - (BOOL)zoomsTextOnly;	// 0x3393cf09
@end
