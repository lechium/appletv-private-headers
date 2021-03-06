/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSCoding> {
	int primaryType;	// 4 = 0x4
	NSCountedSet *_additionalAttachments;	// 8 = 0x8
	NSMutableDictionary *_clientSideComposedImageInfos;	// 12 = 0xc
}
@property(retain, nonatomic) NSCountedSet *additionalAttachments;	// G=0x33cc16fd; S=0x33cc170d; @synthesize=_additionalAttachments
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos;	// G=0x33cc171d; S=0x33cc172d; @synthesize=_clientSideComposedImageInfos
@property(assign, nonatomic) int primaryType;	// G=0x33cc16dd; S=0x33cc16ed; @synthesize
- (id)initWithCoder:(id)coder;	// 0x33cc15bd
- (void)addAttachmentOfType:(int)type;	// 0x33cc1395
// declared property getter: - (id)additionalAttachments;	// 0x33cc16fd
// declared property getter: - (id)clientSideComposedImageInfos;	// 0x33cc171d
- (id)copyWithZone:(NSZone *)zone;	// 0x33cc150d
- (void)dealloc;	// 0x33cc1331
- (void)encodeWithCoder:(id)coder;	// 0x33cc1671
- (BOOL)isEqualToAttachments:(id)attachments;	// 0x33cc149d
- (unsigned)numberOfAdditionalAttachments;	// 0x33cc1421
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x33cc1455
// declared property getter: - (int)primaryType;	// 0x33cc16dd
// declared property setter: - (void)setAdditionalAttachments:(id)attachments;	// 0x33cc170d
// declared property setter: - (void)setClientSideComposedImageInfos:(id)infos;	// 0x33cc172d
// declared property setter: - (void)setPrimaryType:(int)type;	// 0x33cc16ed
@end

