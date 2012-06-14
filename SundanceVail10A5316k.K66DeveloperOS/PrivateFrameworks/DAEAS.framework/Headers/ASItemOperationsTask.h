/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {
	NSArray *_commands;	// 104 = 0x68
	int _numReplacedItems;	// 108 = 0x6c
	int _bodyTruncationBytes;	// 112 = 0x70
	int _mimeSupport;	// 116 = 0x74
	ASMailMessage *_streamingMailMessage;	// 120 = 0x78
}
@property(retain) NSArray *commands;	// G=0x3095ab91; S=0x3095aba1; converted property
@property(readonly, assign) int mimeSupport;	// G=0x3095ab49; converted property
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x3095b891; S=0x3095b8a1; converted property
- (id)init;	// 0x3095aaf9
- (int)_mimeSupportCode;	// 0x3095abe5
- (int)bodyType;	// 0x3095ab69
- (int)commandCode;	// 0x3095aa91
// converted property getter: - (id)commands;	// 0x3095ab91
- (void)dealloc;	// 0x3095aa95
- (void)finishWithError:(id)error;	// 0x3095b589
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x3095b179
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x3095af99
// converted property getter: - (int)mimeSupport;	// 0x3095ab49
- (BOOL)processContext:(id)context;	// 0x3095b18d
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x3095b10d
- (id)requestBody;	// 0x3095ac21
- (void)setBodyTruncationBytes:(int)bytes;	// 0x3095ab81
// converted property setter: - (void)setCommands:(id)commands;	// 0x3095aba1
- (void)setMIMESupport:(int)support;	// 0x3095ab59
// converted property setter: - (void)setStreamingMailMessage:(id)message;	// 0x3095b8a1
// converted property getter: - (id)streamingMailMessage;	// 0x3095b891
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x3095b809
@end
