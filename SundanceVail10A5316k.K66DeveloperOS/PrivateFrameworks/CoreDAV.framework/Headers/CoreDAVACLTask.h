/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask {
	NSArray *_accessControlEntities;	// 132 = 0x84
}
@property(retain) NSArray *accessControlEntities;	// G=0x35f70571; S=0x35f70585; @synthesize=_accessControlEntities
@property(assign, nonatomic) id<CoreDAVACLTaskDelegate> delegate;	// @dynamic
- (id)initWithAccessControlEntities:(id)accessControlEntities atURL:(id)url;	// 0x35f70101
- (id)initWithURL:(id)url;	// 0x35f700fd
// declared property getter: - (id)accessControlEntities;	// 0x35f70571
- (void)dealloc;	// 0x35f701ad
- (id)description;	// 0x35f701f9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35f70451
- (id)httpMethod;	// 0x35f702d1
- (id)requestBody;	// 0x35f702dd
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x35f70585
@end

