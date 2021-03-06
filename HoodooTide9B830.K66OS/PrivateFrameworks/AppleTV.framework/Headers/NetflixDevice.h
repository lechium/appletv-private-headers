/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSMutableDictionary, NSMutableArray, Netflix, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NetflixDevice : NetflixNrdObject <NetflixNrdObjectProtocol> {
@private
	Netflix *netflix_;	// 12 = 0xc
}
@property(readonly, assign) NSString *ESN;	// G=0x32c3fa1d; 
@property(readonly, assign) NSString *ESNPrefix;	// G=0x32c3f9a5; 
@property(readonly, assign) unsigned PC_NATIVE;	// G=0x32c40bd1; 
@property(readonly, assign) unsigned PC_NONE;	// G=0x32c40bc9; 
@property(readonly, assign) unsigned PC_PIN;	// G=0x32c40bcd; 
@property(readonly, assign) NSMutableDictionary *SDKVersion;	// G=0x32c3fa95; 
@property(copy) NSMutableArray *UILanguages;	// G=0x32c40e5d; S=0x32c40ed5; 
@property(readonly, assign) NSDictionary *capability;	// G=0x32c40cb5; 
@property(readonly, assign) unsigned certificationVersion;	// G=0x32c3f93d; 
@property(readonly, assign) BOOL isScreenSaverOn;	// G=0x32c40da5; 
@property(readonly, assign) NSString *language;	// G=0x32c40b51; 
@property(retain) Netflix *netflix;	// G=0x32c41371; S=0x32c41385; @synthesize=netflix_
@property(readonly, assign) unsigned parentalControlOverrideType;	// G=0x32c40c4d; 
@property(readonly, assign) NSString *parentalControlRating;	// G=0x32c40bd5; 
@property(readonly, assign) NSString *softwareVersion;	// G=0x32c3f8c5; 
@property(readonly, assign) NSDictionary *videoOutput;	// G=0x32c40d2d; 
+ (id)sharedInstance;	// 0x32c3f7e5
// declared property getter: - (id)ESN;	// 0x32c3fa1d
// declared property getter: - (id)ESNPrefix;	// 0x32c3f9a5
// declared property getter: - (unsigned)PC_NATIVE;	// 0x32c40bd1
// declared property getter: - (unsigned)PC_NONE;	// 0x32c40bc9
// declared property getter: - (unsigned)PC_PIN;	// 0x32c40bcd
// declared property getter: - (id)SDKVersion;	// 0x32c3fa95
// declared property getter: - (id)UILanguages;	// 0x32c40e5d
- (void)addEventListener:(id)listener name:(id)name;	// 0x32c412e1
// declared property getter: - (id)capability;	// 0x32c40cb5
// declared property getter: - (unsigned)certificationVersion;	// 0x32c3f93d
// declared property getter: - (BOOL)isScreenSaverOn;	// 0x32c40da5
// declared property getter: - (id)language;	// 0x32c40b51
// declared property getter: - (id)netflix;	// 0x32c41371
// declared property getter: - (unsigned)parentalControlOverrideType;	// 0x32c40c4d
// declared property getter: - (id)parentalControlRating;	// 0x32c40bd5
- (void)removeEventListener:(id)listener name:(id)name;	// 0x32c41329
// declared property setter: - (void)setNetflix:(id)netflix;	// 0x32c41385
// declared property setter: - (void)setUILanguages:(id)languages;	// 0x32c40ed5
- (void)setUIVersion:(id)version;	// 0x32c40e0d
// declared property getter: - (id)softwareVersion;	// 0x32c3f8c5
- (void)updateProperty:(id)property value:(id)value;	// 0x32c41015
// declared property getter: - (id)videoOutput;	// 0x32c40d2d
@end

