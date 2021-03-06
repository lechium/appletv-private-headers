/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface Device : NSObject {
	NSString *_deviceName;	// 4 = 0x4
	NSDictionary *_versionDict;	// 8 = 0x8
}
@property(readonly, retain) NSString *deviceName;	// G=0x325ab78d; converted property
@property(readonly, retain) NSDictionary *versionDict;	// G=0x325ab7c1; converted property
+ (BOOL)hasBaseband;	// 0x325ab8e5
+ (BOOL)hasCompass;	// 0x325ab87d
+ (BOOL)hasGyro;	// 0x325ab8b1
+ (BOOL)hasWiFi;	// 0x325ab849
+ (id)productBuildVersion;	// 0x325ab7e9
+ (id)sharedInstance;	// 0x325ab69d
- (id)init;	// 0x325ab6d9
- (void)dealloc;	// 0x325ab72d
// converted property getter: - (id)deviceName;	// 0x325ab78d
- (id)modelName;	// 0x325ab759
// converted property getter: - (id)versionDict;	// 0x325ab7c1
@end

