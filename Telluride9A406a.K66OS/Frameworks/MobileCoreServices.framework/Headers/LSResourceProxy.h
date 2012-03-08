/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSURL, NSDictionary, LSApplicationProxy;

@interface LSResourceProxy : NSObject {
@private
	NSString *_localizedName;	// 4 = 0x4
	NSString *_boundApplicationIdentifier;	// 8 = 0x8
	NSURL *_boundContainerURL;	// 12 = 0xc
	NSURL *_boundResourcesDirURL;	// 16 = 0x10
	NSDictionary *_boundIconsDictionary;	// 20 = 0x14
	NSString *_boundIconCacheKey;	// 24 = 0x18
	NSArray *_boundIconFileNames;	// 28 = 0x1c
	LSApplicationProxy *_typeOwner;	// 32 = 0x20
	BOOL _boundIconIsPrerendered;	// 36 = 0x24
	BOOL _boundIconIsBadge;	// 37 = 0x25
}
@property(retain) NSString *boundApplicationIdentifier;	// G=0x33982bfd; S=0x33983595; converted property
@property(retain) NSURL *boundContainerURL;	// G=0x33982c0d; S=0x3398354d; converted property
@property(retain) NSString *boundIconCacheKey;	// G=0x33982c3d; S=0x33983465; converted property
@property(retain) NSArray *boundIconFileNames;	// G=0x33982c4d; S=0x3398341d; converted property
@property(readonly, assign, nonatomic) BOOL boundIconIsBadge;	// G=0x33982c8d; 
@property(assign) BOOL boundIconIsPrerendered;	// G=0x33982c6d; S=0x33982c7d; converted property
@property(retain) NSDictionary *boundIconsDictionary;	// G=0x33982c2d; S=0x339834ad; converted property
@property(retain) id boundResourcesDirectoryURL;	// G=0x33982c1d; S=0x33983505; converted property
@property(readonly, assign, nonatomic) NSDictionary *iconsDictionary;	// G=0x339834f5; 
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x33982cb9; @synthesize=_localizedName
@property(retain) LSApplicationProxy *typeOwner;	// G=0x33982c5d; S=0x339833d5; converted property
- (id)_initWithLocalizedName:(id)localizedName;	// 0x339836fd
- (id)_initWithLocalizedName:(id)localizedName boundApplicationIdentifier:(id)identifier boundContainerURL:(id)url boundResourcesDirectoryURL:(id)url4 boundIconsDictionary:(id)dictionary boundIconCacheKey:(id)key boundIconFileNames:(id)names typeOwner:(id)owner boundIconIsPrerendered:(BOOL)prerendered boundIconIsBadge:(BOOL)badge;	// 0x33982d85
// converted property getter: - (id)boundApplicationIdentifier;	// 0x33982bfd
// converted property getter: - (id)boundContainerURL;	// 0x33982c0d
// converted property getter: - (id)boundIconCacheKey;	// 0x33982c3d
// converted property getter: - (id)boundIconFileNames;	// 0x33982c4d
// declared property getter: - (BOOL)boundIconIsBadge;	// 0x33982c8d
// converted property getter: - (BOOL)boundIconIsPrerendered;	// 0x33982c6d
// converted property getter: - (id)boundIconsDictionary;	// 0x33982c2d
// converted property getter: - (id)boundResourcesDirectoryURL;	// 0x33982c1d
- (void)dealloc;	// 0x33983625
- (id)iconDataForStyle:(id)style width:(int)width height:(int)height options:(unsigned)options;	// 0x33983209
- (id)iconDataForVariant:(int)variant;	// 0x33982ead
- (id)iconStyleDomain;	// 0x33982cad
// declared property getter: - (id)iconsDictionary;	// 0x339834f5
// declared property getter: - (id)localizedName;	// 0x33982cb9
// converted property setter: - (void)setBoundApplicationIdentifier:(id)identifier;	// 0x33983595
// converted property setter: - (void)setBoundContainerURL:(id)url;	// 0x3398354d
// converted property setter: - (void)setBoundIconCacheKey:(id)key;	// 0x33983465
// converted property setter: - (void)setBoundIconFileNames:(id)names;	// 0x3398341d
- (void)setBoundIconIsBadge:(BOOL)badge;	// 0x33982c9d
// converted property setter: - (void)setBoundIconIsPrerendered:(BOOL)prerendered;	// 0x33982c7d
// converted property setter: - (void)setBoundIconsDictionary:(id)dictionary;	// 0x339834ad
// converted property setter: - (void)setBoundResourcesDirectoryURL:(id)url;	// 0x33983505
- (void)setLocalizedName:(id)name;	// 0x339835dd
// converted property setter: - (void)setTypeOwner:(id)owner;	// 0x339833d5
// converted property getter: - (id)typeOwner;	// 0x33982c5d
@end

