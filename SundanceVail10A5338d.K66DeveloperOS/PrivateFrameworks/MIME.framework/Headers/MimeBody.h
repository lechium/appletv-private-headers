/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageBody.h"

@class MimePart;

@interface MimeBody : MessageBody {
	MimePart *_topLevelPart;	// 8 = 0x8
	unsigned _preferredAlternative : 16;	// 12 = 0xc
	unsigned _numAlternatives : 16;	// 14 = 0xe
}
@property(assign) int preferredAlternative;	// G=0x36b2e131; S=0x36b2e08d; converted property
@property(retain) MimePart *topLevelPart;	// G=0x36b2da11; S=0x36b2da21; converted property
+ (id)copyNewMimeBoundary;	// 0x36b2d921
+ (id)versionString;	// 0x36b2d865
- (id)init;	// 0x36b2d981
- (id)attachments;	// 0x36b2dd19
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x36b2de89
- (void)dealloc;	// 0x36b2d9c5
- (id)firstPartPassingTest:(id)test;	// 0x36b2dc1d
- (BOOL)isHTML;	// 0x36b2dd59
- (BOOL)isRich;	// 0x36b2ddf1
- (id)mimeSubtype;	// 0x36b2da9d
- (id)mimeType;	// 0x36b2da75
- (int)numberOfAlternatives;	// 0x36b2dfc1
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x36b2dcbd
- (id)partWithNumber:(id)number;	// 0x36b2dac5
// converted property getter: - (int)preferredAlternative;	// 0x36b2e131
- (id)preferredBodyPart;	// 0x36b2e28d
// converted property setter: - (void)setPreferredAlternative:(int)alternative;	// 0x36b2e08d
// converted property setter: - (void)setTopLevelPart:(id)part;	// 0x36b2da21
- (id)textHtmlPart;	// 0x36b2e345
// converted property getter: - (id)topLevelPart;	// 0x36b2da11
- (unsigned)totalTextSize;	// 0x36b2dfa1
@end
