/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"
#import "_GEORegionalResourcesRequestDelegate.h"

@class NSMutableArray, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesLoader : NSObject <_GEORegionalResourcesRequestDelegate> {
	NSString *_targetDirectory;	// 4 = 0x4
	NSMutableSet *_resourceIdentifiersToLoad;	// 8 = 0x8
	NSMutableArray *_requests;	// 12 = 0xc
	BOOL _started;	// 16 = 0x10
	BOOL _allowsNetwork;	// 17 = 0x11
	id _keyProgressHandler;	// 20 = 0x14
	id _listProgressHandler;	// 24 = 0x18
	id _completionHandler;	// 28 = 0x1c
	id _errorHandler;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL allowsNetwork;	// G=0x34581a35; S=0x34581a45; @synthesize=_allowsNetwork
@property(readonly, assign, nonatomic) NSSet *tileKeyLists;	// G=0x34580c75; 
- (id)initWithTargetDirectory:(id)targetDirectory;	// 0x34580b45
- (void)_handleCompletedResource:(id)resource;	// 0x34580fb1
- (void)_loadNextResource;	// 0x345810a9
- (id)_pathForResourceIdentifier:(id)resourceIdentifier;	// 0x34580f75
- (void)addResourceIdentifiers:(id)identifiers forTileKeys:(id)tileKeys fromList:(id)list;	// 0x34580d8d
// declared property getter: - (BOOL)allowsNetwork;	// 0x34581a35
- (void)cancelForTileKeys:(id)tileKeys;	// 0x3458172d
- (void)dealloc;	// 0x34580bad
- (void)request:(id)request didFinishLoadForTileKey:(GEOTileKey)tileKey resourceIdentifiers:(id)identifiers;	// 0x34581971
- (void)requestDidFinish:(id)request;	// 0x345819c9
// declared property setter: - (void)setAllowsNetwork:(BOOL)network;	// 0x34581a45
- (void)startWithKeyProgressHandler:(id)keyProgressHandler listProgressHandler:(id)handler completionHandler:(id)handler3 errorHandler:(id)handler4;	// 0x34581671
// declared property getter: - (id)tileKeyLists;	// 0x34580c75
@end

