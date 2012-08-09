/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCoding> {
	BBBulletin *_bulletin;	// 4 = 0x4
	unsigned _transactionID;	// 8 = 0x8
	int _updateType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BBBulletin *bulletin;	// G=0x300ace2d; @synthesize=_bulletin
@property(readonly, assign, nonatomic) unsigned transactionID;	// G=0x300ace3d; @synthesize=_transactionID
@property(readonly, assign, nonatomic) int updateType;	// G=0x300ace4d; @synthesize=_updateType
- (id)initWithBulletin:(id)bulletin updateType:(int)type transactionID:(unsigned)anId;	// 0x300acc0d
- (id)initWithCoder:(id)coder;	// 0x300accfd
// declared property getter: - (id)bulletin;	// 0x300ace2d
- (void)dealloc;	// 0x300accb1
- (void)encodeWithCoder:(id)coder;	// 0x300acd99
// declared property getter: - (unsigned)transactionID;	// 0x300ace3d
// declared property getter: - (int)updateType;	// 0x300ace4d
@end
