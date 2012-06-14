/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASSendMailTask.h"

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {
	int _messageType;	// 112 = 0x70
	NSString *_originalMessageId;	// 116 = 0x74
	NSString *_originalFolderId;	// 120 = 0x78
	NSString *_originalLongId;	// 124 = 0x7c
	BOOL _retryWithoutReferences;	// 128 = 0x80
}
- (id)initWithMessage:(id)message messageID:(id)anId messageType:(int)type originalMessageID:(id)anId4 originalFolderID:(id)anId5 originalLongID:(id)anId6;	// 0x309a6809
- (id)command;	// 0x309a6d5d
- (int)commandCode;	// 0x309a6c95
- (id)contentType;	// 0x309a6dc9
- (void)dealloc;	// 0x309a68a9
- (BOOL)expectsWBXML;	// 0x309a6dd5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x309a6dd9
- (void)handleTopLevelErrorStatus:(id)status;	// 0x309a6e49
- (id)parameterData;	// 0x309a6ce9
- (BOOL)processContext:(id)context;	// 0x309a6f99
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x309a6921
@end

