/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImage, NSMutableData, NSString, NSURLConnection, NSArray, NSURL;

@interface UIWebClip : NSObject {
	NSString *identifier;	// 4 = 0x4
	NSURL *pageURL;	// 8 = 0x8
	NSArray *icons;	// 12 = 0xc
	unsigned currentIconIndex;	// 16 = 0x10
	NSURL *startupImageURL;	// 20 = 0x14
	NSURL *startupLandscapeImageURL;	// 24 = 0x18
	NSString *title;	// 28 = 0x1c
	float scale;	// 32 = 0x20
	CGPoint scrollPoint;	// 36 = 0x24
	BOOL fullScreen;	// 44 = 0x2c
	BOOL classicMode;	// 45 = 0x2d
	BOOL removalDisallowed;	// 46 = 0x2e
	BOOL iconIsScreenShotBased;	// 47 = 0x2f
	BOOL iconIsPrecomposed;	// 48 = 0x30
	BOOL iconIsPrerendered;	// 49 = 0x31
	int statusBarStyle;	// 52 = 0x34
	UIImage *iconImage;	// 56 = 0x38
	UIImage *startupImage;	// 60 = 0x3c
	UIImage *startupLandscapeImage;	// 64 = 0x40
	id delegate;	// 68 = 0x44
@private
	NSMutableData *_customIconData;	// 72 = 0x48
	NSURLConnection *_iconConnection;	// 76 = 0x4c
	NSMutableData *_customStartupImageData;	// 80 = 0x50
	NSURLConnection *_startupImageConnection;	// 84 = 0x54
	NSMutableData *_customStartupLandscapeImageData;	// 88 = 0x58
	NSURLConnection *_startupLandscapeImageConnection;	// 92 = 0x5c
}
@property(assign) BOOL classicMode;	// G=0x33148fcd; S=0x33148fdd; @synthesize
@property(assign) id delegate;	// G=0x331490a5; S=0x331490b5; @synthesize
@property(assign) BOOL fullScreen;	// G=0x33148fad; S=0x33148fbd; @synthesize
@property(readonly, assign, nonatomic) UIImage *iconImage;	// G=0x33146c5d; 
@property(readonly, assign) NSString *iconImagePath;	// G=0x33146b51; 
@property(readonly, assign) BOOL iconIsPrecomposed;	// G=0x3314901d; @synthesize
@property(readonly, assign) BOOL iconIsPrerendered;	// G=0x3314902d; @synthesize
@property(readonly, assign) BOOL iconIsScreenShotBased;	// G=0x3314900d; @synthesize
@property(retain) NSArray *icons;	// G=0x33148e7d; S=0x33148e91; @synthesize
@property(copy) NSString *identifier;	// G=0x33148e0d; S=0x33148e21; @synthesize
@property(retain) NSURL *pageURL;	// G=0x33148e45; S=0x33148e59; @synthesize
@property(assign) BOOL removalDisallowed;	// G=0x33148fed; S=0x33148ffd; @synthesize
@property(assign) float scale;	// G=0x33148f5d; S=0x33148f6d; @synthesize
@property(assign) CGPoint scrollPoint;	// G=0x33148f7d; S=0x33148f99; @synthesize
@property(retain, nonatomic) UIImage *startupImage;	// G=0x33146d3d; S=0x3314905d; @synthesize
@property(retain) NSURL *startupImageURL;	// G=0x33148eb5; S=0x33148ec9; @synthesize
@property(retain, nonatomic) UIImage *startupLandscapeImage;	// G=0x33146d71; S=0x33149081; @synthesize
@property(retain) NSURL *startupLandscapeImageURL;	// G=0x33148eed; S=0x33148f01; @synthesize
@property(assign) int statusBarStyle;	// G=0x3314903d; S=0x3314904d; @synthesize
@property(copy) NSString *title;	// G=0x33148f25; S=0x33148f39; @synthesize
+ (id)_contentForMetaName:(id)metaName inWebDocumentView:(id)webDocumentView;	// 0x33147071
+ (id)pathForWebClipWithIdentifier:(id)identifier;	// 0x33148d3d
+ (id)urlForWebClipWithIdentifier:(id)identifier;	// 0x33148d85
+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)webDocumentView;	// 0x33147225
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)webDocumentView;	// 0x331471d9
+ (id)webClipIconsForWebDocumentView:(id)webDocumentView;	// 0x33147561
+ (int)webClipStatusBarStyleForWebDocumentView:(id)webDocumentView;	// 0x3314716d
+ (id)webClipWithIdentifier:(id)identifier;	// 0x33146ea5
+ (id)webClipWithURL:(id)url;	// 0x33004b95
+ (id)webClips;	// 0x33146eed
+ (id)webClipsDirectoryPath;	// 0x33148ccd
- (id)_bundleImageWithName:(id)name;	// 0x33146b15
- (id)_bundleResourceWithName:(id)name;	// 0x33146a91
- (id)_displayIdentifierString;	// 0x331474d5
- (id)_info;	// 0x33146359
- (id)_initWithIdentifier:(id)identifier;	// 0x331469b1
- (void)_readPropertiesFromBundle:(CFBundleRef)bundle;	// 0x33145cc1
- (void)_reloadProperties;	// 0x331462e5
- (void)_setIconImage:(id)image isPrecomposed:(BOOL)precomposed isScreenShotBased:(BOOL)based;	// 0x33146c91
- (BOOL)_writeImage:(id)image toDiskWithFileName:(id)fileName;	// 0x33146659
- (void)cancelMediaUpdate;	// 0x3314723d
// declared property getter: - (BOOL)classicMode;	// 0x33148fcd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3314882d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x331473b5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33148959
- (void)connectionDidFinishLoading:(id)connection;	// 0x331482b5
- (BOOL)createOnDisk;	// 0x33146899
- (void)dealloc;	// 0x33146da5
// declared property getter: - (id)delegate;	// 0x331490a5
// declared property getter: - (BOOL)fullScreen;	// 0x33148fad
- (id)generateIconImageForFormat:(int)format scale:(float)scale;	// 0x33146b6d
- (id)getStartupImage:(int)image;	// 0x33148de5
// declared property getter: - (id)iconImage;	// 0x33146c5d
// declared property getter: - (id)iconImagePath;	// 0x33146b51
// declared property getter: - (BOOL)iconIsPrecomposed;	// 0x3314901d
// declared property getter: - (BOOL)iconIsPrerendered;	// 0x3314902d
// declared property getter: - (BOOL)iconIsScreenShotBased;	// 0x3314900d
// declared property getter: - (id)icons;	// 0x33148e7d
// declared property getter: - (id)identifier;	// 0x33148e0d
// declared property getter: - (id)pageURL;	// 0x33148e45
// declared property getter: - (BOOL)removalDisallowed;	// 0x33148fed
- (BOOL)removeFromDisk;	// 0x33146949
- (void)requestCustomIconUpdate;	// 0x331489cd
- (void)requestCustomLandscapeStartupImageUpdate;	// 0x33148bed
- (void)requestCustomPortraitStartupImageUpdate;	// 0x33148b0d
- (void)requestIconUpdateInSpringBoard;	// 0x33147521
// declared property getter: - (float)scale;	// 0x33148f5d
// declared property getter: - (CGPoint)scrollPoint;	// 0x33148f7d
// declared property setter: - (void)setClassicMode:(BOOL)mode;	// 0x33148fdd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x331490b5
// declared property setter: - (void)setFullScreen:(BOOL)screen;	// 0x33148fbd
- (void)setIconImage:(id)image isPrecomposed:(BOOL)precomposed;	// 0x33146cf9
- (void)setIconImageFromScreenshot:(id)screenshot;	// 0x33146d1d
// declared property setter: - (void)setIcons:(id)icons;	// 0x33148e91
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x33148e21
// declared property setter: - (void)setPageURL:(id)url;	// 0x33148e59
// declared property setter: - (void)setRemovalDisallowed:(BOOL)disallowed;	// 0x33148ffd
// declared property setter: - (void)setScale:(float)scale;	// 0x33148f6d
// declared property setter: - (void)setScrollPoint:(CGPoint)point;	// 0x33148f99
// declared property setter: - (void)setStartupImage:(id)image;	// 0x3314905d
// declared property setter: - (void)setStartupImageURL:(id)url;	// 0x33148ec9
// declared property setter: - (void)setStartupLandscapeImage:(id)image;	// 0x33149081
// declared property setter: - (void)setStartupLandscapeImageURL:(id)url;	// 0x33148f01
// declared property setter: - (void)setStatusBarStyle:(int)style;	// 0x3314904d
// declared property setter: - (void)setTitle:(id)title;	// 0x33148f39
// declared property getter: - (id)startupImage;	// 0x33146d3d
// declared property getter: - (id)startupImageURL;	// 0x33148eb5
// declared property getter: - (id)startupLandscapeImage;	// 0x33146d71
// declared property getter: - (id)startupLandscapeImageURL;	// 0x33148eed
// declared property getter: - (int)statusBarStyle;	// 0x3314903d
- (void)stopLoadingCustomIcon;	// 0x3314727d
- (void)stopLoadingStartupImage;	// 0x331472e5
- (void)stopLoadingStartupLandscapeImage;	// 0x3314734d
// declared property getter: - (id)title;	// 0x33148f25
- (BOOL)tryLoadingNextCustomIcon;	// 0x33148259
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)webDocumentView;	// 0x33147c19
- (BOOL)updateOnDisk;	// 0x3314670d
@end

