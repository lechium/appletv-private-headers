/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class Message;

@interface MessageBody : NSObject {
	Message *_message;	// 4 = 0x4
}
@property(retain) Message *message;	// G=0x366c6149; S=0x366c60fd; converted property
- (id)attachments;	// 0x366c615d
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x366c6091
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x366c60d9
- (void)dealloc;	// 0x366c622d
- (id)htmlContent;	// 0x366c60dd
- (id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x366c60b5
- (BOOL)isHTML;	// 0x366c60f5
- (BOOL)isRich;	// 0x366c60f9
// converted property getter: - (id)message;	// 0x366c6149
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x366c6159
- (id)rawData;	// 0x366c6071
// converted property setter: - (void)setMessage:(id)message;	// 0x366c60fd
- (id)textHtmlPart;	// 0x366c6229
@end

