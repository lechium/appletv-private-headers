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
	NSString *_messageServerID;	// 108 = 0x6c
	NSString *_attachmentName;	// 112 = 0x70
}
@property(readonly, retain) NSString *attachmentName;	// G=0x36ee1519; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x36ee1539
// converted property getter: - (id)attachmentName;	// 0x36ee1519
- (id)command;	// 0x36ee12c9
- (int)commandCode;	// 0x36ee1209
- (int)connectionActionForResponse:(id)response;	// 0x36ee1205
- (id)contentType;	// 0x36ee1339
- (void)dealloc;	// 0x36ee15b1
- (BOOL)expectsWBXML;	// 0x36ee1201
- (void)finishWithError:(id)error;	// 0x36ee1081
- (id)messageID;	// 0x36ee1529
- (id)parameterData;	// 0x36ee120d
- (BOOL)processContext:(id)context;	// 0x36ee133d
- (id)requestBody;	// 0x36ee11fd
- (BOOL)shouldLogIncomingData;	// 0x36ee1615
@end

