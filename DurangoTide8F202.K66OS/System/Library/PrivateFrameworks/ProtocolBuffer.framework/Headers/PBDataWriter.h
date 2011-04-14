/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface PBDataWriter : NSObject {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x31f31831; converted property
- (id)init;	// 0x31f31e01
// converted property getter: - (id)data;	// 0x31f31831
- (void)dealloc;	// 0x31f31db9
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x31f31841
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x31f31949
- (void)writeBareVarint:(long long)varint;	// 0x31f31c4d
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x31f31e5d
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x31f31e85
- (void)writeBigEndianShortThenString:(id)string;	// 0x31f31d3d
- (BOOL)writeData:(id)data;	// 0x31f31869
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x31f318bd
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x31f31be9
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x31f31a2d
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x31f319f1
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x31f31bb1
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x31f31b7d
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x31f31b49
- (void)writeInt8:(BOOL)a8;	// 0x31f31ca9
- (void)writeProtoBuffer:(id)buffer;	// 0x31f31ccd
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x31f319b9
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x31f3197d
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x31f31aa5
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x31f31a65
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x31f31919
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x31f31c25
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x31f31b15
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x31f31ae1
@end

