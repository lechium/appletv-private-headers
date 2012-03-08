/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class PBStreamReader;
@protocol PBMessageStreamDelegate;

@interface PBMessageStreamReader : NSObject {
	PBStreamReader *_reader;	// 4 = 0x4
	Class _classOfNextMessage;	// 8 = 0x8
	id<PBMessageStreamDelegate> _delegate;	// 12 = 0xc
}
@property(assign) Class classOfNextMessage;	// G=0x33bf0d59; S=0x33bf0d69; @synthesize=_classOfNextMessage
@property(retain) id<PBMessageStreamDelegate> delegate;	// G=0x33bf0d21; S=0x33bf0d35; @synthesize=_delegate
@property(retain) PBStreamReader *reader;	// G=0x33bf0ce9; S=0x33bf0cfd; @synthesize=_reader
- (id)initWithStream:(id)stream;	// 0x33bf0ad1
// declared property getter: - (Class)classOfNextMessage;	// 0x33bf0d59
- (void)dealloc;	// 0x33bf0b41
// declared property getter: - (id)delegate;	// 0x33bf0d21
- (id)nextMessage;	// 0x33bf0b85
// declared property getter: - (id)reader;	// 0x33bf0ce9
// declared property setter: - (void)setClassOfNextMessage:(Class)nextMessage;	// 0x33bf0d69
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33bf0d35
// declared property setter: - (void)setReader:(id)reader;	// 0x33bf0cfd
@end

