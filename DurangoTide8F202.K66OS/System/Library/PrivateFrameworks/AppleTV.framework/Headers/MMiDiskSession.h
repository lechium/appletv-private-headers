/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MMiDiskSession : NSObject {
@private
	id _credentials;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_owner;	// 12 = 0xc
	NSString *_host;	// 16 = 0x10
	int _port;	// 20 = 0x14
	NSString *_scheme;	// 24 = 0x18
}
@property(readonly, retain) NSString *owner;	// G=0x339740b1; converted property
+ (id)_iDiskSessionWithCredentials:(id)credentials owner:(id)owner host:(id)host port:(int)port scheme:(id)scheme;	// 0x33974365
- (id)_iDiskPathForUri:(id)uri;	// 0x33973edd
- (id)_initWithCredentials:(id)credentials owner:(id)owner host:(id)host port:(int)port scheme:(id)scheme;	// 0x3397419d
- (void)_setDoCheckPreAuth:(BOOL)auth;	// 0x33973ed9
- (void)dealloc;	// 0x339740e1
- (id)getDataAtPath:(id)path withHeaders:(id)headers andQueryParameters:(id)parameters;	// 0x33973f71
// converted property getter: - (id)owner;	// 0x339740b1
- (void)setIsSynchronous:(BOOL)synchronous;	// 0x33973ed5
@end

