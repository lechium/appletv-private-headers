/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PBCodable : NSObject {
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x3431867d; @dynamic
- (id)init;	// 0x34318579
- (id)initWithData:(id)data;	// 0x343185a5
// declared property getter: - (id)data;	// 0x3431867d
- (id)dictionaryRepresentation;	// 0x34318741
- (BOOL)readFrom:(id)from;	// 0x34318711
- (void)writeTo:(id)to;	// 0x3431872d
@end

