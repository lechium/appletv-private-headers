/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFetchAttachmentTaskProtocol.h"
#import "ASTask.h"

@class NSString;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 104 = 0x68
	NSString *_attachmentName;	// 108 = 0x6c
}
@property(readonly, retain) NSString *attachmentName;	// G=0x30a26fe5; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x30a27005
// converted property getter: - (id)attachmentName;	// 0x30a26fe5
- (id)command;	// 0x30a26d99
- (int)commandCode;	// 0x30a26cd5
- (int)connectionActionForResponse:(id)response;	// 0x30a26cd1
- (id)contentType;	// 0x30a26e09
- (void)dealloc;	// 0x30a27079
- (BOOL)expectsWBXML;	// 0x30a26ccd
- (void)finishWithError:(id)error;	// 0x30a26b21
- (id)messageID;	// 0x30a26ff5
- (id)parameterData;	// 0x30a26cd9
- (BOOL)processContext:(id)context;	// 0x30a26e0d
- (id)requestBody;	// 0x30a26cc9
- (BOOL)shouldLogIncomingData;	// 0x30a270d9
@end

