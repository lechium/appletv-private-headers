/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSTask : NSObject {
}
@property(retain) id arguments;	// G=0x325b5399; S=0x325b51e9; converted property
@property(retain) id currentDirectoryPath;	// G=0x325b53bd; S=0x325b520d; converted property
@property(retain) id environment;	// G=0x325b5375; S=0x325b5231; converted property
@property(retain) id launchPath;	// G=0x325b5351; S=0x325b5255; converted property
@property(retain) id standardError;	// G=0x325b5495; S=0x325b5429; converted property
@property(retain) id standardInput;	// G=0x325b544d; S=0x325b53e1; converted property
@property(retain) id standardOutput;	// G=0x325b5471; S=0x325b5405; converted property
@property(copy) id terminationHandler;	// G=0x325b5111; S=0x325b5135; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x325b54e5
+ (id)currentTaskDictionary;	// 0x325b5531
+ (id)launchedTaskWithDictionary:(id)dictionary;	// 0x325b5625
+ (id)launchedTaskWithLaunchPath:(id)launchPath arguments:(id)arguments;	// 0x325b5679
- (id)init;	// 0x325b54b9
// converted property getter: - (id)arguments;	// 0x325b5399
// converted property getter: - (id)currentDirectoryPath;	// 0x325b53bd
// converted property getter: - (id)environment;	// 0x325b5375
- (void)interrupt;	// 0x325b5279
- (BOOL)isRunning;	// 0x325b51a1
- (void)launch;	// 0x325b51c5
// converted property getter: - (id)launchPath;	// 0x325b5351
- (int)processIdentifier;	// 0x325b532d
- (BOOL)resume;	// 0x325b52e5
// converted property setter: - (void)setArguments:(id)arguments;	// 0x325b51e9
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x325b520d
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x325b5231
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x325b5255
// converted property setter: - (void)setStandardError:(id)error;	// 0x325b5429
// converted property setter: - (void)setStandardInput:(id)input;	// 0x325b53e1
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x325b5405
// declared property setter: - (void)setTerminationHandler:(id)handler;	// 0x325b5135
// converted property getter: - (id)standardError;	// 0x325b5495
// converted property getter: - (id)standardInput;	// 0x325b544d
// converted property getter: - (id)standardOutput;	// 0x325b5471
- (BOOL)suspend;	// 0x325b52c1
- (int)suspendCount;	// 0x325b5309
- (void)terminate;	// 0x325b529d
// declared property getter: - (id)terminationHandler;	// 0x325b5111
- (int)terminationReason;	// 0x325b517d
- (int)terminationStatus;	// 0x325b5159
@end
