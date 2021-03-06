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
@property(retain, nonatomic) NSCountedSet *additionalAttachments;	// G=0x335736ed; S=0x335736fd; @synthesize=_additionalAttachments
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos;	// G=0x3357370d; S=0x3357371d; @synthesize=_clientSideComposedImageInfos
@property(assign, nonatomic) int primaryType;	// G=0x335736cd; S=0x335736dd; @synthesize
- (id)initWithCoder:(id)coder;	// 0x335735ad
- (void)addAttachmentOfType:(int)type;	// 0x33573385
// declared property getter: - (id)additionalAttachments;	// 0x335736ed
// declared property getter: - (id)clientSideComposedImageInfos;	// 0x3357370d
- (id)copyWithZone:(NSZone *)zone;	// 0x335734fd
- (void)dealloc;	// 0x33573321
- (void)encodeWithCoder:(id)coder;	// 0x33573661
- (BOOL)isEqualToAttachments:(id)attachments;	// 0x3357348d
- (unsigned)numberOfAdditionalAttachments;	// 0x33573411
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x33573445
// declared property getter: - (int)primaryType;	// 0x335736cd
// declared property setter: - (void)setAdditionalAttachments:(id)attachments;	// 0x335736fd
// declared property setter: - (void)setClientSideComposedImageInfos:(id)infos;	// 0x3357371d
// declared property setter: - (void)setPrimaryType:(int)type;	// 0x335736dd
@end

