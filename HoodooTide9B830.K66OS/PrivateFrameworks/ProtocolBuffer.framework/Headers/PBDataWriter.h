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
@property(readonly, retain) NSMutableData *data;	// G=0x36e414a9; converted property
- (id)init;	// 0x36e413f9
// converted property getter: - (id)data;	// 0x36e414a9
- (void)dealloc;	// 0x36e4145d
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x36e41abd
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x36e41999
- (void)writeBareVarint:(long long)varint;	// 0x36e41621
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x36e414b9
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x36e414e1
- (void)writeBigEndianShortThenString:(id)string;	// 0x36e41505
- (BOOL)writeData:(id)data;	// 0x36e41a6d
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x36e41a09
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x36e416a5
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x36e41891
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x36e418cd
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x36e416ed
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x36e41729
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x36e41761
- (void)writeInt8:(BOOL)a8;	// 0x36e415fd
- (void)writeProtoBuffer:(id)buffer;	// 0x36e41589
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x36e41915
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x36e41951
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x36e41811
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x36e4184d
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x36e419d1
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x36e41679
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x36e4179d
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x36e417d5
@end
