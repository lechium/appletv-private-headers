/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface DAMailMessage : NSObject <NSCoding> {
}
- (id)initWithCoder:(id)coder;	// 0x33563929
- (id)attachments;	// 0x3356358d
- (id)body;	// 0x3356357d
- (int)bodySize;	// 0x33563581
- (int)bodyTruncated;	// 0x33563585
- (id)cc;	// 0x33563559
- (id)conversationId;	// 0x335635a1
- (id)conversationIndex;	// 0x335635a5
- (id)date;	// 0x33563565
- (id)displayTo;	// 0x3356356d
- (void)encodeWithCoder:(id)coder;	// 0x33563969
- (BOOL)flagged;	// 0x33563579
- (BOOL)flaggedIsSet;	// 0x335635bd
- (id)folderID;	// 0x335635b1
- (id)from;	// 0x3356355d
- (int)importance;	// 0x33563571
- (int)lastVerb;	// 0x335635b5
- (id)longID;	// 0x335635ad
- (BOOL)meetingRequestIsActionable;	// 0x33563599
- (id)meetingRequestMetaData;	// 0x33563595
- (id)meetingRequestUUID;	// 0x33563591
- (id)messageClass;	// 0x33563589
- (BOOL)read;	// 0x33563575
- (BOOL)readIsSet;	// 0x335635b9
- (id)remoteID;	// 0x335635a9
- (id)replyTo;	// 0x33563561
- (id)rfc822Data;	// 0x33563751
- (int)smimeType;	// 0x335635c5
- (id)subject;	// 0x33563569
- (id)threadTopic;	// 0x3356359d
- (id)to;	// 0x33563555
- (BOOL)verbIsSet;	// 0x335635c1
@end

