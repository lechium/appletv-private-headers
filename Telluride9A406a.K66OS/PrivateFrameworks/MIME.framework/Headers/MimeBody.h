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
	unsigned _preferredTextEncoding;	// 12 = 0xc
	unsigned _preferredAlternative : 16;	// 16 = 0x10
	unsigned _numAlternatives : 16;	// 18 = 0x12
}
@property(assign) int preferredAlternative;	// G=0x325a9bad; S=0x325a9d05; converted property
@property(assign) unsigned long preferredTextEncoding;	// G=0x325a9895; S=0x325a98a5; converted property
@property(retain) MimePart *topLevelPart;	// G=0x325a9885; S=0x325aa2cd; converted property
+ (id)copyNewMimeBoundary;	// 0x325a9905
+ (id)versionString;	// 0x325a9965
- (id)init;	// 0x325a98b5
- (id)attachments;	// 0x325aa0f5
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x325a9e99
- (void)dealloc;	// 0x325aa325
- (BOOL)isHTML;	// 0x325aa05d
- (BOOL)isRich;	// 0x325a9fb9
- (id)mimeSubtype;	// 0x325aa27d
- (id)mimeType;	// 0x325aa2a5
- (int)numberOfAlternatives;	// 0x325a9db1
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x325aa131
- (id)partWithNumber:(id)number;	// 0x325aa181
// converted property getter: - (int)preferredAlternative;	// 0x325a9bad
- (id)preferredBodyPart;	// 0x325a9ae9
// converted property getter: - (unsigned long)preferredTextEncoding;	// 0x325a9895
// converted property setter: - (void)setPreferredAlternative:(int)alternative;	// 0x325a9d05
// converted property setter: - (void)setPreferredTextEncoding:(unsigned long)encoding;	// 0x325a98a5
// converted property setter: - (void)setTopLevelPart:(id)part;	// 0x325aa2cd
- (id)textHtmlPart;	// 0x325a9a2d
// converted property getter: - (id)topLevelPart;	// 0x325a9885
- (unsigned)totalTextSize;	// 0x325a9e79
@end

