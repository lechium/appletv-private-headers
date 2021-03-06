/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAMailMessage.h> // Unknown library

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
	ASEmailItem *_ASEmailItem;	// 4 = 0x4
}
- (id)initWithASEmailItem:(id)asemailItem;	// 0x3437d015
- (id)initWithCoder:(id)coder;	// 0x3437ced1
- (id)attachments;	// 0x3437cccd
- (id)body;	// 0x3437cd8d
- (int)bodySize;	// 0x3437cd31
- (int)bodyTruncated;	// 0x3437cd0d
- (id)cc;	// 0x3437ce91
- (id)conversationId;	// 0x3437cc4d
- (id)conversationIndex;	// 0x3437cc2d
- (id)date;	// 0x3437ce31
- (void)dealloc;	// 0x3437d065
- (id)description;	// 0x3437d0ad
- (id)displayTo;	// 0x3437cdf1
- (void)encodeWithCoder:(id)coder;	// 0x3437cab1
- (id)folderID;	// 0x3437cbcd
- (id)from;	// 0x3437ce71
- (int)importance;	// 0x3437cdd1
- (int)lastVerb;	// 0x3437cbad
- (id)longID;	// 0x3437cbed
- (id)meetingRequestMetaData;	// 0x3437cc8d
- (id)meetingRequestUUID;	// 0x3437ccad
- (id)messageClass;	// 0x3437cced
- (BOOL)read;	// 0x3437cdad
- (BOOL)readIsSet;	// 0x3437cb89
- (id)remoteID;	// 0x3437cc0d
- (id)replyTo;	// 0x3437ce51
- (id)rfc822Data;	// 0x3437cfb9
- (id)subject;	// 0x3437ce11
- (id)threadTopic;	// 0x3437cc6d
- (id)to;	// 0x3437ceb1
- (BOOL)verbIsSet;	// 0x3437cb65
@end

