/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVDMAPBuffer : XXUnknownSuperclass {
	char *_bytes;	// 4 = 0x4
	int _capacity;	// 8 = 0x8
	int _bytesUsed;	// 12 = 0xc
	int _resizeCount;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) char *bytes;	// G=0x3b5b1; @synthesize=_bytes
@property(readonly, assign, nonatomic) int bytesUsed;	// G=0x3b5a1; @synthesize=_bytesUsed
+ (id)buffer;	// 0x39c8d
+ (id)bufferWithCapacity:(unsigned long)capacity;	// 0x39cd5
- (id)init;	// 0x39d1d
- (id)initWithCapacity:(unsigned long)capacity;	// 0x39d31
- (void)_addDMAPCode:(unsigned long)code property:(id)property dataToAdd:(id)add;	// 0x3a241
- (void)addATVProperty:(id)property dataToAdd:(id)add;	// 0x3a201
- (void)addData:(unsigned long)data dataToAdd:(id)add;	// 0x3a035
- (void)addFloat32:(unsigned long)a32 dataToAdd:(float)add;	// 0x39fc5
- (unsigned long)addHeader:(unsigned long)header;	// 0x39de5
- (void)addInt16:(unsigned long)a16 dataToAdd:(unsigned short)add;	// 0x39ec9
- (void)addInt32:(unsigned long)a32 dataToAdd:(unsigned long)add;	// 0x39f19
- (void)addInt64:(unsigned long)a64 dataToAdd:(unsigned long long)add;	// 0x39f65
- (void)addInt8:(unsigned long)a8 dataToAdd:(unsigned char)add;	// 0x39e7d
- (void)addMLProperty:(id)property dataToAdd:(id)add;	// 0x3a1c5
- (void)addRawInt32:(unsigned long)a32;	// 0x3a0b9
- (void)addRawInt64:(unsigned long long)a64;	// 0x3a0dd
- (void)addUTF8Str:(unsigned long)str dataToAdd:(const char *)add;	// 0x39fd5
- (void)appendBuffer:(const void *)buffer length:(unsigned long)length;	// 0x3a10d
- (id)bufferData;	// 0x3b565
// declared property getter: - (char *)bytes;	// 0x3b5b1
// declared property getter: - (int)bytesUsed;	// 0x3b5a1
- (void)dealloc;	// 0x39da1
- (unsigned long)dmapCodeForATVProperty:(id)atvproperty;	// 0x3aec5
- (unsigned long)dmapCodeForMLProperty:(id)mlproperty;	// 0x3a415
- (int)dmapDataTypeForDMAPCode:(unsigned long)dmapcode;	// 0x3b099
- (void)updateHeaderAtOffset:(unsigned long)offset;	// 0x39e2d
@end
