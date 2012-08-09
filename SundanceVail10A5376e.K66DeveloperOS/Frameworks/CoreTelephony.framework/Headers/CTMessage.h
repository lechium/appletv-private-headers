/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDictionary, NSDate, CTPhoneNumber, NSString, NSMutableDictionary, NSUUID, NSArray;
@protocol NSCopying, CTMessageAddress;

@interface CTMessage : NSObject {
	NSObject<NSCopying, CTMessageAddress> *_sender;	// 4 = 0x4
	NSMutableArray *_recipients;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSDictionary *_rawHeaders;	// 16 = 0x10
	NSDate *_date;	// 20 = 0x14
	unsigned _messageId;	// 24 = 0x18
	int _messageType;	// 28 = 0x1c
	CTPhoneNumber *_serviceCenter;	// 32 = 0x20
	NSString *_subject;	// 36 = 0x24
	NSString *_contentType;	// 40 = 0x28
	NSMutableDictionary *_contentTypeParams;	// 44 = 0x2c
	unsigned _replaceMessage;	// 48 = 0x30
	NSString *_countryCode;	// 52 = 0x34
	NSUUID *_uuid;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *contentType;	// G=0x36735335; S=0x36735349; @synthesize=_contentType
@property(readonly, assign, nonatomic) NSString *countryCode;	// G=0x3673536d; @synthesize=_countryCode
@property(readonly, assign) NSDate *date;	// G=0x3673524d; @synthesize=_date
@property(readonly, assign) NSArray *items;	// G=0x36735281; @synthesize=_items
@property(assign, nonatomic) unsigned messageId;	// G=0x36735261; S=0x36735271; @synthesize=_messageId
@property(assign, nonatomic) int messageType;	// G=0x36735295; S=0x367352a5; @synthesize=_messageType
@property(readonly, assign) NSDictionary *rawHeaders;	// G=0x36735321; @synthesize=_rawHeaders
@property(readonly, assign) NSArray *recipients;	// G=0x36735239; @synthesize=_recipients
@property(readonly, assign) unsigned replaceMessage;	// G=0x36735359; @synthesize=_replaceMessage
@property(copy, nonatomic) NSObject<NSCopying, CTMessageAddress> *sender;	// G=0x367352fd; S=0x36735311; @synthesize=_sender
@property(copy, nonatomic) CTPhoneNumber *serviceCenter;	// G=0x367352b5; S=0x367352c9; @synthesize=_serviceCenter
@property(copy, nonatomic) NSString *subject;	// G=0x367352d9; S=0x367352ed; @synthesize=_subject
@property(retain, nonatomic) NSUUID *uniqueIdentifier;	// G=0x36735381; S=0x36735391; @synthesize=_uuid
- (id)init;	// 0x36734909
- (id)initWithDate:(id)date;	// 0x36734a5d
- (void)addContentTypeParameterWithName:(id)name value:(id)value;	// 0x36735069
- (id)addData:(id)data withContentType:(id)contentType;	// 0x36734f65
- (void)addEmailRecipient:(id)recipient;	// 0x36734e59
- (id)addPart:(id)part;	// 0x36734fd9
- (void)addPhoneRecipient:(id)recipient;	// 0x36734e09
- (void)addRecipient:(id)recipient;	// 0x36734c05
- (id)addText:(id)text;	// 0x36734ed5
- (id)allContentTypeParameterNames;	// 0x36735099
// declared property getter: - (id)contentType;	// 0x36735335
- (id)contentTypeParameterWithName:(id)name;	// 0x36735049
// declared property getter: - (id)countryCode;	// 0x3673536d
// declared property getter: - (id)date;	// 0x3673524d
- (void)dealloc;	// 0x36734aad
- (id)description;	// 0x367350b9
// declared property getter: - (id)items;	// 0x36735281
// declared property getter: - (unsigned)messageId;	// 0x36735261
// declared property getter: - (int)messageType;	// 0x36735295
// declared property getter: - (id)rawHeaders;	// 0x36735321
// declared property getter: - (id)recipients;	// 0x36735239
- (void)removePartAtIndex:(unsigned)index;	// 0x36735005
- (void)removeRecipient:(id)recipient;	// 0x36734cf1
- (void)removeRecipientsInArray:(id)array;	// 0x36734d39
// declared property getter: - (unsigned)replaceMessage;	// 0x36735359
// declared property getter: - (id)sender;	// 0x367352fd
// declared property getter: - (id)serviceCenter;	// 0x367352b5
// declared property setter: - (void)setContentType:(id)type;	// 0x36735349
- (void)setCountryCode:(id)code;	// 0x367351fd
// declared property setter: - (void)setMessageId:(unsigned)anId;	// 0x36735271
// declared property setter: - (void)setMessageType:(int)type;	// 0x367352a5
- (void)setRawHeaders:(id)headers;	// 0x36734bb1
- (void)setRecipient:(id)recipient;	// 0x36734d5d
- (void)setRecipients:(id)recipients;	// 0x36734dc5
- (void)setReplaceMessage:(unsigned)message;	// 0x36734bf5
// declared property setter: - (void)setSender:(id)sender;	// 0x36735311
// declared property setter: - (void)setServiceCenter:(id)center;	// 0x367352c9
// declared property setter: - (void)setSubject:(id)subject;	// 0x367352ed
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x36735391
// declared property getter: - (id)subject;	// 0x367352d9
// declared property getter: - (id)uniqueIdentifier;	// 0x36735381
@end
