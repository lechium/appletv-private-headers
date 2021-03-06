/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "NSCoding.h"

@class NSString;

@interface ASFolder : ASItem <NSCoding> {
	int _folderType;	// 40 = 0x28
	NSString *_serverID;	// 44 = 0x2c
	NSString *_parentID;	// 48 = 0x30
	NSString *_displayName;	// 52 = 0x34
	int _changeType;	// 56 = 0x38
	int _localID;	// 60 = 0x3c
}
@property(assign) int changeType;	// G=0x303225d1; S=0x303225e1; @synthesize=_changeType
@property(readonly, assign) int dataclass;	// G=0x30322461; 
@property(retain) NSString *displayName;	// G=0x30323111; S=0x30323181; @synthesize=_displayName
@property(readonly, assign) int folderType;	// G=0x30322601; @synthesize=_folderType
@property(readonly, assign) int localID;	// G=0x303225f1; @synthesize=_localID
@property(retain) NSString *parentID;	// G=0x303230f9; S=0x30323155; @synthesize=_parentID
@property(retain) NSString *serverID;	// G=0x303230e1; S=0x30323129; @synthesize=_serverID
+ (BOOL)acceptsTopLevelLeaves;	// 0x30322ef1
+ (BOOL)frontingBasicTypes;	// 0x30322e19
+ (BOOL)notifyOfUnknownTokens;	// 0x30322dd1
+ (BOOL)parsingLeafNode;	// 0x30322ea9
+ (BOOL)parsingWithSubItems;	// 0x30322e61
- (id)initWithCoder:(id)coder;	// 0x30322bfd
- (id)initWithFolderType:(int)folderType serverID:(id)anId parentID:(id)anId3 displayName:(id)name localID:(int)anId5;	// 0x3032288d
- (id)_folderTypeString;	// 0x303224e1
- (id)asParseRules;	// 0x303226a1
// declared property getter: - (int)changeType;	// 0x303225d1
// declared property getter: - (int)dataclass;	// 0x30322461
- (void)dealloc;	// 0x30322611
- (id)description;	// 0x30322929
// declared property getter: - (id)displayName;	// 0x30323111
- (void)encodeWithCoder:(id)coder;	// 0x303229ad
// declared property getter: - (int)folderType;	// 0x30322601
- (unsigned)hash;	// 0x30322bdd
- (BOOL)isEqual:(id)equal;	// 0x30322af9
// declared property getter: - (int)localID;	// 0x303225f1
- (BOOL)mayContainDataclasses:(int)dataclasses;	// 0x3032249d
// declared property getter: - (id)parentID;	// 0x303230f9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30322f39
// declared property getter: - (id)serverID;	// 0x303230e1
// declared property setter: - (void)setChangeType:(int)type;	// 0x303225e1
// declared property setter: - (void)setDisplayName:(id)name;	// 0x30323181
- (void)setFolderTypeNumber:(id)number;	// 0x3032267d
// declared property setter: - (void)setParentID:(id)anId;	// 0x30323155
// declared property setter: - (void)setServerID:(id)anId;	// 0x30323129
@end

