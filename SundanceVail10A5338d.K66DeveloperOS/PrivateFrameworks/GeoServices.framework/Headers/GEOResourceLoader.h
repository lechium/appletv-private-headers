/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSString;
@protocol GEOResourceLoaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceLoader : NSObject {
	unsigned _tileGroupIdentifier;	// 4 = 0x4
	NSString *_uniqueTileGroupIdentifier;	// 8 = 0x8
	NSString *_directory;	// 12 = 0xc
	NSMutableArray *_resourcesToLoad;	// 16 = 0x10
	id _completionHandler;	// 20 = 0x14
	id _progressHandler;	// 24 = 0x18
	int _numberOfDownloadsInProgress;	// 28 = 0x1c
@private
	NSMutableArray *_loadedResources;	// 32 = 0x20
@protected
	BOOL _canceled;	// 36 = 0x24
	id<GEOResourceLoaderDelegate> _delegate;	// 40 = 0x28
}
@property(assign, nonatomic) id<GEOResourceLoaderDelegate> delegate;	// G=0x324a2a45; S=0x324a2a55; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *loadedResources;	// G=0x324a2a65; @synthesize=_loadedResources
@property(readonly, assign, nonatomic) unsigned tileGroupIdentifier;	// G=0x324a2a25; @synthesize=_tileGroupIdentifier
@property(readonly, assign, nonatomic) NSString *uniqueTileGroupIdentifier;	// G=0x324a2a35; @synthesize=_uniqueTileGroupIdentifier
- (id)initWithTileGroupIdentifier:(unsigned)tileGroupIdentifier uniqueIdentifier:(id)identifier targetDirectory:(id)directory;	// 0x324a1da1
- (void)_addNecessaryResourcesForType:(int)type;	// 0x324a1f2d
- (void)_cleanup;	// 0x324a1edd
- (void)_loadNextResource;	// 0x324a22d9
- (void)_writeResourceToDisk:(id)disk;	// 0x324a28f1
- (void)cancel;	// 0x324a2a05
- (void)dealloc;	// 0x324a1e29
// declared property getter: - (id)delegate;	// 0x324a2a45
// declared property getter: - (id)loadedResources;	// 0x324a2a65
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x324a2a55
- (void)startWithProgressHandler:(id)progressHandler completionHandler:(id)handler;	// 0x324a21ed
// declared property getter: - (unsigned)tileGroupIdentifier;	// 0x324a2a25
// declared property getter: - (id)uniqueTileGroupIdentifier;	// 0x324a2a35
@end
