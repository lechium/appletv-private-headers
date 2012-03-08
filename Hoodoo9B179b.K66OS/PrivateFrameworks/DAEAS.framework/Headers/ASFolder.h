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
	BOOL _renameOnCollision;	// 60 = 0x3c
	int _localID;	// 64 = 0x40
}
@property(assign) int changeType;	// G=0x31dee38d; S=0x31dee39d; @synthesize=_changeType
@property(readonly, assign) int dataclass;	// G=0x31dedae1; 
@property(retain) NSString *displayName;	// G=0x31dee335; S=0x31dee349; @synthesize=_displayName
@property(readonly, assign) int folderType;	// G=0x31dee36d; @synthesize=_folderType
@property(readonly, assign) int localID;	// G=0x31dee37d; @synthesize=_localID
@property(retain) NSString *parentID;	// G=0x31dee2fd; S=0x31dee311; @synthesize=_parentID
@property(assign) BOOL renameOnCollision;	// G=0x31dee3ad; S=0x31dee3bd; @synthesize=_renameOnCollision
@property(retain) NSString *serverID;	// G=0x31dee2c5; S=0x31dee2d9; @synthesize=_serverID
+ (BOOL)acceptsTopLevelLeaves;	// 0x31ded4f9
+ (BOOL)frontingBasicTypes;	// 0x31ded5f5
+ (BOOL)notifyOfUnknownTokens;	// 0x31ded649
+ (BOOL)parsingLeafNode;	// 0x31ded54d
+ (BOOL)parsingWithSubItems;	// 0x31ded5a1
- (id)initWithCoder:(id)coder;	// 0x31ded69d
- (id)initWithFolderType:(int)folderType serverID:(id)anId parentID:(id)anId3 displayName:(id)name localID:(int)anId5;	// 0x31dedd15
- (id)_folderTypeString;	// 0x31dedb5d
- (id)asParseRules;	// 0x31dedf91
// declared property getter: - (int)changeType;	// 0x31dee38d
// declared property getter: - (int)dataclass;	// 0x31dedae1
- (void)dealloc;	// 0x31dee251
- (id)description;	// 0x31dedc79
// declared property getter: - (id)displayName;	// 0x31dee335
- (void)encodeWithCoder:(id)coder;	// 0x31ded985
// declared property getter: - (int)folderType;	// 0x31dee36d
- (unsigned)hash;	// 0x31ded881
- (BOOL)isEqual:(id)equal;	// 0x31ded885
// declared property getter: - (int)localID;	// 0x31dee37d
- (BOOL)mayContainDataclasses:(int)dataclasses;	// 0x31dedb1d
// declared property getter: - (id)parentID;	// 0x31dee2fd
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31deddcd
// declared property getter: - (BOOL)renameOnCollision;	// 0x31dee3ad
// declared property getter: - (id)serverID;	// 0x31dee2c5
// declared property setter: - (void)setChangeType:(int)type;	// 0x31dee39d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x31dee349
- (void)setFolderTypeNumber:(id)number;	// 0x31dee229
// declared property setter: - (void)setParentID:(id)anId;	// 0x31dee311
// declared property setter: - (void)setRenameOnCollision:(BOOL)collision;	// 0x31dee3bd
// declared property setter: - (void)setServerID:(id)anId;	// 0x31dee2d9
@end

