/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library

@class NSInputStream, NSOutputStream, NSString, EAAccessory;

@interface EASession : NSObject {
@private
	EAAccessory *_accessory;	// 4 = 0x4
	unsigned _sessionID;	// 8 = 0x8
	NSString *_protocolString;	// 12 = 0xc
	NSInputStream *_inputStream;	// 16 = 0x10
	NSOutputStream *_outputStream;	// 20 = 0x14
	BOOL _openCompleted;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) EAAccessory *accessory;	// G=0x31532175; @synthesize=_accessory
@property(readonly, assign, nonatomic) NSInputStream *inputStream;	// G=0x31532195; @synthesize=_inputStream
@property(assign, getter=isOpenCompleted) BOOL openCompleted;	// G=0x315320d9; S=0x315320e9; converted property
@property(readonly, assign, nonatomic) NSOutputStream *outputStream;	// G=0x315321a5; @synthesize=_outputStream
@property(readonly, assign, nonatomic) NSString *protocolString;	// G=0x31532185; @synthesize=_protocolString
- (id)init;	// 0x31531bf1
- (id)initWithAccessory:(id)accessory forProtocol:(id)protocol;	// 0x31531c29
- (void)_endStreams;	// 0x3153209d
- (unsigned)_sessionID;	// 0x31532029
- (id)_shortDescription;	// 0x31531fd1
- (void)_streamClosed;	// 0x31532039
// declared property getter: - (id)accessory;	// 0x31532175
- (void)dealloc;	// 0x31531e29
- (id)description;	// 0x31531f21
// declared property getter: - (id)inputStream;	// 0x31532195
// converted property getter: - (BOOL)isOpenCompleted;	// 0x315320d9
// declared property getter: - (id)outputStream;	// 0x315321a5
// declared property getter: - (id)protocolString;	// 0x31532185
// converted property setter: - (void)setOpenCompleted:(BOOL)completed;	// 0x315320e9
@end

