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
@property(retain, nonatomic) NSCountedSet *additionalAttachments;	// G=0x36e31fed; S=0x36e31ffd; @synthesize=_additionalAttachments
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos;	// G=0x36e32021; S=0x36e32031; @synthesize=_clientSideComposedImageInfos
@property(assign, nonatomic) int primaryType;	// G=0x36e31fcd; S=0x36e31fdd; @synthesize
- (id)initWithCoder:(id)coder;	// 0x36e31ead
- (void)addAttachmentOfType:(int)type;	// 0x36e31c85
// declared property getter: - (id)additionalAttachments;	// 0x36e31fed
// declared property getter: - (id)clientSideComposedImageInfos;	// 0x36e32021
- (id)copyWithZone:(NSZone *)zone;	// 0x36e31dfd
- (void)dealloc;	// 0x36e31c25
- (void)encodeWithCoder:(id)coder;	// 0x36e31f61
- (BOOL)isEqualToAttachments:(id)attachments;	// 0x36e31d91
- (unsigned)numberOfAdditionalAttachments;	// 0x36e31d11
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x36e31d49
// declared property getter: - (int)primaryType;	// 0x36e31fcd
// declared property setter: - (void)setAdditionalAttachments:(id)attachments;	// 0x36e31ffd
// declared property setter: - (void)setClientSideComposedImageInfos:(id)infos;	// 0x36e32031
// declared property setter: - (void)setPrimaryType:(int)type;	// 0x36e31fdd
@end

