/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library

@class WebViewPrivate;

@interface WebView : WAKView {
@private
	WebViewPrivate *_private;	// 68 = 0x44
}
@property(assign) id UIDelegate;	// G=0x302b00dd; S=0x302a9f25; converted property
@property(assign) BOOL allowsRemoteInspection;	// G=0x3030f895; S=0x302a9f91; converted property
@property(assign) BOOL allowsUndo;	// G=0x3030fca1; S=0x3030fcc1; converted property
@property(retain) id applicationNameForUserAgent;	// G=0x302cbb15; S=0x302a9fed; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x302a4c61; S=0x30316111; converted property
@property(retain) id caretChangeListener;	// G=0x3030f93d; S=0x3030f95d; converted property
@property(assign, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;	// G=0x302c862d; S=0x302c91dd; converted property
@property(retain) id currentNodeHighlight;	// G=0x302a8a85; S=0x30310429; converted property
@property(retain) id customTextEncodingName;	// G=0x30310c81; S=0x30310cfd; converted property
@property(retain) id customUserAgent;	// G=0x30310f25; S=0x30310f71; converted property
@property(assign) BOOL defersCallbacks;	// G=0x302be8e9; S=0x302b06a5; converted property
@property(assign) id downloadDelegate;	// G=0x302a3ce1; S=0x302a9f05; converted property
@property(assign) BOOL drawsBackground;	// G=0x302a4c35; S=0x302c7b39; converted property
@property(assign, getter=isEditable) BOOL editable;	// G=0x302b8011; S=0x303196a9; converted property
@property(assign) id editingDelegate;	// G=0x3030fd35; S=0x302a7801; converted property
@property(assign) id frameLoadDelegate;	// G=0x302b0409; S=0x302a9285; converted property
@property(retain) id groupName;	// G=0x30310705; S=0x302a5355; converted property
@property(assign) id historyDelegate;	// G=0x302b50b1; S=0x30313001; converted property
@property(retain) id hostWindow;	// G=0x3030fbf1; S=0x30310abd; converted property
@property(assign) BOOL interactiveFormValidationEnabled;	// G=0x302a75a5; S=0x3030fae5; converted property
@property(retain) id mainFrameURL;	// G=0x302b05cd; S=0x30310685; converted property
@property(retain) id mediaStyle;	// G=0x302a5061; S=0x30310ec1; converted property
@property(assign) float mediaVolume;	// G=0x3030fce1; S=0x30319125; converted property
@property(assign) float pageSizeMultiplier;	// G=0x303130e9; S=0x303130d5; converted property
@property(assign) id policyDelegate;	// G=0x3030fbd1; S=0x302a98b1; converted property
@property(retain) id preferences;	// G=0x302a3031; S=0x30311869; converted property
@property(retain) id preferencesIdentifier;	// G=0x30311781; S=0x303117a9; converted property
@property(assign) id resourceLoadDelegate;	// G=0x302a3cc1; S=0x302a991d; converted property
@property(assign) id scriptDebugDelegate;	// G=0x302b8441; S=0x30312fa9; converted property
@property(assign, getter=isSelectTrailingWhitespaceEnabled) BOOL selectTrailingWhitespaceEnabled;	// G=0x3030fa61; S=0x303126e5; converted property
@property(assign) BOOL shouldCloseWithWindow;	// G=0x3030fbb1; S=0x3030fb91; converted property
@property(assign) BOOL shouldUpdateWhileOffscreen;	// G=0x302a4ca1; S=0x30310479; converted property
@property(assign) BOOL smartInsertDeleteEnabled;	// G=0x3030fd15; S=0x30313259; converted property
@property(assign) BOOL tabKeyCyclesThroughElements;	// G=0x3030fc6d; S=0x3030fc15; converted property
@property(assign) float textSizeMultiplier;	// G=0x30311575; S=0x303115c5; converted property
@property(retain) id typingStyle;	// G=0x30313231; S=0x30313201; converted property
@property(assign) BOOL usesPageCache;	// G=0x302a6f89; S=0x3031267d; converted property
@property(assign) int validationMessageTimerMagnification;	// G=0x302a75c5; S=0x3030fb05; converted property
+ (id)MIMETypesShownAsHTML;	// 0x3031018d
+ (BOOL)_HTTPPipeliningEnabled;	// 0x30318869
+ (id)_MIMETypeForFile:(id)file;	// 0x3031294d
+ (void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x303174bd
+ (void)_addUserScriptToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectionTime:(int)time;	// 0x30312aad
+ (void)_addUserScriptToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectionTime:(int)time injectedFrames:(int)frames;	// 0x303179e9
+ (void)_addUserStyleSheetToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist;	// 0x30312af5
+ (void)_addUserStyleSheetToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectedFrames:(int)frames;	// 0x30317d01
+ (BOOL)_allowsRoundingHacks;	// 0x30316dbd
+ (unsigned)_cacheModel;	// 0x302aa60d
+ (BOOL)_canHandleRequest:(id)request;	// 0x302afe11
+ (BOOL)_canHandleRequest:(id)request forMainFrame:(BOOL)mainFrame;	// 0x302afe29
+ (BOOL)_canShowMIMEType:(id)type allowingPlugins:(BOOL)plugins;	// 0x302b37f9
+ (id)_decodeData:(id)data;	// 0x30317181
+ (double)_defaultMinimumTimerInterval;	// 0x30318865
+ (unsigned)_didSetCacheModel;	// 0x3029f409
+ (void)_disableRemoteInspector;	// 0x30312a41
+ (void)_enableRemoteInspector;	// 0x30312a0d
+ (id)_generatedMIMETypeForURLScheme:(id)urlscheme;	// 0x30312a75
+ (Class)_getPDFRepresentationClass;	// 0x302b43d5
+ (Class)_getPDFViewClass;	// 0x302b3ff1
+ (void)_handleMemoryWarning;	// 0x30316b91
+ (BOOL)_hasPluginForNodeBeenHalted:(id)nodeBeenHalted;	// 0x3030fb69
+ (BOOL)_isNodeHaltedPlugin:(id)plugin;	// 0x3030fb65
+ (BOOL)_isRemoteInspectorEnabled;	// 0x302aa351
+ (void)_makeAllWebViewsPerformSelector:(SEL)selector;	// 0x3030ff01
+ (unsigned)_maxCacheModelInAnyInstance;	// 0x30314079
+ (unsigned)_maximumImageSizeBeforeSubsampling;	// 0x303174b9
+ (void)_preferencesChangedNotification:(id)notification;	// 0x3029f2a9
+ (void)_preferencesRemovedNotification:(id)notification;	// 0x303140f9
+ (void)_preflightSpellChecker;	// 0x3030fd6d
+ (void)_preflightSpellCheckerNow:(id)now;	// 0x3030fd69
+ (id)_productivityDocumentMIMETypes;	// 0x302b737d
+ (void)_registerPluginMIMEType:(id)type;	// 0x302bb3f9
+ (void)_registerURLSchemeAsSecure:(id)secure;	// 0x30318785
+ (void)_registerViewClass:(Class)aClass representationClass:(Class)aClass2 forURLScheme:(id)urlscheme;	// 0x30316f8d
+ (void)_removeAllUserContentFromGroup:(id)group;	// 0x30318591
+ (void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x30317751
+ (void)_removeUserScriptFromGroup:(id)group world:(id)world url:(id)url;	// 0x30318011
+ (void)_removeUserScriptsFromGroup:(id)group world:(id)world;	// 0x30318369
+ (void)_removeUserStyleSheetFromGroup:(id)group world:(id)world url:(id)url;	// 0x303181bd
+ (void)_removeUserStyleSheetsFromGroup:(id)group world:(id)world;	// 0x3031847d
+ (void)_reportException:(OpaqueJSValue *)exception inContext:(OpaqueJSContext *)context;	// 0x30316aa5
+ (BOOL)_representationExistsForURLScheme:(id)urlscheme;	// 0x302b32dd
+ (void)_resetOriginAccessWhitelists;	// 0x303179e5
+ (void)_restartHaltedPluginForNode:(id)node;	// 0x3030fb6d
+ (void)_setAllowsRoundingHacks:(BOOL)hacks;	// 0x3029e075
+ (void)_setAlwaysUsesComplexTextCodePath:(BOOL)path;	// 0x30316dad
+ (void)_setCacheModel:(unsigned)model;	// 0x3029f419
+ (void)_setDomainRelaxationForbidden:(BOOL)forbidden forURLScheme:(id)urlscheme;	// 0x30318691
+ (void)_setHTTPPipeliningEnabled:(BOOL)enabled;	// 0x30318875
+ (void)_setLoadResourcesSerially:(BOOL)serially;	// 0x30314269
+ (void)_setMaximumImageSizeBeforeSubsampling:(unsigned)subsampling;	// 0x303174b1
+ (void)_setPDFRepresentationClass:(Class)aClass;	// 0x302a0989
+ (void)_setPDFViewClass:(Class)aClass;	// 0x302a0999
+ (void)_setShouldUseFontSmoothing:(BOOL)_set;	// 0x30317495
+ (BOOL)_shouldUseFontSmoothing;	// 0x303174a5
+ (id)_standardUserAgentWithApplicationName:(id)applicationName;	// 0x302af2a5
+ (id)_standardUserAgentWithApplicationName:(id)applicationName osMarketingVersion:(id)version;	// 0x302af389
+ (id)_supportedMIMETypes;	// 0x30312821
+ (void)_unregisterPluginMIMEType:(id)type;	// 0x30312889
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)mimetype;	// 0x30316e4d
+ (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x302b381d
+ (BOOL)canCloseAllWebViews;	// 0x30316dc9
+ (BOOL)canShowFile:(id)file;	// 0x303128fd
+ (BOOL)canShowMIMEType:(id)type;	// 0x302b37e1
+ (BOOL)canShowMIMETypeAsHTML:(id)html;	// 0x302a51cd
+ (void)closeAllWebViews;	// 0x30316dd5
+ (void)drainLayerPool;	// 0x302aaab1
+ (void)enableWebThread;	// 0x3029ddfd
+ (void)garbageCollectNow;	// 0x302aa815
+ (void)initialize;	// 0x3029d7dd
+ (void)purgeInactiveFontData;	// 0x302aa9f1
+ (void)registerForMemoryNotifications;	// 0x3029e085
+ (void)registerURLSchemeAsLocal:(id)local;	// 0x3030ff29
+ (void)registerViewClass:(Class)aClass representationClass:(Class)aClass2 forMIMEType:(id)mimetype;	// 0x302bb4c1
+ (void)releaseFastMallocMemory;	// 0x302aab79
+ (void)setMIMETypesShownAsHTML:(id)html;	// 0x30310009
+ (id)sharedWebInspectorServer;	// 0x302aa385
+ (BOOL)shouldIncludeInWebKitStatistics;	// 0x302a3685
+ (void)willEnterBackgroundWithCompletionHandler:(id)completionHandler;	// 0x302aa7c9
- (id)initSimpleHTMLDocumentWithStyle:(id)style frame:(CGRect)frame preferences:(id)preferences groupName:(id)name;	// 0x302c6f45
- (id)initWithFrame:(CGRect)frame;	// 0x302a09ad
- (id)initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3;	// 0x302a09d9
// converted property getter: - (id)UIDelegate;	// 0x302b00dd
- (id)_UIDelegateForSelector:(SEL)selector;	// 0x302b23b5
- (id)_UIDelegateForwarder;	// 0x30312221
- (id)_UIKitDelegate;	// 0x3029d481
- (id)_UIKitDelegateForwarder;	// 0x302a8be9
- (void)_addObject:(id)object forIdentifier:(unsigned long)identifier;	// 0x302b0959
- (void)_addToAllWebViewsSet;	// 0x302a531d
- (BOOL)_allowsMessaging;	// 0x302bf801
- (void)_attachScriptDebuggerToAllFrames;	// 0x30315fad
- (BOOL)_becomingFirstResponderFromOutside;	// 0x3030fd71
- (void)_cacheFrameLoadDelegateImplementations;	// 0x302a9319
- (void)_cacheHistoryDelegateImplementations;	// 0x30315b51
- (void)_cacheResourceLoadDelegateImplementations;	// 0x302a99b1
- (void)_cacheScriptDebugDelegateImplementations;	// 0x303158e5
- (BOOL)_canResetZoom:(BOOL)zoom;	// 0x3031119d
- (BOOL)_canShowMIMEType:(id)type;	// 0x302b458d
- (BOOL)_canZoomIn:(BOOL)anIn;	// 0x303113d1
- (BOOL)_canZoomOut:(BOOL)anOut;	// 0x30311479
- (BOOL)_catchesDelegateExceptions;	// 0x3030fa41
- (void)_clearBackForwardCache;	// 0x30314ef5
- (void)_clearDelegates;	// 0x30312429
- (void)_clearLayerSyncLoopObserver;	// 0x302bef81
- (void)_clearMainFrameName;	// 0x303168b9
- (void)_close;	// 0x30314b5d
- (void)_closePluginDatabases;	// 0x30311e75
- (void)_closeWindow;	// 0x30312311
- (void)_closeWithFastTeardown;	// 0x30311ec1
- (void)_closingEventHandling;	// 0x3031a319
- (void)_commonInitializationWithFrameName:(id)frameName groupName:(id)name usesDocumentViews:(BOOL)views;	// 0x302a0bf9
- (OpaqueJSValue *)_computedStyleIncludingVisitedInfo:(OpaqueJSContext *)info forElement:(OpaqueJSValue *)element;	// 0x303199e9
- (BOOL)_continuousCheckingAllowed;	// 0x30313fed
- (BOOL)_cookieEnabled;	// 0x3030f99d
- (void)_destroyAllPlugIns;	// 0x30315df1
- (void)_detachScriptDebuggerFromAllFrames;	// 0x30315ff1
- (id)_deviceOrientationProvider;	// 0x3030fdd5
- (void)_didCommitLoadForFrame:(id)frame;	// 0x302b6f71
- (void)_didFinishScrollingOrZooming;	// 0x302c6d5d
- (void)_dispatchPendingLoadRequests;	// 0x30314281
- (void)_dispatchTileDidDraw:(id)_dispatchTile;	// 0x302b3581
- (void)_dispatchUnloadEvent;	// 0x3031494d
- (id)_displayURL;	// 0x302b04f1
- (void)_documentScaleChanged;	// 0x302a8a59
- (id)_downloadURL:(id)url;	// 0x30311f0d
- (id)_editingDelegateForwarder;	// 0x302c8401
- (id)_elementAtWindowPoint:(CGPoint)windowPoint;	// 0x303109b1
- (void)_executeCoreCommandByName:(id)name value:(id)value;	// 0x3031663d
- (CGSize)_fixedLayoutSize;	// 0x3030f9f9
- (id)_fixedPositionContent;	// 0x302b1f09
- (id)_focusedFrame;	// 0x3029d515
- (id)_formDelegate;	// 0x3030f8b5
- (id)_formDelegateForSelector:(SEL)selector;	// 0x30312169
- (id)_formDelegateForwarder;	// 0x30312071
- (id)_frameForCurrentSelection;	// 0x30312f99
- (id)_frameLoadDelegateForwarder;	// 0x302b0339
- (id)_frameViewAtWindowPoint:(CGPoint)windowPoint;	// 0x30313f09
- (void)_geolocationDidChangePosition:(id)_geolocation;	// 0x3030fe41
- (void)_geolocationDidFailWithError:(id)_geolocation;	// 0x3030fe45
- (id)_geolocationProvider;	// 0x3030fe1d
- (id)_globalHistoryItem;	// 0x30316235
- (BOOL)_inFastImageScalingMode;	// 0x30315e35
- (BOOL)_inViewSourceMode;	// 0x3031254d
- (BOOL)_includesFlattenedCompositingLayersWhenDrawingToBitmap;	// 0x3030fb45
- (id)_initWithArguments:(id)arguments;	// 0x30311ba9
- (id)_initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3 usesDocumentViews:(BOOL)views;	// 0x302a0a0d
- (void)_injectSolarWalkQuirksScript;	// 0x30314295
- (void)_insertNewlineInQuotedContent;	// 0x30313e45
- (BOOL)_isClosed;	// 0x3030f869
- (BOOL)_isClosing;	// 0x302c8795
- (BOOL)_isLoading;	// 0x30313ea5
- (BOOL)_isMIMETypeRegisteredAsPlugin:(id)plugin;	// 0x30311c65
- (BOOL)_isPerformingProgrammaticFocus;	// 0x302c8331
- (BOOL)_isProcessingUserGesture;	// 0x30315619
- (BOOL)_isSoftwareRenderable;	// 0x30316939
- (BOOL)_isStopping;	// 0x302bfe31
- (BOOL)_isUsingAcceleratedCompositing;	// 0x30316035
- (int)_keyboardUIMode;	// 0x30314191
- (void)_loadBackForwardListFromOtherView:(id)otherView;	// 0x303156cd
- (BOOL)_locked_plugInsAreRunningInFrame:(id)frame;	// 0x30312575
- (void)_locked_recursivelyPerformPlugInSelector:(SEL)selector inFrame:(id)frame;	// 0x302c15b5
- (Frame *)_mainCoreFrame;	// 0x3029d4e9
- (id)_mainFrameOverrideEncoding;	// 0x30310c91
- (void)_mouseDidMoveOverElement:(id)_mouse modifierFlags:(unsigned)flags;	// 0x302c33cd
- (BOOL)_mustDrawUnionedRect:(CGRect)rect singleRects:(const CGRect *)rects count:(int)count;	// 0x3030f7cd
- (BOOL)_needsOneShotDrawingSynchronization;	// 0x3030fd91
- (BOOL)_needsPreHTML5ParserQuirks;	// 0x302a7509
- (BOOL)_needsUnrestrictedGetMatchedCSSRules;	// 0x302a75a1
- (OpaqueJSValue *)_nodesFromRect:(OpaqueJSContext *)rect forDocument:(OpaqueJSValue *)document x:(int)x y:(int)y top:(unsigned)top right:(unsigned)right bottom:(unsigned)bottom left:(unsigned)left ignoreClipping:(BOOL)clipping;	// 0x30319cf5
- (id)_objectForIdentifier:(unsigned long)identifier;	// 0x302b2ab9
- (id)_openNewWindowWithRequest:(id)request;	// 0x3031563d
- (void)_overflowScrollPositionChangedTo:(CGPoint)to forNode:(id)node;	// 0x303161e1
- (void)_performResponderOperation:(SEL)operation with:(id)with;	// 0x302cc5e9
- (id)_pluginForExtension:(id)extension;	// 0x30311cdd
- (id)_pluginForMIMEType:(id)mimetype;	// 0x30311d4d
- (BOOL)_pluginsAreRunning;	// 0x30315dbd
- (id)_policyDelegateForwarder;	// 0x302af80d
- (void)_popPerformingProgrammaticFocus;	// 0x3030f8f9
- (BOOL)_postsAcceleratedCompositingNotifications;	// 0x3030faa5
- (void)_preferencesChanged:(id)changed;	// 0x302a5465
- (void)_preferencesChangedNotification:(id)notification;	// 0x302aa301
- (void)_pushPerformingProgrammaticFocus;	// 0x3030f8d5
- (float)_realZoomMultiplier;	// 0x302a5249
- (BOOL)_realZoomMultiplierIsTextOnly;	// 0x302a5269
- (void)_removeFromAllWebViewsSet;	// 0x3030fee1
- (void)_removeObjectForIdentifier:(unsigned long)identifier;	// 0x302b812d
- (void)_replaceSelectionWithNode:(id)node matchStyle:(BOOL)style;	// 0x30313e6d
- (void)_resetZoom:(id)zoom isTextOnly:(BOOL)only;	// 0x303110dd
- (id)_resourceLoadDelegateForwarder;	// 0x302b2b91
- (id)_responderForResponderOperations;	// 0x302cc655
- (void)_restorePlugInsFromCache;	// 0x30315f61
- (void)_retrieveKeyboardUIModeFromPreferences:(id)preferences;	// 0x30319999
- (void)_scaleWebView:(float)view atOrigin:(CGPoint)origin;	// 0x303169f5
- (void)_scheduleCompositingLayerSync;	// 0x302bea7d
- (id)_selectedOrMainFrame;	// 0x30314239
- (void)_selectionChanged;	// 0x302c86b5
- (BOOL)_selectionIsAll;	// 0x3031996d
- (BOOL)_selectionIsCaret;	// 0x30315391
- (void)_setAllowsMessaging:(BOOL)messaging;	// 0x302a813d
- (void)_setCatchesDelegateExceptions:(BOOL)exceptions;	// 0x3030fa21
- (void)_setCookieEnabled:(BOOL)enabled;	// 0x3030f9c9
- (void)_setCustomFixedPositionLayoutRect:(CGRect)rect;	// 0x302a8aa5
- (void)_setCustomHTMLTokenizerChunkSize:(int)size;	// 0x30316889
- (void)_setCustomHTMLTokenizerTimeDelay:(double)delay;	// 0x3031684d
- (void)_setDeviceOrientationProvider:(id)provider;	// 0x3030fdb1
- (void)_setFixedLayoutSize:(CGSize)size;	// 0x302a8f7d
- (void)_setFontFallbackPrefersPictographs:(BOOL)pictographs;	// 0x302a9fb1
- (void)_setFormDelegate:(id)delegate;	// 0x302a80b5
- (void)_setGeolocationProvider:(id)provider;	// 0x3030fdf9
- (void)_setGlobalHistoryItem:(HistoryItem *)item;	// 0x302b65f9
- (void)_setInViewSourceMode:(BOOL)viewSourceMode;	// 0x30312521
- (void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(BOOL)bitmap;	// 0x3030fb25
- (void)_setJavaScriptURLsAreAllowed:(BOOL)allowed;	// 0x3031690d
- (BOOL)_setMediaLayer:(id)layer forPluginView:(id)pluginView;	// 0x302be501
- (void)_setMinimumTimerInterval:(double)interval;	// 0x30316a69
- (void)_setMouseDownEvent:(id)event;	// 0x3031a31d
- (void)_setNeedsOneShotDrawingSynchronization:(BOOL)synchronization;	// 0x302becc9
- (void)_setNeedsUnrestrictedGetMatchedCSSRules:(BOOL)rules;	// 0x3030fe49
- (void)_setNetworkStateIsOnline:(BOOL)online;	// 0x302aa59d
- (void)_setPostsAcceleratedCompositingNotifications:(BOOL)notifications;	// 0x3030fac5
- (void)_setResourceLoadSchedulerSuspended:(BOOL)suspended;	// 0x303155fd
- (void)_setToolTip:(id)tip;	// 0x302c363d
- (void)_setUIKitDelegate:(id)delegate;	// 0x302a7795
- (void)_setUseFastImageScalingMode:(BOOL)mode;	// 0x30315e65
- (void)_setUseFixedLayout:(BOOL)layout;	// 0x30316195
- (void)_setWantsTelephoneNumberParsing:(BOOL)parsing;	// 0x302a8179
- (void)_setWebGLEnabled:(BOOL)enabled;	// 0x302aa491
- (void)_setZoomMultiplier:(float)multiplier isTextOnly:(BOOL)only;	// 0x302a52a1
- (BOOL)_shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x302cce19
- (void)_startAllPlugIns;	// 0x30315ec9
- (void)_stopAllPlugIns;	// 0x30315f15
- (void)_stopAllPlugInsForPageCache;	// 0x302c1569
- (void)_stopAutoscrollTimer;	// 0x3031a539
- (BOOL)_syncCompositingChanges;	// 0x302bef25
- (id)_touchEventRegions;	// 0x302c6581
- (void)_updateActiveState;	// 0x302a8055
- (BOOL)_useFixedLayout;	// 0x30316a3d
- (BOOL)_usesDocumentViews;	// 0x302a477d
- (id)_videoProxyPluginForMIMEType:(id)mimetype;	// 0x302bdf2d
- (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype;	// 0x30311dbd
- (float)_viewScaleFactor;	// 0x30312725
- (void)_viewWillDrawInternal;	// 0x302bef51
- (BOOL)_wantsTelephoneNumberParsing;	// 0x3030fe89
- (BOOL)_webGLEnabled;	// 0x3030feb5
- (id)_webMailDelegate;	// 0x302b3685
- (id)_webcore_effectiveFirstResponder;	// 0x30310805
- (void)_willStartScrollingOrZooming;	// 0x302c6c0d
- (void)_zoomIn:(id)anIn isTextOnly:(BOOL)only;	// 0x30311239
- (float)_zoomMultiplier:(BOOL)multiplier;	// 0x30311521
- (void)_zoomOut:(id)anOut isTextOnly:(BOOL)only;	// 0x30311305
- (BOOL)acceptsFirstResponder;	// 0x30310905
- (void)addCaretChangeListener:(id)listener;	// 0x3031233d
- (void)addVisitedLinks:(id)links;	// 0x30319155
- (void)alignCenter:(id)center;	// 0x30313431
- (void)alignJustified:(id)justified;	// 0x30313445
- (void)alignLeft:(id)left;	// 0x30313459
- (void)alignRight:(id)right;	// 0x3031346d
// converted property getter: - (BOOL)allowsRemoteInspection;	// 0x3030f895
// converted property getter: - (BOOL)allowsUndo;	// 0x3030fca1
// converted property getter: - (id)applicationNameForUserAgent;	// 0x302cbb15
- (void)applyStyle:(id)style;	// 0x303197dd
- (BOOL)areMemoryCacheDelegateCallsEnabled;	// 0x3030fa81
- (id)backForwardList;	// 0x302a81b5
// converted property getter: - (CGColorRef)backgroundColor;	// 0x302a4c61
- (BOOL)becomeFirstResponder;	// 0x3031088d
- (BOOL)canBeRemotelyInspected;	// 0x3031201d
- (BOOL)canGoBack;	// 0x302b73d9
- (BOOL)canGoForward;	// 0x302b741d
- (BOOL)canMakeTextLarger;	// 0x30312d51
- (BOOL)canMakeTextSmaller;	// 0x30312c91
- (BOOL)canMakeTextStandardSize;	// 0x30312e11
- (BOOL)canMarkAllTextMatches;	// 0x30318ce1
- (BOOL)canResetPageZoom;	// 0x30313191
- (BOOL)canZoomPageIn;	// 0x30313139
- (BOOL)canZoomPageOut;	// 0x30313165
- (void)capitalizeWord:(id)word;	// 0x30313481
// converted property getter: - (id)caretChangeListener;	// 0x3030f93d
- (id)caretChangeListeners;	// 0x3030f97d
- (void)caretChanged;	// 0x30315cc1
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x30313495
- (void)changeAttributes:(id)attributes;	// 0x303134a9
- (void)changeBaseWritingDirection:(id)direction;	// 0x303134bd
- (void)changeBaseWritingDirectionToLTR:(id)ltr;	// 0x303134d1
- (void)changeBaseWritingDirectionToRTL:(id)rtl;	// 0x303134e5
- (void)changeColor:(id)color;	// 0x303134f9
- (void)changeDocumentBackgroundColor:(id)color;	// 0x3031350d
- (void)changeFont:(id)font;	// 0x30313521
- (void)changeSpelling:(id)spelling;	// 0x30313535
- (void)checkSpelling:(id)spelling;	// 0x30313549
- (void)clearText:(id)text;	// 0x30313df5
- (void)close;	// 0x30311a81
- (void)complete:(id)complete;	// 0x3031355d
- (id)computedStyleForElement:(id)element pseudoElement:(id)element2;	// 0x303131bd
- (void)copy:(id)copy;	// 0x30313571
- (void)copyFont:(id)font;	// 0x30313585
- (unsigned)countMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x30312789
- (unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x302cd609
- (unsigned)countMatchesForText:(id)text options:(unsigned)options highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x302cd5d9
- (BOOL)cssAnimationsSuspended;	// 0x3030fb71
// converted property getter: - (id)currentNodeHighlight;	// 0x302a8a85
// converted property getter: - (id)customTextEncodingName;	// 0x30310c81
// converted property getter: - (id)customUserAgent;	// 0x30310f25
- (void)cut:(id)cut;	// 0x30313599
- (void)dealloc;	// 0x30311aed
// converted property getter: - (BOOL)defersCallbacks;	// 0x302be8e9
- (void)delete:(id)aDelete;	// 0x303135ad
- (void)deleteBackward:(id)backward;	// 0x303135c1
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x303135d5
- (void)deleteForward:(id)forward;	// 0x303135e9
- (void)deleteSelection;	// 0x30319775
- (void)deleteToBeginningOfLine:(id)line;	// 0x303135fd
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x30313611
- (void)deleteToEndOfLine:(id)line;	// 0x30313625
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x30313639
- (void)deleteToMark:(id)mark;	// 0x3031364d
- (void)deleteWordBackward:(id)backward;	// 0x30313661
- (void)deleteWordForward:(id)forward;	// 0x30313675
- (id)documentViewAtWindowPoint:(CGPoint)windowPoint;	// 0x30310a95
// converted property getter: - (id)downloadDelegate;	// 0x302a3ce1
- (void)drawRect:(CGRect)rect;	// 0x302b18a1
- (void)drawSingleRect:(CGRect)rect;	// 0x30314651
// converted property getter: - (BOOL)drawsBackground;	// 0x302a4c35
- (id)editableDOMRangeForPoint:(CGPoint)point;	// 0x30319501
// converted property getter: - (id)editingDelegate;	// 0x3030fd35
- (id)elementAtPoint:(CGPoint)point;	// 0x30310961
- (double)estimatedProgress;	// 0x302b7b59
- (void)finalize;	// 0x30311aad
- (BOOL)findString:(id)string options:(unsigned)options;	// 0x30318ac9
// converted property getter: - (id)frameLoadDelegate;	// 0x302b0409
- (BOOL)goBack;	// 0x303116f5
- (void)goBack:(id)back;	// 0x30312bcd
- (BOOL)goForward;	// 0x30311669
- (void)goForward:(id)forward;	// 0x30312bdd
- (BOOL)goToBackForwardItem:(id)backForwardItem;	// 0x30311629
// converted property getter: - (id)groupName;	// 0x30310705
// converted property getter: - (id)historyDelegate;	// 0x302b50b1
// converted property getter: - (id)hostWindow;	// 0x3030fbf1
- (void)ignoreSpelling:(id)spelling;	// 0x30313689
- (void)indent:(id)indent;	// 0x3031369d
- (void)insertBacktab:(id)backtab;	// 0x303136b1
- (void)insertDictationPhrases:(id)phrases metadata:(id)metadata;	// 0x30319815
- (void)insertLineBreak:(id)aBreak;	// 0x303136c5
- (void)insertNewline:(id)newline;	// 0x303136d9
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x303136ed
- (void)insertParagraphSeparator:(id)separator;	// 0x30313701
- (void)insertTab:(id)tab;	// 0x30313715
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x30313729
- (void)insertText:(id)text;	// 0x302cc5d5
- (id)inspector;	// 0x30311fa9
// converted property getter: - (BOOL)interactiveFormValidationEnabled;	// 0x302a75a5
- (BOOL)isAutomaticDashSubstitutionEnabled;	// 0x3030fd5d
- (BOOL)isAutomaticLinkDetectionEnabled;	// 0x3030fd59
- (BOOL)isAutomaticQuoteSubstitutionEnabled;	// 0x3030fd55
- (BOOL)isAutomaticSpellingCorrectionEnabled;	// 0x3030fd65
- (BOOL)isAutomaticTextReplacementEnabled;	// 0x3030fd61
// converted property getter: - (BOOL)isContinuousSpellCheckingEnabled;	// 0x302c862d
// converted property getter: - (BOOL)isEditable;	// 0x302b8011
- (BOOL)isFlipped;	// 0x3030f839
- (BOOL)isLoading;	// 0x3031066d
// converted property getter: - (BOOL)isSelectTrailingWhitespaceEnabled;	// 0x3030fa61
- (void)lowercaseWord:(id)word;	// 0x3031373d
- (id)mainFrame;	// 0x302a8925
- (id)mainFrameDocument;	// 0x303104cd
- (id)mainFrameIconURL;	// 0x30310519
- (id)mainFrameTitle;	// 0x30310625
// converted property getter: - (id)mainFrameURL;	// 0x302b05cd
- (BOOL)maintainsInactiveSelection;	// 0x302cdc11
- (void)makeBaseWritingDirectionLeftToRight:(id)right;	// 0x30313751
- (void)makeBaseWritingDirectionRightToLeft:(id)left;	// 0x30313765
- (void)makeTextLarger:(id)larger;	// 0x30312dad
- (void)makeTextSmaller:(id)smaller;	// 0x30312ced
- (void)makeTextStandardSize:(id)size;	// 0x30312e6d
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x30313779
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x3031378d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x303137a1
- (unsigned)markAllMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit;	// 0x30312751
// converted property getter: - (id)mediaStyle;	// 0x302a5061
// converted property getter: - (float)mediaVolume;	// 0x3030fce1
- (void)mouseDown:(id)down;	// 0x3031a389
- (void)mouseUp:(id)up;	// 0x3031a5c1
- (void)moveBackward:(id)backward;	// 0x303137b5
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x303137c9
- (void)moveDown:(id)down;	// 0x303137dd
- (void)moveDownAndModifySelection:(id)selection;	// 0x303137f1
- (void)moveForward:(id)forward;	// 0x30313805
- (void)moveForwardAndModifySelection:(id)selection;	// 0x30313819
- (void)moveLeft:(id)left;	// 0x3031382d
- (void)moveLeftAndModifySelection:(id)selection;	// 0x30313841
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x30313855
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x30313869
- (void)moveRight:(id)right;	// 0x3031387d
- (void)moveRightAndModifySelection:(id)selection;	// 0x30313891
- (void)moveToBeginningOfDocument:(id)document;	// 0x303138a5
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x303138b9
- (void)moveToBeginningOfLine:(id)line;	// 0x303138cd
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x303138e1
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x303138f5
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x30313909
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x3031391d
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x30313931
- (void)moveToEndOfDocument:(id)document;	// 0x30313945
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x30313959
- (void)moveToEndOfLine:(id)line;	// 0x3031396d
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x30313981
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x30313995
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x303139a9
- (void)moveToEndOfSentence:(id)sentence;	// 0x303139bd
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x303139d1
- (void)moveToLeftEndOfLine:(id)line;	// 0x303139e5
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x303139f9
- (void)moveToRightEndOfLine:(id)line;	// 0x30313a0d
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x30313a21
- (void)moveUp:(id)up;	// 0x30313a35
- (void)moveUpAndModifySelection:(id)selection;	// 0x30313a49
- (void)moveWordBackward:(id)backward;	// 0x30313a5d
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x30313a71
- (void)moveWordForward:(id)forward;	// 0x30313a85
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x30313a99
- (void)moveWordLeft:(id)left;	// 0x30313aad
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x30313ac1
- (void)moveWordRight:(id)right;	// 0x30313ad5
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x30313ae9
- (void)orderFrontSubstitutionsPanel:(id)panel;	// 0x30313b11
- (void)outdent:(id)outdent;	// 0x30313afd
- (Page *)page;	// 0x302b85e5
- (void)pageDown:(id)down;	// 0x30313b25
- (void)pageDownAndModifySelection:(id)selection;	// 0x30313b39
// converted property getter: - (float)pageSizeMultiplier;	// 0x303130e9
- (void)pageUp:(id)up;	// 0x30313b4d
- (void)pageUpAndModifySelection:(id)selection;	// 0x30313b61
- (void)paste:(id)paste;	// 0x30313b75
- (void)pasteAsPlainText:(id)text;	// 0x30313b89
- (void)pasteAsRichText:(id)text;	// 0x30313b9d
- (void)pasteFont:(id)font;	// 0x30313bb1
- (void)performFindPanelAction:(id)action;	// 0x30313bc5
// converted property getter: - (id)policyDelegate;	// 0x3030fbd1
// converted property getter: - (id)preferences;	// 0x302a3031
// converted property getter: - (id)preferencesIdentifier;	// 0x30311781
- (id)previousValidKeyView;	// 0x3031028d
- (id)quickLookContentForURL:(id)url;	// 0x302aee35
- (id)rectsForTextMatches;	// 0x30318e61
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x302a7a09
- (void)reload:(id)reload;	// 0x302cdc55
- (void)reloadFromOrigin:(id)origin;	// 0x30312c69
- (void)removeAllCaretChangeListeners;	// 0x303123f9
- (void)removeCaretChangeListener:(id)listener;	// 0x303123c9
- (void)removeVisitedLink:(id)link;	// 0x303193f5
- (void)replaceSelectionWithArchive:(id)archive;	// 0x303133f1
- (void)replaceSelectionWithMarkupString:(id)markupString;	// 0x303133ad
- (void)replaceSelectionWithNode:(id)node;	// 0x30313341
- (void)replaceSelectionWithText:(id)text;	// 0x30313379
- (void)resetPageZoom:(id)zoom;	// 0x303131a9
// converted property getter: - (id)resourceLoadDelegate;	// 0x302a3cc1
// converted property getter: - (id)scriptDebugDelegate;	// 0x302b8441
- (void)scrollDOMRangeToVisible:(id)visible;	// 0x30313031
- (void)scrollDOMRangeToVisible:(id)visible withInset:(float)inset;	// 0x30313081
- (void)scrollLineDown:(id)down;	// 0x30313bd9
- (void)scrollLineUp:(id)up;	// 0x30313bed
- (void)scrollPageDown:(id)down;	// 0x30313c01
- (void)scrollPageUp:(id)up;	// 0x30313c15
- (void)scrollToBeginningOfDocument:(id)document;	// 0x30313c29
- (void)scrollToEndOfDocument:(id)document;	// 0x30313c3d
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x30310749
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x303127c5
- (void)selectAll:(id)all;	// 0x30313c51
- (void)selectLine:(id)line;	// 0x30313c65
- (void)selectParagraph:(id)paragraph;	// 0x30313c79
- (void)selectSentence:(id)sentence;	// 0x30313c8d
- (void)selectToMark:(id)mark;	// 0x30313ca1
- (void)selectWord:(id)word;	// 0x30313cb5
- (id)selectedDOMRange;	// 0x30316529
- (id)selectedFrame;	// 0x3029d4a1
- (int)selectionAffinity;	// 0x30315369
// converted property setter: - (void)setAllowsRemoteInspection:(BOOL)inspection;	// 0x302a9f91
// converted property setter: - (void)setAllowsUndo:(BOOL)undo;	// 0x3030fcc1
// converted property setter: - (void)setApplicationNameForUserAgent:(id)userAgent;	// 0x302a9fed
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x30316111
- (void)setCSSAnimationsSuspended:(BOOL)suspended;	// 0x30316999
// converted property setter: - (void)setCaretChangeListener:(id)listener;	// 0x3030f95d
// converted property setter: - (void)setContinuousSpellCheckingEnabled:(BOOL)enabled;	// 0x302c91dd
// converted property setter: - (void)setCurrentNodeHighlight:(id)highlight;	// 0x30310429
// converted property setter: - (void)setCustomTextEncodingName:(id)name;	// 0x30310cfd
// converted property setter: - (void)setCustomUserAgent:(id)agent;	// 0x30310f71
// converted property setter: - (void)setDefersCallbacks:(BOOL)callbacks;	// 0x302b06a5
// converted property setter: - (void)setDownloadDelegate:(id)delegate;	// 0x302a9f05
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x302c7b39
// converted property setter: - (void)setEditable:(BOOL)editable;	// 0x303196a9
// converted property setter: - (void)setEditingDelegate:(id)delegate;	// 0x302a7801
// converted property setter: - (void)setFrameLoadDelegate:(id)delegate;	// 0x302a9285
- (void)setFrameSize:(CGSize)size;	// 0x30314791
// converted property setter: - (void)setGroupName:(id)name;	// 0x302a5355
// converted property setter: - (void)setHistoryDelegate:(id)delegate;	// 0x30313001
// converted property setter: - (void)setHostWindow:(id)window;	// 0x30310abd
// converted property setter: - (void)setInteractiveFormValidationEnabled:(BOOL)enabled;	// 0x3030fae5
- (void)setMainFrameDocumentReady:(BOOL)ready;	// 0x302a3dbd
// converted property setter: - (void)setMainFrameURL:(id)url;	// 0x30310685
- (void)setMaintainsBackForwardList:(BOOL)list;	// 0x302a7755
- (void)setMark:(id)mark;	// 0x30313cc9
// converted property setter: - (void)setMediaStyle:(id)style;	// 0x30310ec1
// converted property setter: - (void)setMediaVolume:(float)volume;	// 0x30319125
- (void)setMemoryCacheDelegateCallsEnabled:(BOOL)enabled;	// 0x303168e1
- (void)setNextKeyView:(id)view;	// 0x30310775
// converted property setter: - (void)setPageSizeMultiplier:(float)multiplier;	// 0x303130d5
// converted property setter: - (void)setPolicyDelegate:(id)delegate;	// 0x302a98b1
// converted property setter: - (void)setPreferences:(id)preferences;	// 0x30311869
// converted property setter: - (void)setPreferencesIdentifier:(id)identifier;	// 0x303117a9
// converted property setter: - (void)setResourceLoadDelegate:(id)delegate;	// 0x302a991d
// converted property setter: - (void)setScriptDebugDelegate:(id)delegate;	// 0x30312fa9
// converted property setter: - (void)setSelectTrailingWhitespaceEnabled:(BOOL)enabled;	// 0x303126e5
- (void)setSelectedDOMRange:(id)range affinity:(int)affinity;	// 0x30319645
// converted property setter: - (void)setShouldCloseWithWindow:(BOOL)closeWithWindow;	// 0x3030fb91
// converted property setter: - (void)setShouldUpdateWhileOffscreen:(BOOL)updateWhileOffscreen;	// 0x30310479
// converted property setter: - (void)setSmartInsertDeleteEnabled:(BOOL)enabled;	// 0x30313259
// converted property setter: - (void)setTabKeyCyclesThroughElements:(BOOL)elements;	// 0x3030fc15
// converted property setter: - (void)setTextSizeMultiplier:(float)multiplier;	// 0x303115c5
// converted property setter: - (void)setTypingStyle:(id)style;	// 0x30313201
// converted property setter: - (void)setUIDelegate:(id)delegate;	// 0x302a9f25
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x3031267d
// converted property setter: - (void)setValidationMessageTimerMagnification:(int)magnification;	// 0x3030fb05
- (void)setWebMailDelegate:(id)delegate;	// 0x3030f91d
- (BOOL)shouldClose;	// 0x30318e3d
// converted property getter: - (BOOL)shouldCloseWithWindow;	// 0x3030fbb1
// converted property getter: - (BOOL)shouldUpdateWhileOffscreen;	// 0x302a4ca1
- (void)showGuessPanel:(id)panel;	// 0x30313cdd
// converted property getter: - (BOOL)smartInsertDeleteEnabled;	// 0x3030fd15
- (void)startSpeaking:(id)speaking;	// 0x30313cf1
- (void)stopLoading:(id)loading;	// 0x302cddd9
- (void)stopLoadingAndClear;	// 0x303188cd
- (void)stopSpeaking:(id)speaking;	// 0x30313d05
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x30310c55
- (id)styleDeclarationWithText:(id)text;	// 0x303132f1
- (void)subscript:(id)subscript;	// 0x30313d19
- (void)superscript:(id)superscript;	// 0x30313d2d
- (BOOL)supportsTextEncoding;	// 0x30310e41
- (void)swapWithMark:(id)mark;	// 0x30313d41
// converted property getter: - (BOOL)tabKeyCyclesThroughElements;	// 0x3030fc6d
- (void)takeFindStringFromSelection:(id)selection;	// 0x30313d55
- (void)takeStringURLFrom:(id)from;	// 0x30312b39
- (id)textIteratorForRect:(CGRect)rect;	// 0x30316265
// converted property getter: - (float)textSizeMultiplier;	// 0x30311575
- (void)toggleBaseWritingDirection:(id)direction;	// 0x30313d69
- (void)toggleBold:(id)bold;	// 0x30313e09
- (void)toggleItalic:(id)italic;	// 0x30313e1d
- (void)toggleUnderline:(id)underline;	// 0x30313e31
- (void)transpose:(id)transpose;	// 0x30313d7d
// converted property getter: - (id)typingStyle;	// 0x30313231
- (void)underline:(id)underline;	// 0x30313d91
- (id)undoManager;	// 0x302cd37d
- (void)unmarkAllTextMatches;	// 0x30318d89
- (void)unscript:(id)unscript;	// 0x30313da5
- (void)updateLayoutIgnorePendingStyleSheets;	// 0x303148b1
- (void)uppercaseWord:(id)word;	// 0x30313db9
- (id)userAgentForURL:(id)url;	// 0x302af0dd
// converted property getter: - (BOOL)usesPageCache;	// 0x302a6f89
// converted property getter: - (int)validationMessageTimerMagnification;	// 0x302a75c5
- (void)viewDidMoveToWindow;	// 0x302a7f2d
- (void)viewWillDraw;	// 0x302b16f1
- (id)windowScriptObject;	// 0x302be399
- (void)yank:(id)yank;	// 0x30313dcd
- (void)yankAndSelect:(id)select;	// 0x30313de1
- (void)zoomPageIn:(id)anIn;	// 0x30313151
- (void)zoomPageOut:(id)anOut;	// 0x3031317d
@end
