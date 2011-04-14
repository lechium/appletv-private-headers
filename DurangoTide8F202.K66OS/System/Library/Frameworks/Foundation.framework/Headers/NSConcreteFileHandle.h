/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFileHandle.h"


__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle : NSFileHandle {
@private
	int _fd;	// 4 = 0x4
	void *_nativeHandle;	// 8 = 0x8
	void *_avars;	// 12 = 0xc
	unsigned short _flags;	// 16 = 0x10
	dispatch_source_s *_dsrc;	// 20 = 0x14
	BOOL _padding[2];	// 24 = 0x18
	CFRunLoopSourceRef _source;	// 28 = 0x1c
	CFRunLoopRef _rl;	// 32 = 0x20
	unsigned short _activity;	// 36 = 0x24
	BOOL _padding2[2];	// 38 = 0x26
	int _error;	// 40 = 0x28
	void *_resultBytes;	// 44 = 0x2c
	unsigned _resultLength;	// 48 = 0x30
	int _resultSocket;	// 52 = 0x34
}
@property(retain) id port;	// G=0x32465631; S=0x32465635; converted property
- (id)initWithFileDescriptor:(int)fileDescriptor;	// 0x3246599d
- (id)initWithFileDescriptor:(int)fileDescriptor closeOnDealloc:(BOOL)dealloc;	// 0x32435181
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x32448bf9
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x32448c25
- (void)acceptConnectionInBackgroundAndNotify;	// 0x324658e1
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)modes;	// 0x324658f9
- (id)availableData;	// 0x32465dd5
- (void)closeFile;	// 0x32448d49
- (id)copyWithZone:(NSZone *)zone;	// 0x32465971
- (void)dealloc;	// 0x324351d5
- (int)fileDescriptor;	// 0x324351a9
- (void)finalize;	// 0x324661cd
- (unsigned long long)offsetInFile;	// 0x32465ec5
- (void)performActivity:(int)activity modes:(id)modes;	// 0x3246627d
// converted property getter: - (id)port;	// 0x32465631
- (id)readDataOfLength:(unsigned)length;	// 0x32435389
- (unsigned)readDataOfLength:(unsigned)length buffer:(char *)buffer;	// 0x32465f19
- (id)readDataToEndOfFile;	// 0x32465985
- (void)readInBackgroundAndNotify;	// 0x32465941
- (void)readInBackgroundAndNotifyForModes:(id)modes;	// 0x32465959
- (void)readToEndOfFileInBackgroundAndNotify;	// 0x32465911
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)modes;	// 0x32465929
- (unsigned long long)seekToEndOfFile;	// 0x32435291
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x3243534d
// converted property setter: - (void)setPort:(id)port;	// 0x32465635
- (void)synchronizeFile;	// 0x32466059
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x3244d479
- (void)waitForDataInBackgroundAndNotify;	// 0x324658b1
- (void)waitForDataInBackgroundAndNotifyForModes:(id)modes;	// 0x324658c9
- (void)writeData:(id)data;	// 0x3244d4d9
@end

