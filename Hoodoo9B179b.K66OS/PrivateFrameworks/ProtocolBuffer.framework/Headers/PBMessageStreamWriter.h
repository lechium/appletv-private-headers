/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class PBStreamWriter, PBDataWriter;

@interface PBMessageStreamWriter : NSObject {
	PBStreamWriter *_writer;	// 4 = 0x4
	PBDataWriter *_messageWriter;	// 8 = 0x8
}
@property(retain) PBDataWriter *messageWriter;	// G=0x33bf0f71; S=0x33bf0f85; @synthesize=_messageWriter
@property(retain) PBStreamWriter *writer;	// G=0x33bf0f39; S=0x33bf0f4d; @synthesize=_writer
- (id)initWithOutputStream:(id)outputStream;	// 0x33bf0d79
- (void)dealloc;	// 0x33bf0e1d
// declared property getter: - (id)messageWriter;	// 0x33bf0f71
// declared property setter: - (void)setMessageWriter:(id)writer;	// 0x33bf0f85
// declared property setter: - (void)setWriter:(id)writer;	// 0x33bf0f4d
- (BOOL)writeMessage:(id)message;	// 0x33bf0e75
// declared property getter: - (id)writer;	// 0x33bf0f39
@end

