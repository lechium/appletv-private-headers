/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "NSNetServiceDelegate.h"
#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSString, NSArray;

@interface HSBrowser : NSObject <NSNetServiceDelegate> {
@private
	NSArray *_availableLibraries;	// 4 = 0x4
	NSString *_homeSharingGroupID;	// 8 = 0x8
	DNSServiceRef_tRef _dnsService;	// 12 = 0xc
	id _addLibraryHandler;	// 16 = 0x10
	id _removeLibraryHandler;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSArray *availableLibraries;	// G=0x308c6d51; 
@property(copy, nonatomic) NSString *homeSharingGroupID;	// G=0x308c73ed; S=0x308c7401; @synthesize=_homeSharingGroupID
- (void)_didFindService:(id)service moreComing:(BOOL)coming;	// 0x308c6d89
- (void)_didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x308c719d
// declared property getter: - (id)availableLibraries;	// 0x308c6d51
- (void)dealloc;	// 0x308c68a1
// declared property getter: - (id)homeSharingGroupID;	// 0x308c73ed
// declared property setter: - (void)setHomeSharingGroupID:(id)anId;	// 0x308c7401
- (void)startWithAddLibraryHandler:(id)addLibraryHandler removeLibraryHandler:(id)handler;	// 0x308c6919
- (void)stop;	// 0x308c6b71
@end

