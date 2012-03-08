/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDictionary;

@interface NSProcessInfo : NSObject {
@private
	NSDictionary *environment;	// 4 = 0x4
	NSArray *arguments;	// 8 = 0x8
	NSString *hostName;	// 12 = 0xc
	NSString *name;	// 16 = 0x10
	int automaticTerminationOptOutCounter;	// 20 = 0x14
}
@property(retain) NSArray *arguments;	// G=0x35df4801; S=0x35e6adf5; converted property
@property(readonly, retain) NSDictionary *environment;	// G=0x35e6a9e1; converted property
@property(readonly, retain) NSString *hostName;	// G=0x35e6aed5; converted property
@property(retain) id processName;	// G=0x35e0559d; S=0x35e6b041; converted property
+ (id)processInfo;	// 0x35df4779
- (id)init;	// 0x35df47a5
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)status;	// 0x35e6b3d5
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)status;	// 0x35e6b3d9
- (int)_suddenTerminationDisablingCount;	// 0x35e6b3dd
- (unsigned)activeProcessorCount;	// 0x35e6b2c9
// converted property getter: - (id)arguments;	// 0x35df4801
- (void)dealloc;	// 0x35e6a959
- (void)disableSuddenTermination;	// 0x35e6b3cd
- (void)enableSuddenTermination;	// 0x35e6b3d1
// converted property getter: - (id)environment;	// 0x35e6a9e1
- (id)globallyUniqueString;	// 0x35e6b121
// converted property getter: - (id)hostName;	// 0x35e6aed5
- (BOOL)isTranslated;	// 0x35e6b375
- (unsigned)operatingSystem;	// 0x35e6b1d1
- (id)operatingSystemName;	// 0x35e6b1d5
- (id)operatingSystemVersionString;	// 0x35e6b241
- (unsigned long long)physicalMemory;	// 0x35e6b319
- (int)processIdentifier;	// 0x35dfeef5
// converted property getter: - (id)processName;	// 0x35e0559d
- (unsigned)processorCount;	// 0x35e6b26d
// converted property setter: - (void)setArguments:(id)arguments;	// 0x35e6adf5
// converted property setter: - (void)setProcessName:(id)name;	// 0x35e6b041
- (double)systemUptime;	// 0x35e6b3c9
- (id)userFullName;	// 0x35e6b1c9
- (id)userHomeDirectory;	// 0x35e6b1cd
- (id)userName;	// 0x35e6b1c5
@end

