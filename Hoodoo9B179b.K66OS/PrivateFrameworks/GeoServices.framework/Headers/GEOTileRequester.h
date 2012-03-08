/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSThread, GEOTileKeyList, NSString;
@protocol GEOTileRequesterDelegate;

@interface GEOTileRequester : NSObject {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	id<GEOTileRequesterDelegate> _delegate;	// 8 = 0x8
	id _context;	// 12 = 0xc
	NSThread *_thread;	// 16 = 0x10
	NSString *_bundleIdentifier;	// 20 = 0x14
	NSString *_bundleVersion;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0x32ce5d99; S=0x32ce5da9; @synthesize=_bundleIdentifier
@property(retain, nonatomic) NSString *bundleVersion;	// G=0x32ce5dcd; S=0x32ce5ddd; @synthesize=_bundleVersion
@property(retain, nonatomic) id context;	// G=0x32ce5d65; S=0x32ce5d75; @synthesize=_context
@property(retain, nonatomic) id<GEOTileRequesterDelegate> delegate;	// G=0x32ce5ced; S=0x32ce5cfd; @synthesize=_delegate
@property(readonly, assign, nonatomic) GEOTileKeyList *keyList;	// G=0x32ce5d21; @synthesize=_keyList
@property(retain, nonatomic) NSThread *thread;	// G=0x32ce5d31; S=0x32ce5d41; @synthesize=_thread
+ (id)hostname;	// 0x32ce5bd5
+ (unsigned char)tileProviderIdentifier;	// 0x32ce5bd1
- (id)initWithKeyList:(id)keyList;	// 0x32ce5be1
// declared property getter: - (id)bundleIdentifier;	// 0x32ce5d99
// declared property getter: - (id)bundleVersion;	// 0x32ce5dcd
- (void)cancel;	// 0x32ce5c39
// declared property getter: - (id)context;	// 0x32ce5d65
- (void)dealloc;	// 0x32ce5c41
// declared property getter: - (id)delegate;	// 0x32ce5ced
// declared property getter: - (id)keyList;	// 0x32ce5d21
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x32ce5da9
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x32ce5ddd
// declared property setter: - (void)setContext:(id)context;	// 0x32ce5d75
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32ce5cfd
// declared property setter: - (void)setThread:(id)thread;	// 0x32ce5d41
- (void)start;	// 0x32ce5c35
// declared property getter: - (id)thread;	// 0x32ce5d31
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x32ce5c3d
@end

