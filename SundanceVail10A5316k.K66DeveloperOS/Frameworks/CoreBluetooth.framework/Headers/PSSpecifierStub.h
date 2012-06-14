/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library

@class BluetoothDevice;

@interface PSSpecifierStub : NSObject {
	BluetoothDevice *_device;	// 4 = 0x4
	id _userInfo;	// 8 = 0x8
@private
	id userInfo;	// 12 = 0xc
	BluetoothDevice *device;	// 16 = 0x10
}
@property(retain, nonatomic) BluetoothDevice *device;	// G=0x34abba3d; S=0x34abba4d; @synthesize
@property(retain, nonatomic) id userInfo;	// G=0x34abba1d; S=0x34abba2d; @synthesize
- (void)dealloc;	// 0x34abb9b9
// declared property getter: - (id)device;	// 0x34abba3d
// declared property setter: - (void)setDevice:(id)device;	// 0x34abba4d
// declared property setter: - (void)setUserInfo:(id)info;	// 0x34abba2d
// declared property getter: - (id)userInfo;	// 0x34abba1d
@end

