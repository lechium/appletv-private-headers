/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSNumber, NSString, NSDictionary;

@interface ASChangedCollectionLeaf : ASItem <NSCoding> {
	int _changeType;	// 40 = 0x28
	NSString *_serverID;	// 44 = 0x2c
	NSString *_clientID;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	BOOL _isResponse;	// 56 = 0x38
	BOOL _validateOpeningTokens;	// 57 = 0x39
	NSDictionary *_applicationData;	// 60 = 0x3c
}
@property(retain) NSDictionary *applicationData;	// G=0x34359509; S=0x3435959d; @synthesize=_applicationData
@property(assign) int changeType;	// G=0x34358919; S=0x34358929; @synthesize=_changeType
@property(copy) NSString *clientID;	// G=0x343594d9; S=0x3435954d; @synthesize=_clientID
@property(readonly, assign) BOOL isResponse;	// G=0x34358909; converted property
@property(retain) NSString *serverID;	// G=0x343594c1; S=0x34359521; @synthesize=_serverID
@property(copy) NSNumber *status;	// G=0x343594f1; S=0x34359575; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x34359039
+ (BOOL)frontingBasicTypes;	// 0x34358f61
+ (BOOL)notifyOfUnknownTokens;	// 0x34358f19
+ (BOOL)parsingLeafNode;	// 0x34358ff1
+ (BOOL)parsingWithSubItems;	// 0x34358fa9
- (id)init;	// 0x34358939
- (id)initWithCoder:(id)coder;	// 0x34358ae5
// declared property getter: - (id)applicationData;	// 0x34359509
- (id)asParseRules;	// 0x34358cad
// declared property getter: - (int)changeType;	// 0x34358919
// declared property getter: - (id)clientID;	// 0x343594d9
- (int)dataclass;	// 0x34359081
- (void)dealloc;	// 0x34358e99
- (void)encodeWithCoder:(id)coder;	// 0x34358975
// converted property getter: - (BOOL)isResponse;	// 0x34358909
- (void)loadClientIDs;	// 0x343590bd
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x343590f5
// declared property getter: - (id)serverID;	// 0x343594c1
// declared property setter: - (void)setApplicationData:(id)data;	// 0x3435959d
// declared property setter: - (void)setChangeType:(int)type;	// 0x34358929
// declared property setter: - (void)setClientID:(id)anId;	// 0x3435954d
// declared property setter: - (void)setServerID:(id)anId;	// 0x34359521
// declared property setter: - (void)setStatus:(id)status;	// 0x34359575
- (void)setValidateOpeningTokens:(BOOL)tokens;	// 0x343588f9
// declared property getter: - (id)status;	// 0x343594f1
@end

