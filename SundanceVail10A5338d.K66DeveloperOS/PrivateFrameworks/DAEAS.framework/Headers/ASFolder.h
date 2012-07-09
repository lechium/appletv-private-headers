/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSString;

@interface ASFolder : ASItem <NSCoding> {
	int _folderType;	// 40 = 0x28
	NSString *_serverID;	// 44 = 0x2c
	NSString *_parentID;	// 48 = 0x30
	NSString *_displayName;	// 52 = 0x34
	int _changeType;	// 56 = 0x38
	BOOL _renameOnCollision;	// 60 = 0x3c
	int _localID;	// 64 = 0x40
}
@property(assign) int changeType;	// G=0x36f1b4bd; S=0x36f1b4d1; @synthesize=_changeType
@property(readonly, assign) int dataclass;	// G=0x36f1ac6d; 
@property(retain) NSString *displayName;	// G=0x36f1b471; S=0x36f1b485; @synthesize=_displayName
@property(readonly, assign) int folderType;	// G=0x36f1b495; @synthesize=_folderType
@property(readonly, assign) int localID;	// G=0x36f1b4a9; @synthesize=_localID
@property(retain) NSString *parentID;	// G=0x36f1b44d; S=0x36f1b461; @synthesize=_parentID
@property(assign) BOOL renameOnCollision;	// G=0x36f1b4e9; S=0x36f1b501; @synthesize=_renameOnCollision
@property(retain) NSString *serverID;	// G=0x36f1b429; S=0x36f1b43d; @synthesize=_serverID
+ (BOOL)acceptsTopLevelLeaves;	// 0x36f1a675
+ (id)asParseRules;	// 0x36f1b0c9
+ (BOOL)frontingBasicTypes;	// 0x36f1a771
+ (BOOL)notifyOfUnknownTokens;	// 0x36f1a7c5
+ (BOOL)parsingLeafNode;	// 0x36f1a6c9
+ (BOOL)parsingWithSubItems;	// 0x36f1a71d
- (id)initWithCoder:(id)coder;	// 0x36f1a819
- (id)initWithFolderType:(int)folderType serverID:(id)anId parentID:(id)anId3 displayName:(id)name localID:(int)anId5;	// 0x36f1ae55
- (id)_folderTypeString;	// 0x36f1ac9d
// declared property getter: - (int)changeType;	// 0x36f1b4bd
// declared property getter: - (int)dataclass;	// 0x36f1ac6d
- (void)dealloc;	// 0x36f1b3b1
- (id)description;	// 0x36f1adb9
// declared property getter: - (id)displayName;	// 0x36f1b471
- (void)encodeWithCoder:(id)coder;	// 0x36f1ab05
// declared property getter: - (int)folderType;	// 0x36f1b495
- (unsigned)hash;	// 0x36f1a9fd
- (BOOL)isEqual:(id)equal;	// 0x36f1aa01
// declared property getter: - (int)localID;	// 0x36f1b4a9
- (BOOL)mayContainDataclasses:(int)dataclasses;	// 0x36f1ac81
// declared property getter: - (id)parentID;	// 0x36f1b44d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36f1af0d
// declared property getter: - (BOOL)renameOnCollision;	// 0x36f1b4e9
// declared property getter: - (id)serverID;	// 0x36f1b429
// declared property setter: - (void)setChangeType:(int)type;	// 0x36f1b4d1
// declared property setter: - (void)setDisplayName:(id)name;	// 0x36f1b485
- (void)setFolderTypeNumber:(id)number;	// 0x36f1b389
// declared property setter: - (void)setParentID:(id)anId;	// 0x36f1b461
// declared property setter: - (void)setRenameOnCollision:(BOOL)collision;	// 0x36f1b501
// declared property setter: - (void)setServerID:(id)anId;	// 0x36f1b43d
@end
