/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSMutableDictionary, NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSCoding> {
@private
	int primaryType;	// 4 = 0x4
	NSCountedSet *_additionalAttachments;	// 8 = 0x8
	NSMutableDictionary *_clientSideComposedImageInfos;	// 12 = 0xc
}
@property(retain, nonatomic) NSCountedSet *additionalAttachments;	// G=0x3614afed; S=0x3614affd; @synthesize=_additionalAttachments
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos;	// G=0x3614b021; S=0x3614b031; @synthesize=_clientSideComposedImageInfos
@property(assign, nonatomic) int primaryType;	// G=0x3614afcd; S=0x3614afdd; @synthesize
- (id)initWithCoder:(id)coder;	// 0x3614aead
- (void)addAttachmentOfType:(int)type;	// 0x3614ac85
// declared property getter: - (id)additionalAttachments;	// 0x3614afed
// declared property getter: - (id)clientSideComposedImageInfos;	// 0x3614b021
- (id)copyWithZone:(NSZone *)zone;	// 0x3614adfd
- (void)dealloc;	// 0x3614ac25
- (void)encodeWithCoder:(id)coder;	// 0x3614af61
- (BOOL)isEqualToAttachments:(id)attachments;	// 0x3614ad91
- (unsigned)numberOfAdditionalAttachments;	// 0x3614ad11
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x3614ad49
// declared property getter: - (int)primaryType;	// 0x3614afcd
// declared property setter: - (void)setAdditionalAttachments:(id)attachments;	// 0x3614affd
// declared property setter: - (void)setClientSideComposedImageInfos:(id)infos;	// 0x3614b031
// declared property setter: - (void)setPrimaryType:(int)type;	// 0x3614afdd
@end

