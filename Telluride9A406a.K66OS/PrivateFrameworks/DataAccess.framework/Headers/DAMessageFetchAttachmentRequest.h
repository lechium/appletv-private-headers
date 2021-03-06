/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {
	NSString *_messageID;	// 4 = 0x4
	NSString *_attachmentName;	// 8 = 0x8
}
@property(readonly, retain) NSString *attachmentName;	// G=0x36166ffd; converted property
@property(readonly, retain) NSString *messageID;	// G=0x36166fed; converted property
- (id)initWithAttachmentName:(id)attachmentName andMessageServerID:(id)anId;	// 0x36166d4d
// converted property getter: - (id)attachmentName;	// 0x36166ffd
- (void)dealloc;	// 0x36166f8d
- (id)description;	// 0x36166f15
- (unsigned)hash;	// 0x36166dc1
- (BOOL)isEqual:(id)equal;	// 0x36166e4d
// converted property getter: - (id)messageID;	// 0x36166fed
@end

