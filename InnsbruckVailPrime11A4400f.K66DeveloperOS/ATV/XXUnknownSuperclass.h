/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVJSCopyObject.h"
#import "AppleTV-Structs.h"

@class NSString, NSDictionary, NSArray;
@protocol AVAssetResourceLoaderDelegate;

@interface XXUnknownSuperclass (iTunesAdditions)
+ (id)stringWithUStr255:(unsigned short [256])ustr255;	// 0x2a569
- (int)iTunesCompare:(id)compare;	// 0x2a57d
@end

@interface XXUnknownSuperclass (FrontRow)
+ (id)languageKeysAndDisplayStrings;	// 0x766c9
@end

@interface XXUnknownSuperclass (Additions)
- (BOOL)representsVideo;	// 0x90d0d
@end

@interface XXUnknownSuperclass (ATVValueTransformerAdditions)
+ (id)dateToMonthDayYearString;	// 0xda4cd
+ (id)releaseDateAsInTheatersDateString;	// 0xda295
+ (id)releaseDateAsOriginalAirDateString;	// 0xda2d9
+ (id)releaseDateAsReleasedDateString;	// 0xda205
+ (id)releaseDateAsYearReleasedString;	// 0xda175
+ (id)tomatoMeter;	// 0xda631
+ (id)tvEpisodeTitleToNumberedTitle;	// 0xda5a1
+ (id)userRatingAndNumReviewsToControl;	// 0xda43d
+ (id)userRatingToImageControl;	// 0xda31d
+ (id)userReviewsNumberToTextControl;	// 0xda3ad
+ (id)versionStringToVersionComponentsArray;	// 0xda55d
- (id)transformedValue:(id)value withColor:(id)color;	// 0xda6c1
@end

@interface XXUnknownSuperclass (SimpleQueue)
- (id)pop;	// 0xfd769
@end

@interface XXUnknownSuperclass (JSAdditions)
- (id)elementById:(id)anId;	// 0x1333a1
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x1372a5
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x13733d
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x137395
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x1373ed
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x137481
@end

@interface XXUnknownSuperclass (JSAdditions) <ATVJSCopyObject>
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x144895
@end

@interface XXUnknownSuperclass (FrontRow)
@property(readonly, assign, nonatomic) NSDictionary *atvHeaders;	// G=0x14d709; 
@property(readonly, assign, nonatomic) NSDictionary *commonHeaders;	// G=0x14d42d; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersDictionary;	// G=0x14d501; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersWithDsid;	// G=0x14d5c5; 
- (id)_acceptLanguage;	// 0x14d80d
// declared property getter: - (id)atvHeaders;	// 0x14d709
// declared property getter: - (id)commonHeaders;	// 0x14d42d
// declared property getter: - (id)storeHeadersDictionary;	// 0x14d501
// declared property getter: - (id)storeHeadersWithDsid;	// 0x14d5c5
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (id)configurationInfo;	// 0x16f411
- (int)deviceActivationState;	// 0x16fa31
- (id)hwDeviceName;	// 0x16f799
- (id)hwMachine;	// 0x16f981
- (BOOL)performObliteratePreservingPaths:(id)paths;	// 0x16f271
- (void)setDeviceActivationFailureState:(int)state;	// 0x16fab9
- (void)setDeviceActivationWasSkipped:(BOOL)skipped;	// 0x16fb91
- (void)setHWDeviceName:(id)name;	// 0x16f805
- (void)setSILState_HardwareProblem;	// 0x16f23d
- (void)setSILState_Off;	// 0x16f16d
- (void)setSILState_On;	// 0x16f1a1
- (void)setSILState_RejectedCommand;	// 0x16f209
- (void)setSILState_Starting;	// 0x16f1d5
- (BOOL)wasDeviceActivationSkipped;	// 0x16fb4d
@end

@interface XXUnknownSuperclass (ATVSecureKeyDeliveryAdditions)
@property(retain, nonatomic) id<AVAssetResourceLoaderDelegate> resourceLoaderDelegate;	// G=0x2423b9; S=0x2423c9; 
// declared property getter: - (id)resourceLoaderDelegate;	// 0x2423b9
// declared property setter: - (void)setResourceLoaderDelegate:(id)delegate;	// 0x2423c9
@end

@interface XXUnknownSuperclass (UI)
@property(assign) UIEdgeInsets alignmentRectInsets;	// G=0x24465d; S=0x2446b1; converted property
// converted property getter: - (UIEdgeInsets)alignmentRectInsets;	// 0x24465d
- (id)imageWithAlignmentRectInsets:(UIEdgeInsets)alignmentRectInsets;	// 0x244711
- (BOOL)isAccessibilityElement;	// 0x24479d
// converted property setter: - (void)setAlignmentRectInsets:(UIEdgeInsets)insets;	// 0x2446b1
@end

@interface XXUnknownSuperclass (RUIYTAdditions)
+ (id)ytErrorWithCode:(int)code localizedDescription:(id)description;	// 0x258c4d
@end

@interface XXUnknownSuperclass (FrontRow)
+ (id)sharedFrontRowPreferences;	// 0x2603ed
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x26046d
- (id)logFilePathsForKey:(id)key;	// 0x2604ad
@end

@interface XXUnknownSuperclass (DirtyLayout)
- (void)setNeedsLayoutOnAllSublayers;	// 0x2ce439
@end

@interface XXUnknownSuperclass (Accessibility)
@property(readonly, assign, nonatomic) NSArray *accessibilityControls;	// G=0x2d5eb5; 
@property(assign, nonatomic) BOOL accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// G=0x2d5ee5; S=0x2d5f11; @dynamic
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x2d5edd; 
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x2d5ed9; 
@property(readonly, assign, nonatomic) NSString *accessibilityRangeString;	// G=0x2d5ee1; 
// declared property getter: - (id)accessibilityControls;	// 0x2d5eb5
- (float)accessibilityDelayForScreenContent;	// 0x2d5ea5
- (BOOL)accessibilityElementIsHidden;	// 0x2d5ead
- (id)accessibilityNonFocusableElements;	// 0x2d5ea1
// declared property getter: - (BOOL)accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// 0x2d5ee5
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x2d5edd
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x2d5ed9
// declared property getter: - (id)accessibilityRangeString;	// 0x2d5ee1
- (id)accessibilityScreenContent;	// 0x2d5ed5
- (id)accessibilitySecondaryLabel;	// 0x2d5ed1
- (id)accessibilityTraitsList;	// 0x2d5eb1
// declared property setter: - (void)setAccessibilityOutputsLanguageNameIfCannotSpeakLanguage:(BOOL)language;	// 0x2d5f11
@end

@interface XXUnknownSuperclass (AXPriv)
- (id)accessibilityLabel;	// 0x2d5f4d
@end

@interface XXUnknownSuperclass (BRMetadataLinesLayer)
- (BOOL)isEmpty;	// 0x34a409
@end

@interface XXUnknownSuperclass (BRScalingLayoutManager)
@property(assign) CGRect scaledFrame;	// G=0x3b4919; S=0x3b485d; converted property
// converted property getter: - (CGRect)scaledFrame;	// 0x3b4919
// converted property setter: - (void)setScaledFrame:(CGRect)frame;	// 0x3b485d
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x3c9739
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x3c9795
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x3c97f5
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (id)providerRanges;	// 0x3c9815
@end

@interface XXUnknownSuperclass (NSIndexPathExtensions)
+ (id)indexPathForColumn:(unsigned)column inSection:(unsigned)section;	// 0x3cf675
- (unsigned)column;	// 0x3cf6c1
@end

@interface XXUnknownSuperclass (PhotoBatchIndexPath)
+ (id)indexPathForPhoto:(unsigned)photo inBatch:(unsigned)batch;	// 0x3cf6d5
- (unsigned)batch;	// 0x3cf721
- (unsigned)photo;	// 0x3cf759
@end

@interface XXUnknownSuperclass (GridIndexPath)
+ (id)indexPathForIndex:(unsigned)index;	// 0x3cf791
- (unsigned)index;	// 0x3cf7ad
@end

@interface XXUnknownSuperclass (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x3d5269
@end

@interface XXUnknownSuperclass (FeatureManagerAdditions)
- (BOOL)isApplianceBundleIdentifier;	// 0x3dd3b5
@end

@interface XXUnknownSuperclass (BRBundleAdditions)
+ (id)primaryResourceBundle;	// 0x3fcc11
- (id)pathForImage:(id)image ofType:(id)type;	// 0x3fcc55
- (id)pathForImage:(id)image ofType:(id)type inDirectory:(id)directory;	// 0x3fcc79
- (id)urlForImage:(id)image ofType:(id)type;	// 0x3fcd21
@end

@interface XXUnknownSuperclass (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x3fd1b1
@end

@interface XXUnknownSuperclass (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x3fd3d5
@end

@interface XXUnknownSuperclass (BRMutableArrayAdditions)
- (void)addObjectIfNotNil:(id)aNil;	// 0x3fd445
@end

@interface XXUnknownSuperclass (BRCALayerAdditions)
- (void)addBasicAnimationForProperty:(id)property fromValue:(id)value toValue:(id)value3 duration:(double)duration timingFunction:(id)function delegate:(id)delegate;	// 0x3ff379
- (id)firstLayerNamed:(id)named;	// 0x3ff2f9
@end

@interface XXUnknownSuperclass (BRDateHelpers)
+ (id)dateFromYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x3ffdc1
- (BOOL)isToday;	// 0x3fff05
- (BOOL)isTomorrow;	// 0x40003d
- (BOOL)isYesterday;	// 0x3fffa1
@end

@interface XXUnknownSuperclass (BRDateDisplay)
- (id)expiryDescription;	// 0x400651
- (id)stringForDisplayingMonthDayYear;	// 0x400349
- (id)stringForDisplayingTime12H;	// 0x400401
- (id)stringForGeneralDisplay;	// 0x4000e9
- (id)stringForMonthDayFormat;	// 0x4004cd
- (id)stringForReleaseDateDisplay;	// 0x4002a5
- (id)stringFromDateForTVShows;	// 0x4000d9
@end

@interface XXUnknownSuperclass (BRDictionaryAdditions)
- (id)deepMutableCopy;	// 0x4015a1
- (id)dictionaryByReplacingEntriesFromDictionary:(id)dictionary;	// 0x4015b9
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x40161d
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x40162d
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x401649
@end

@interface XXUnknownSuperclass (BRError)
+ (id)errorWithBRError:(int)brerror;	// 0x402ab9
+ (id)errorWithBRError:(int)brerror userInfo:(id)info;	// 0x402ad9
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion;	// 0x402c59
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion userInfo:(id)info;	// 0x402cb9
- (void)postBRErrorNotificationFromObject:(id)object;	// 0x402e05
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (id)cachePath;	// 0x4031d5
- (id)mediaFolderPath;	// 0x403409
- (id)modDateOfFileAtPath:(id)path error:(id *)error;	// 0x403189
- (id)mostRecentModDateInDirectoryAtPath:(id)path error:(id *)error;	// 0x402ff9
- (id)ourApplicationSupportPath;	// 0x40335d
- (id)preferencesPath;	// 0x4032b1
- (BOOL)removeContentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x402eb9
- (id)videoCachePath;	// 0x40327d
@end

@interface XXUnknownSuperclass (RawData)
- (void)purgeRawData;	// 0x40bf55
- (id)rawData;	// 0x40bf51
@end

@interface XXUnknownSuperclass (BRStringUtilities)
+ (id)timeStringForSeconds:(double)seconds;	// 0x414de9
+ (id)timeStringWithLabelForSeconds:(double)seconds;	// 0x414f21
- (int)customCompare:(id)compare;	// 0x414fe1
@end

@interface XXUnknownSuperclass (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x415565
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x4154b9
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x4154d9
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x415519
- (void)postNotificationOnMainThread:(id)thread;	// 0x4153e9
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x415419
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x415469
@end

@interface XXUnknownSuperclass (BRTimerAdditions)
- (void)invalidateWithObject:(id)object;	// 0x415b01
@end

@interface XXUnknownSuperclass (Drawing)
- (void)drawAtPoint:(CGPoint)point context:(CGContextRef)context;	// 0x41631d
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x41634d
- (void)drawInRect:(CGRect)rect withDim:(float)dim context:(CGContextRef)context;	// 0x4163c1
- (CGSize)typographicBounds;	// 0x416479
- (CGSize)typographicBoundsWithConstraint:(CGSize)constraint;	// 0x4164b5
@end

@interface XXUnknownSuperclass (BRValueTransformerAdditions)
+ (id)movieRatingStringTransformer;	// 0x417989
@end

@interface XXUnknownSuperclass (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x417f95
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x418119
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x417d89
- (id)_queryParameters;	// 0x417b11
- (id)decodedQueryParameters;	// 0x417c39
- (BOOL)isHTTPFamilyURL;	// 0x417ad1
- (BOOL)isHTTPSURL;	// 0x417a91
- (BOOL)isHTTPURL;	// 0x417a51
- (id)queryParameters;	// 0x417c29
- (id)valueForParam:(id)param;	// 0x418005
@end

@interface XXUnknownSuperclass (BRURLAdditions)
- (id)URLQueryString;	// 0x418271
- (id)URLQueryStringWithKeyOrder:(id)keyOrder;	// 0x418285
@end

@interface XXUnknownSuperclass (BRLocaliztionAdditions)
+ (id)dictionaryOfLocalizedRUIData;	// 0x4191cd
- (void)__purgeCachedLocalizedData:(id)data;	// 0x419171
@end

@interface XXUnknownSuperclass (FeedAdditions)
+ (id)colorWithRGBHexString:(id)rgbhexString;	// 0x476f89
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (CGRect)drawingBounds;	// 0x477191
- (CGRect)visibleBounds;	// 0x477271
@end

@interface XXUnknownSuperclass (ATVAdditions_Private)
- (void)setDrawingBounds:(CGRect)bounds;	// 0x4772f1
- (void)setVisibleBounds:(CGRect)bounds;	// 0x47735d
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (id)requiredURLs;	// 0x4773c1
@end

@interface XXUnknownSuperclass (Additions)
- (BOOL)isViewable;	// 0x484b29
@end

@interface XXUnknownSuperclass (NSObject_SBJsonWriting)
- (id)JSONRepresentation;	// 0x517725
@end

@interface XXUnknownSuperclass (NSString_SBJsonParsing)
- (id)JSONValue;	// 0x5177a9
@end

@interface XXUnknownSuperclass (URLDecode)
- (id)urlDecodeByReplacingPercentEscapesUsingEncoding;	// 0x53b1f5
@end

@interface XXUnknownSuperclass (URLEncode)
- (id)urlEncodeByReplacingPercentEscapesUsingEncoding;	// 0x556da9
@end
