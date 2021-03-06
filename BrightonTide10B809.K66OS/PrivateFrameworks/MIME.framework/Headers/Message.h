/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MIME-Structs.h"

@class MessageStore, NSArray, NSString;

@interface Message : NSObject <NSCopying> {
	MessageStore *_store;	// 4 = 0x4
	unsigned long _preferredEncoding;	// 8 = 0x8
	NSString *_senderAddressComment;	// 12 = 0xc
	unsigned _dateSentInterval;	// 16 = 0x10
	unsigned _dateReceivedInterval;	// 20 = 0x14
	unsigned long long _generationNumber;	// 24 = 0x18
	NSString *_subject;	// 32 = 0x20
	NSArray *_to;	// 36 = 0x24
	NSArray *_cc;	// 40 = 0x28
	NSArray *_bcc;	// 44 = 0x2c
	NSArray *_sender;	// 48 = 0x30
	NSString *_contentType;	// 52 = 0x34
	long long _messageIDHeaderHash;	// 56 = 0x38
	long long _conversationID;	// 64 = 0x40
	NSString *_summary;	// 72 = 0x48
	NSString *_externalID;	// 76 = 0x4c
	unsigned _calculatedAttachmentInfo : 1;	// 80 = 0x50
	unsigned short _numberOfAttachments;	// 82 = 0x52
}
@property(retain) NSArray *bcc;	// G=0x3441b975; S=0x3441b99d; converted property
@property(retain) NSArray *cc;	// G=0x3441b7e9; S=0x3441b811; converted property
@property(retain) NSString *contentType;	// G=0x3441b251; S=0x3441b2e1; converted property
@property(assign) long long conversationID;	// G=0x3441bb01; S=0x3441bb51; converted property
@property(retain) NSString *externalID;	// G=0x3441bb9d; S=0x3441bbe1; converted property
@property(assign) unsigned long long generationNumber;	// G=0x3441c55d; S=0x3441c549; converted property
@property(assign) long long messageIDHash;	// G=0x3441a5b1; S=0x3441bb29; converted property
@property(retain) id messageStore;	// G=0x3441a131; S=0x3441a175; converted property
@property(readonly, assign) unsigned short numberOfAttachments;	// G=0x3441a751; converted property
@property(assign) unsigned long preferredEncoding;	// G=0x3441a775; S=0x3441a785; converted property
@property(readonly, retain) NSString *senderAddressComment;	// G=0x3441b5b9; converted property
@property(retain) NSString *subject;	// G=0x3441af6d; S=0x3441b001; converted property
@property(readonly, retain) NSString *summary;	// G=0x3441bc31; converted property
@property(retain) NSArray *to;	// G=0x3441b65d; S=0x3441b685; converted property
+ (Class)dataMessageStoreToUse;	// 0x3441a019
+ (id)messageWithRFC822Data:(id)rfc822Data;	// 0x3441a035
+ (void)setMessageClassForStore:(id)store;	// 0x3441a0ad
- (id)init;	// 0x3441a0dd
- (void)_calculateAttachmentInfoFromBody:(id)body;	// 0x3441c409
- (id)_copyDateFromDateHeaderInHeaders:(id)headers;	// 0x3441aa19
- (id)_copyDateFromReceivedHeadersInHeaders:(id)headers;	// 0x3441a891
- (BOOL)_doesDateAppearToBeSane:(id)beSane;	// 0x3441a851
- (long long)_messageIDHeaderHashIvar;	// 0x3441a715
- (void)_setDateReceivedFromHeaders:(id)headers;	// 0x3441ab15
- (void)_setDateSentFromHeaders:(id)headers;	// 0x3441aba9
- (id)additionalHeadersForForward;	// 0x3441c66d
- (id)additionalHeadersForReply;	// 0x3441c63d
// converted property getter: - (id)bcc;	// 0x3441b975
- (id)bccIfCached;	// 0x3441b989
- (id)bestAlternativeInPart:(id)part;	// 0x3441c609
- (id)bodyData;	// 0x3441c239
- (id)bodyDataIsComplete:(BOOL *)complete;	// 0x3441c275
- (id)bodyDataIsComplete:(BOOL *)complete isPartial:(BOOL *)partial;	// 0x3441c289
- (id)bodyDataIsComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x3441c2ad
- (id)cachedAttributes;	// 0x3441c501
- (void)calculateAttachmentInfoFromBody:(id)body;	// 0x3441c40d
- (BOOL)calculatedNumberOfAttachments;	// 0x3441a761
- (BOOL)canBeDeleted;	// 0x3441c635
// converted property getter: - (id)cc;	// 0x3441b7e9
- (id)ccIfCached;	// 0x3441b7fd
// converted property getter: - (id)contentType;	// 0x3441b251
// converted property getter: - (long long)conversationID;	// 0x3441bb01
- (id)copyWithZone:(NSZone *)zone;	// 0x3441a11d
- (id)dataConsumerForMimePart:(id)mimePart;	// 0x3441a46d
- (id)dataForMimePart:(id)mimePart;	// 0x3441c331
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete;	// 0x3441c375
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;	// 0x3441c3bd
- (id)dataPathForMimePart:(id)mimePart;	// 0x3441c405
- (id)dateReceived;	// 0x3441b079
- (double)dateReceivedAsTimeIntervalSince1970;	// 0x3441b185
- (id)dateSent;	// 0x3441b0e5
- (double)dateSentAsTimeIntervalSince1970;	// 0x3441b1e9
- (void)dealloc;	// 0x3441a471
- (id)defaultAlternativeInPart:(id)part;	// 0x3441c5dd
// converted property getter: - (id)externalID;	// 0x3441bb9d
- (id)firstSender;	// 0x3441b40d
- (int)generationCompare:(id)compare;	// 0x3441c575
// converted property getter: - (unsigned long long)generationNumber;	// 0x3441c55d
- (id)headerData;	// 0x3441c2e9
- (id)headerDataDownloadIfNecessary:(BOOL)necessary;	// 0x3441c2fd
- (id)headers;	// 0x3441a1d1
- (id)headersIfAvailable;	// 0x3441a201
- (BOOL)isLibraryMessage;	// 0x3441c639
- (BOOL)isMessageContentsLocallyAvailable;	// 0x3441a74d
- (void)loadCachedHeaderValuesFromHeaders:(id)headers;	// 0x3441ac3d
- (id)messageBody;	// 0x3441a231
- (id)messageBodyIfAvailable;	// 0x3441a269
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)flags;	// 0x3441a2d9
- (id)messageBodyUpdatingFlags:(BOOL)flags;	// 0x3441a2a1
- (id)messageData;	// 0x3441a455
- (BOOL)messageData:(id *)data messageSize:(unsigned *)size isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x3441a311
- (id)messageDataIsComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x3441a429
- (id)messageID;	// 0x3441a5ad
// converted property getter: - (long long)messageIDHash;	// 0x3441a5b1
- (id)messageIDHeader;	// 0x3441a64d
- (id)messageIDHeaderInFortyBytesOrLess;	// 0x3441a685
- (unsigned)messageSize;	// 0x3441a57d
// converted property getter: - (id)messageStore;	// 0x3441a131
- (BOOL)needsDateReceived;	// 0x3441b1d1
// converted property getter: - (unsigned short)numberOfAttachments;	// 0x3441a751
- (id)path;	// 0x3441c231
- (id)persistentID;	// 0x3441c235
- (id)preferredEmailAddressToReplyWith;	// 0x3441a5a9
// converted property getter: - (unsigned long)preferredEncoding;	// 0x3441a775
- (id)refreshedMessage;	// 0x3441a12d
- (id)remoteID;	// 0x3441c21d
// converted property getter: - (id)senderAddressComment;	// 0x3441b5b9
- (id)senders;	// 0x3441b359
- (id)sendersIfCached;	// 0x3441b3f9
// converted property setter: - (void)setBcc:(id)bcc;	// 0x3441b99d
// converted property setter: - (void)setCc:(id)cc;	// 0x3441b811
// converted property setter: - (void)setContentType:(id)type;	// 0x3441b2e1
// converted property setter: - (void)setConversationID:(long long)anId;	// 0x3441bb51
- (void)setDateReceivedTimeIntervalSince1970:(double)a1970;	// 0x3441b151
- (void)setDateSentTimeIntervalSince1970:(double)a1970;	// 0x3441b235
// converted property setter: - (void)setExternalID:(id)anId;	// 0x3441bbe1
// converted property setter: - (void)setGenerationNumber:(unsigned long long)number;	// 0x3441c549
- (void)setMessageData:(id)data isPartial:(BOOL)partial;	// 0x3441a469
// converted property setter: - (void)setMessageIDHash:(long long)hash;	// 0x3441bb29
- (void)setMessageInfo:(id)info to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceivedTimeIntervalSince1970:(double)a1970 dateSentTimeIntervalSince1970:(double)a19707 messageIDHash:(long long)hash conversationID:(long long)anId summary:(id)summary;	// 0x3441bd65
- (void)setMessageInfoFromMessage:(id)message;	// 0x3441c0f1
// converted property setter: - (void)setMessageStore:(id)store;	// 0x3441a175
- (void)setNumberOfAttachments:(unsigned)attachments;	// 0x3441c4f1
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted;	// 0x3441c4b5
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x3441a785
- (void)setSender:(id)sender;	// 0x3441b455
// converted property setter: - (void)setSubject:(id)subject;	// 0x3441b001
- (void)setSubject:(id)subject to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceived:(double)received dateSent:(double)sent messageIDHash:(long long)hash conversationIDHash:(long long)hash9 summary:(id)summary withOptions:(unsigned)options;	// 0x3441bdc1
// converted property setter: - (void)setTo:(id)to;	// 0x3441b685
// converted property getter: - (id)subject;	// 0x3441af6d
// converted property getter: - (id)summary;	// 0x3441bc31
// converted property getter: - (id)to;	// 0x3441b65d
- (id)toIfCached;	// 0x3441b671
- (unsigned long)uid;	// 0x3441c22d
- (id)uniqueArray:(id)array withStore:(id)store;	// 0x3441bc75
@end

