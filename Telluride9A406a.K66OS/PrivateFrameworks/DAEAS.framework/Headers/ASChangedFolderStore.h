/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray, NSString;

@interface ASChangedFolderStore : ASItem {
	NSMutableArray *_updatedFolders;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_syncKey;	// 48 = 0x30
}
@property(retain) NSNumber *status;	// G=0x343f2999; S=0x343f29ad; @synthesize=_status
@property(retain) NSString *syncKey;	// G=0x343f29d1; S=0x343f29e5; @synthesize=_syncKey
@property(retain) NSArray *updatedFolders;	// G=0x343f2a09; S=0x343f2a1d; @synthesize=_updatedFolders
+ (BOOL)acceptsTopLevelLeaves;	// 0x343f2201
+ (BOOL)frontingBasicTypes;	// 0x343f22fd
+ (BOOL)notifyOfUnknownTokens;	// 0x343f2351
+ (BOOL)parsingLeafNode;	// 0x343f2255
+ (BOOL)parsingWithSubItems;	// 0x343f22a9
- (id)asParseRules;	// 0x343f2481
- (void)dealloc;	// 0x343f23a5
- (id)description;	// 0x343f2419
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x343f28a5
// declared property setter: - (void)setStatus:(id)status;	// 0x343f29ad
// declared property setter: - (void)setSyncKey:(id)key;	// 0x343f29e5
// declared property setter: - (void)setUpdatedFolders:(id)folders;	// 0x343f2a1d
// declared property getter: - (id)status;	// 0x343f2999
// declared property getter: - (id)syncKey;	// 0x343f29d1
// declared property getter: - (id)updatedFolders;	// 0x343f2a09
@end

