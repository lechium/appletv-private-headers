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
@property(readonly, assign, nonatomic) char *bytes;	// G=0x303ec739; @synthesize=_bytes
@property(readonly, assign, nonatomic) int bytesUsed;	// G=0x303ec729; @synthesize=_bytesUsed
+ (id)buffer;	// 0x303eb2d9
+ (id)bufferWithCapacity:(unsigned long)capacity;	// 0x303eb321
- (id)init;	// 0x303eb369
- (id)initWithCapacity:(unsigned long)capacity;	// 0x303eb37d
- (void)addFloat32:(unsigned long)a32 dataToAdd:(float)add;	// 0x303eb61d
- (unsigned long)addHeader:(unsigned long)header;	// 0x303eb435
- (void)addInt16:(unsigned long)a16 dataToAdd:(unsigned short)add;	// 0x303eb519
- (void)addInt32:(unsigned long)a32 dataToAdd:(unsigned long)add;	// 0x303eb56d
- (void)addInt64:(unsigned long)a64 dataToAdd:(unsigned long long)add;	// 0x303eb5b9
- (void)addInt8:(unsigned long)a8 dataToAdd:(unsigned char)add;	// 0x303eb4d1
- (void)addMLProperty:(id)property dataToAdd:(id)add;	// 0x303eb755
- (void)addUTF8Str:(unsigned long)str dataToAdd:(const char *)add;	// 0x303eb62d
- (void)appendBuffer:(const void *)buffer length:(unsigned long)length;	// 0x303eb68d
- (id)bufferData;	// 0x303ec6ed
// declared property getter: - (char *)bytes;	// 0x303ec739
// declared property getter: - (int)bytesUsed;	// 0x303ec729
- (void)dealloc;	// 0x303eb3f1
- (unsigned long)dmapCodeForMLProperty:(id)mlproperty;	// 0x303eb875
- (int)dmapDataTypeForDMAPCode:(unsigned long)dmapcode;	// 0x303ec29d
- (void)updateHeaderAtOffset:(unsigned long)offset;	// 0x303eb47d
@end

