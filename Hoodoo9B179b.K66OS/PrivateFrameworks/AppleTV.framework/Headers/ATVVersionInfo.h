/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface ATVVersionInfo : NSObject {
}
+ (int)compareEFIVersion:(id)version withEFIVersion:(id)efiversion;	// 0x301c5fa1
+ (int)compareIRVersion:(id)version withIRVersion:(id)irversion;	// 0x301c6019
+ (int)compareOSVersion:(id)version andBuild:(id)build withOSVersion:(id)osversion andBuild:(id)build4;	// 0x301c5e01
+ (int)compareSIVersion:(id)version withSIVersion:(id)siversion;	// 0x301c6161
+ (id)currentEFIVersion;	// 0x301c5f25
+ (id)currentIRVersion;	// 0x301c5fe5
+ (id)currentOSBuildVersion;	// 0x301c5dd9
+ (id)currentOSVersion;	// 0x301c5db1
+ (id)currentSIBootVersion;	// 0x301c6131
+ (id)currentSIMainVersion;	// 0x301c6125
+ (BOOL)isSIFirmwareValid;	// 0x301c615d
@end

