/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVDMAPBuffer : NSObject {
@private
	char *_bytes;	// 4 = 0x4
	int _capacity;	// 8 = 0x8
	int _bytesUsed;	// 12 = 0xc
	int _resizeCount;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) char *bytes;	// G=0x32b30519; @synthesize=_bytes
@property(readonly, assign, nonatomic) int bytesUsed;	// G=0x32b30509; @synthesize=_bytesUsed
+ (id)buffer;	// 0x32b2f0b9
+ (id)bufferWithCapacity:(unsigned long)capacity;	// 0x32b2f101
- (id)init;	// 0x32b2f149
- (id)initWithCapacity:(unsigned long)capacity;	// 0x32b2f15d
- (void)addFloat32:(unsigned long)a32 dataToAdd:(float)add;	// 0x32b2f3fd
- (unsigned long)addHeader:(unsigned long)header;	// 0x32b2f215
- (void)addInt16:(unsigned long)a16 dataToAdd:(unsigned short)add;	// 0x32b2f2f9
- (void)addInt32:(unsigned long)a32 dataToAdd:(unsigned long)add;	// 0x32b2f34d
- (void)addInt64:(unsigned long)a64 dataToAdd:(unsigned long long)add;	// 0x32b2f399
- (void)addInt8:(unsigned long)a8 dataToAdd:(unsigned char)add;	// 0x32b2f2b1
- (void)addMLProperty:(id)property dataToAdd:(id)add;	// 0x32b2f535
- (void)addUTF8Str:(unsigned long)str dataToAdd:(const char *)add;	// 0x32b2f40d
- (void)appendBuffer:(const void *)buffer length:(unsigned long)length;	// 0x32b2f46d
- (id)bufferData;	// 0x32b304cd
// declared property getter: - (char *)bytes;	// 0x32b30519
// declared property getter: - (int)bytesUsed;	// 0x32b30509
- (void)dealloc;	// 0x32b2f1d1
- (unsigned long)dmapCodeForMLProperty:(id)mlproperty;	// 0x32b2f655
- (int)dmapDataTypeForDMAPCode:(unsigned long)dmapcode;	// 0x32b3007d
- (void)updateHeaderAtOffset:(unsigned long)offset;	// 0x32b2f25d
@end

