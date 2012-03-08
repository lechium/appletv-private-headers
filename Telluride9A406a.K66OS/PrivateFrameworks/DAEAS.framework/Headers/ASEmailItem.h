/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASChangedCollectionLeaf.h"

@class NSData, NSDate, NSArray, ASMeetingRequest, NSString;

@interface ASEmailItem : ASChangedCollectionLeaf {
	NSArray *_to;	// 64 = 0x40
	NSArray *_cc;	// 68 = 0x44
	NSArray *_from;	// 72 = 0x48
	NSArray *_replyTo;	// 76 = 0x4c
	NSDate *_date;	// 80 = 0x50
	NSString *_subject;	// 84 = 0x54
	NSString *_displayTo;	// 88 = 0x58
	int _importance;	// 92 = 0x5c
	BOOL _read;	// 96 = 0x60
	BOOL _flagged;	// 97 = 0x61
	NSString *_body;	// 100 = 0x64
	int _bodySize;	// 104 = 0x68
	BOOL _bodyTruncated;	// 108 = 0x6c
	NSString *_messageClass;	// 112 = 0x70
	NSArray *_attachments;	// 116 = 0x74
	ASMeetingRequest *_meetingRequest;	// 120 = 0x78
	NSString *_threadTopic;	// 124 = 0x7c
	NSData *_conversationId;	// 128 = 0x80
	NSData *_conversationIndex;	// 132 = 0x84
	NSString *_mimeData;	// 136 = 0x88
	NSString *_folderId;	// 140 = 0x8c
	NSString *_longID;	// 144 = 0x90
	int _bodyType;	// 148 = 0x94
	BOOL _readIsSet;	// 152 = 0x98
	BOOL _flaggedIsSet;	// 153 = 0x99
	int _lastVerb;	// 156 = 0x9c
	BOOL _verbIsSet;	// 160 = 0xa0
}
@property(retain) NSArray *attachments;	// G=0x34404df5; S=0x34404e09; @synthesize=_attachments
@property(retain) NSString *body;	// G=0x34404d45; S=0x34404d59; @synthesize=_body
@property(assign) int bodySize;	// G=0x34404d7d; S=0x34404d8d; @synthesize=_bodySize
@property(assign) BOOL bodyTruncated;	// G=0x34404d9d; S=0x34404dad; @synthesize=_bodyTruncated
@property(assign) int bodyType;	// G=0x34404fc5; S=0x34404fd5; @synthesize=_bodyType
@property(copy) NSArray *cc;	// G=0x34404bb5; S=0x34404bc9; @synthesize=_cc
@property(retain) NSData *conversationId;	// G=0x34404e65; S=0x34404e79; @synthesize=_conversationId
@property(retain) NSData *conversationIndex;	// G=0x34404e9d; S=0x34404eb1; @synthesize=_conversationIndex
@property(retain) NSDate *date;	// G=0x34404c5d; S=0x34404c71; @synthesize=_date
@property(retain) NSString *displayTo;	// G=0x34404ccd; S=0x34404ce1; @synthesize=_displayTo
@property(assign, nonatomic) BOOL flagged;	// G=0x34404d35; S=0x344040c5; @synthesize=_flagged
@property(assign) BOOL flaggedIsSet;	// G=0x34404f85; S=0x34404f95; @synthesize=_flaggedIsSet
@property(retain) NSString *folderId;	// G=0x34404ee5; S=0x34404ef9; @synthesize=_folderId
@property(copy) NSArray *from;	// G=0x34404bed; S=0x34404c01; @synthesize=_from
@property(assign) int importance;	// G=0x34404d05; S=0x34404d15; @synthesize=_importance
@property(assign, nonatomic) int lastVerb;	// G=0x34404f55; S=0x344040e5; @synthesize=_lastVerb
@property(retain) NSString *longID;	// G=0x34404f1d; S=0x34404f31; @synthesize=_longID
@property(readonly, assign) NSData *meetingRequestMetaData;	// G=0x34403f51; 
@property(readonly, assign) NSString *meetingRequestUUID;	// G=0x34403f19; 
@property(retain) NSString *messageClass;	// G=0x34404dbd; S=0x34404dd1; @synthesize=_messageClass
@property(retain, nonatomic) NSString *mimeData;	// G=0x34404ed5; S=0x34403f7d; @synthesize=_mimeData
@property(assign, nonatomic) BOOL read;	// G=0x34404d25; S=0x344040a5; @synthesize=_read
@property(assign) BOOL readIsSet;	// G=0x34404f65; S=0x34404f75; @synthesize=_readIsSet
@property(copy) NSArray *replyTo;	// G=0x34404c25; S=0x34404c39; @synthesize=_replyTo
@property(retain) NSString *subject;	// G=0x34404c95; S=0x34404ca9; @synthesize=_subject
@property(retain) NSString *threadTopic;	// G=0x34404e2d; S=0x34404e41; @synthesize=_threadTopic
@property(copy) NSArray *to;	// G=0x34404b7d; S=0x34404b91; @synthesize=_to
@property(assign) BOOL verbIsSet;	// G=0x34404fa5; S=0x34404fb5; @synthesize=_verbIsSet
+ (BOOL)acceptsTopLevelLeaves;	// 0x3440216d
+ (BOOL)frontingBasicTypes;	// 0x34402269
+ (BOOL)notifyOfUnknownTokens;	// 0x344022bd
+ (BOOL)parsingLeafNode;	// 0x344021c1
+ (BOOL)parsingWithSubItems;	// 0x34402215
- (id)initWithCoder:(id)coder;	// 0x34404239
- (BOOL)_isSearchResult;	// 0x344036e5
- (void)_processApplicationData:(BOOL)data;	// 0x344029ad
- (void)_setMeetingRequest:(id)request;	// 0x344041f5
- (id)asParseRules;	// 0x34402311
// declared property getter: - (id)attachments;	// 0x34404df5
// declared property getter: - (id)body;	// 0x34404d45
// declared property getter: - (int)bodySize;	// 0x34404d7d
// declared property getter: - (BOOL)bodyTruncated;	// 0x34404d9d
// declared property getter: - (int)bodyType;	// 0x34404fc5
// declared property getter: - (id)cc;	// 0x34404bb5
- (int)compare:(id)compare;	// 0x34403d51
// declared property getter: - (id)conversationId;	// 0x34404e65
// declared property getter: - (id)conversationIndex;	// 0x34404e9d
// declared property getter: - (id)date;	// 0x34404c5d
- (void)dealloc;	// 0x34403d8d
- (id)description;	// 0x34403b49
// declared property getter: - (id)displayTo;	// 0x34404ccd
- (void)encodeWithCoder:(id)coder;	// 0x34404729
// declared property getter: - (BOOL)flagged;	// 0x34404d35
// declared property getter: - (BOOL)flaggedIsSet;	// 0x34404f85
// declared property getter: - (id)folderId;	// 0x34404ee5
// declared property getter: - (id)from;	// 0x34404bed
// declared property getter: - (int)importance;	// 0x34404d05
// declared property getter: - (int)lastVerb;	// 0x34404f55
// declared property getter: - (id)longID;	// 0x34404f1d
// declared property getter: - (id)meetingRequestMetaData;	// 0x34403f51
// declared property getter: - (id)meetingRequestUUID;	// 0x34403f19
// declared property getter: - (id)messageClass;	// 0x34404dbd
// declared property getter: - (id)mimeData;	// 0x34404ed5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x344036e9
- (void)postProcessApplicationData;	// 0x344036d1
- (void)processAppDataForStream;	// 0x344036bd
// declared property getter: - (BOOL)read;	// 0x34404d25
// declared property getter: - (BOOL)readIsSet;	// 0x34404f65
// declared property getter: - (id)replyTo;	// 0x34404c25
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x34404e09
// declared property setter: - (void)setBody:(id)body;	// 0x34404d59
// declared property setter: - (void)setBodySize:(int)size;	// 0x34404d8d
// declared property setter: - (void)setBodyTruncated:(BOOL)truncated;	// 0x34404dad
// declared property setter: - (void)setBodyType:(int)type;	// 0x34404fd5
- (void)setCCString:(id)string;	// 0x34404141
// declared property setter: - (void)setCc:(id)cc;	// 0x34404bc9
// declared property setter: - (void)setConversationId:(id)anId;	// 0x34404e79
// declared property setter: - (void)setConversationIndex:(id)index;	// 0x34404eb1
// declared property setter: - (void)setDate:(id)date;	// 0x34404c71
// declared property setter: - (void)setDisplayTo:(id)to;	// 0x34404ce1
// declared property setter: - (void)setFlagged:(BOOL)flagged;	// 0x344040c5
// declared property setter: - (void)setFlaggedIsSet:(BOOL)set;	// 0x34404f95
// declared property setter: - (void)setFolderId:(id)anId;	// 0x34404ef9
// declared property setter: - (void)setFrom:(id)from;	// 0x34404c01
- (void)setFromString:(id)string;	// 0x3440417d
// declared property setter: - (void)setImportance:(int)importance;	// 0x34404d15
// declared property setter: - (void)setLastVerb:(int)verb;	// 0x344040e5
// declared property setter: - (void)setLongID:(id)anId;	// 0x34404f31
// declared property setter: - (void)setMessageClass:(id)aClass;	// 0x34404dd1
// declared property setter: - (void)setMimeData:(id)data;	// 0x34403f7d
// declared property setter: - (void)setRead:(BOOL)read;	// 0x344040a5
// declared property setter: - (void)setReadIsSet:(BOOL)set;	// 0x34404f75
// declared property setter: - (void)setReplyTo:(id)to;	// 0x34404c39
- (void)setReplyToString:(id)string;	// 0x344041b9
// declared property setter: - (void)setSubject:(id)subject;	// 0x34404ca9
// declared property setter: - (void)setThreadTopic:(id)topic;	// 0x34404e41
// declared property setter: - (void)setTo:(id)to;	// 0x34404b91
- (void)setToString:(id)string;	// 0x34404105
// declared property setter: - (void)setVerbIsSet:(BOOL)set;	// 0x34404fb5
// declared property getter: - (id)subject;	// 0x34404c95
// declared property getter: - (id)threadTopic;	// 0x34404e2d
// declared property getter: - (id)to;	// 0x34404b7d
// declared property getter: - (BOOL)verbIsSet;	// 0x34404fa5
@end

