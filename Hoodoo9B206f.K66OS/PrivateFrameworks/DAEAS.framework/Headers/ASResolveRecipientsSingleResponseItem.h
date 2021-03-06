/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSMutableArray, NSString;

@interface ASResolveRecipientsSingleResponseItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
	NSMutableArray *_recipients;	// 48 = 0x30
}
@property(retain) NSNumber *easStatus;	// G=0x32203ef1; @synthesize=_easStatus
@property(retain) NSString *emailAddress;	// G=0x32203eb9; S=0x32203ecd; @synthesize=_emailAddress
@property(retain) NSMutableArray *recipients;	// G=0x32203f29; S=0x32203f3d; @synthesize=_recipients
+ (BOOL)acceptsTopLevelLeaves;	// 0x32203919
+ (BOOL)frontingBasicTypes;	// 0x32203a15
+ (BOOL)notifyOfUnknownTokens;	// 0x32203a69
+ (BOOL)parsingLeafNode;	// 0x3220396d
+ (BOOL)parsingWithSubItems;	// 0x322039c1
- (void)addRecipient:(id)recipient;	// 0x32203abd
- (id)asParseRules;	// 0x32203b21
- (void)dealloc;	// 0x32203e45
- (id)description;	// 0x32203dbd
// declared property getter: - (id)easStatus;	// 0x32203ef1
// declared property getter: - (id)emailAddress;	// 0x32203eb9
// declared property getter: - (id)recipients;	// 0x32203f29
- (void)setEASStatus:(id)status;	// 0x32203f05
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x32203ecd
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x32203f3d
@end

