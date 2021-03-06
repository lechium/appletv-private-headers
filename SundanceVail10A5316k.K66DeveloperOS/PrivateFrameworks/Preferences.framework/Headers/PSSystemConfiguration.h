/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library
#import "Preferences-Structs.h"


@interface PSSystemConfiguration : NSObject {
	SCPreferencesRef _prefs;	// 4 = 0x4
}
+ (void)releaseSharedInstance;	// 0x372a8649
+ (id)sharedInstance;	// 0x372a8601
- (CFStringRef)dataServiceID;	// 0x372a8751
- (void)dealloc;	// 0x372a8675
- (CFStringRef)getServiceIDForPDPContext:(unsigned)pdpcontext;	// 0x372a8991
- (id)interfaceConfigurationValueForKey:(CFStringRef)key serviceID:(CFStringRef)anId;	// 0x372a8acd
- (unsigned char)lockAndSynchronize;	// 0x372a86b9
- (id)protocolConfiguration:(CFStringRef)configuration serviceID:(CFStringRef)anId;	// 0x372a8cdd
- (id)protocolConfigurationValueForKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x372a8e65
- (void)setInterfaceConfigurationValue:(id)value forKey:(CFStringRef)key serviceID:(CFStringRef)anId;	// 0x372a8b79
- (void)setProtocolConfiguration:(id)configuration protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x372a8d85
- (void)setProtocolConfigurationValue:(id)value forKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x372a8f21
- (void)unlockAndSynchronize;	// 0x372a8721
- (CFStringRef)voicemailServiceID;	// 0x372a8871
@end

