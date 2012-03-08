/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@protocol NSObject;

@interface DAAction : NSObject <NSCoding> {
	int _itemChangeType;	// 4 = 0x4
	id _serverId;	// 8 = 0x8
	id<NSObject, NSCoding> _changedItem;	// 12 = 0xc
	int _changeId;	// 16 = 0x10
}
@property(assign) int changeId;	// G=0x31192075; S=0x31192085; @synthesize=_changeId
@property(retain, nonatomic) id changedItem;	// G=0x31192055; @synthesize=_changedItem
@property(readonly, assign) int itemChangeType;	// G=0x31192045; @synthesize=_itemChangeType
@property(readonly, assign, nonatomic) id serverId;	// G=0x31192065; @synthesize=_serverId
- (id)initWithCoder:(id)coder;	// 0x31191c85
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item serverId:(id)anId;	// 0x31191a41
- (void)_setChangedItem:(id)item;	// 0x31191ad9
// declared property getter: - (int)changeId;	// 0x31192075
// declared property getter: - (id)changedItem;	// 0x31192055
- (ASContact *)contact;	// 0x3118e881
- (void)dealloc;	// 0x311919e1
- (id)deletedContactID;	// 0x3118e86d
- (id)deletedEventID;	// 0x3118e839
- (id)deletedToDoID;	// 0x3119864d
- (id)description;	// 0x31191ba5
- (void)encodeWithCoder:(id)coder;	// 0x31191dfd
- (ASEvent *)event;	// 0x3118e84d
- (unsigned)hash;	// 0x31191f35
- (BOOL)isEqual:(id)equal;	// 0x31191f75
// declared property getter: - (int)itemChangeType;	// 0x31192045
- (id)message;	// 0x31196a6d
// declared property getter: - (id)serverId;	// 0x31192065
// declared property setter: - (void)setChangeId:(int)anId;	// 0x31192085
- (id)stringForItemChangeType:(int)itemChangeType;	// 0x31191b1d
- (ASToDo *)toDo;	// 0x31198661
@end

