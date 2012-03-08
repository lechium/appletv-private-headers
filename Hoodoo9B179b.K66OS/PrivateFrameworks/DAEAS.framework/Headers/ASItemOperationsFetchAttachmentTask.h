/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"
#import "ASFetchAttachmentTaskProtocol.h"

@class NSString;

@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 104 = 0x68
	NSString *_attachmentName;	// 108 = 0x6c
}
@property(readonly, retain) NSString *attachmentName;	// G=0x31e10621; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x31e10641
// converted property getter: - (id)attachmentName;	// 0x31e10621
- (int)commandCode;	// 0x31e10159
- (void)dealloc;	// 0x31e106b5
- (void)finishWithError:(id)error;	// 0x31e0fdf5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31e10145
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x31e1015d
- (id)messageID;	// 0x31e10631
- (BOOL)processContext:(id)context;	// 0x31e101ed
- (id)requestBody;	// 0x31e0ff9d
@end

