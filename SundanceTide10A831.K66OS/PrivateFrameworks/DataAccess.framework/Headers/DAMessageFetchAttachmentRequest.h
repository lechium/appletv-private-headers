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
@property(readonly, retain) NSString *attachmentName;	// G=0x3217782d; converted property
@property(readonly, retain) NSString *messageID;	// G=0x3217781d; converted property
- (id)initWithAttachmentName:(id)attachmentName andMessageServerID:(id)anId;	// 0x32177579
// converted property getter: - (id)attachmentName;	// 0x3217782d
- (void)dealloc;	// 0x321777b9
- (id)description;	// 0x32177741
- (unsigned)hash;	// 0x321775f1
- (BOOL)isEqual:(id)equal;	// 0x3217767d
// converted property getter: - (id)messageID;	// 0x3217781d
@end

