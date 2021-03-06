/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSString, NSDictionary, NSArray;

@interface BKSApplicationLaunchSettings : NSObject <NSCopying, BKSXPCCoding> {
	NSDictionary *_environment;	// 4 = 0x4
	BOOL _waitForDebugger;	// 8 = 0x8
	BOOL _disableASLR;	// 9 = 0x9
	BOOL _checkForLeaks;	// 10 = 0xa
	NSArray *_arguments;	// 12 = 0xc
	NSString *_standardOut;	// 16 = 0x10
	NSString *_standardError;	// 20 = 0x14
}
@property(retain, nonatomic) NSArray *arguments;	// G=0x315dc4ad; S=0x315dc4bd; @synthesize=_arguments
@property(assign, nonatomic) BOOL checkForLeaks;	// G=0x315dc48d; S=0x315dc49d; @synthesize=_checkForLeaks
@property(assign, nonatomic) BOOL disableASLR;	// G=0x315dc46d; S=0x315dc47d; @synthesize=_disableASLR
@property(retain, nonatomic) NSDictionary *environment;	// G=0x315dc42d; S=0x315dc43d; @synthesize=_environment
@property(copy, nonatomic) NSString *standardError;	// G=0x315dc4f1; S=0x315dc505; @synthesize=_standardError
@property(copy, nonatomic) NSString *standardOut;	// G=0x315dc4cd; S=0x315dc4e1; @synthesize=_standardOut
@property(assign, nonatomic) BOOL waitForDebugger;	// G=0x315dc44d; S=0x315dc45d; @synthesize=_waitForDebugger
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x315dbe61
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x315dc235
// declared property getter: - (id)arguments;	// 0x315dc4ad
// declared property getter: - (BOOL)checkForLeaks;	// 0x315dc48d
- (id)copyWithZone:(NSZone *)zone;	// 0x315dc1f9
- (void)dealloc;	// 0x315dbfb1
- (id)description;	// 0x315dc03d
// declared property getter: - (BOOL)disableASLR;	// 0x315dc46d
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x315dc33d
// declared property getter: - (id)environment;	// 0x315dc42d
// declared property setter: - (void)setArguments:(id)arguments;	// 0x315dc4bd
// declared property setter: - (void)setCheckForLeaks:(BOOL)leaks;	// 0x315dc49d
// declared property setter: - (void)setDisableASLR:(BOOL)aslr;	// 0x315dc47d
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x315dc43d
// declared property setter: - (void)setStandardError:(id)error;	// 0x315dc505
// declared property setter: - (void)setStandardOut:(id)anOut;	// 0x315dc4e1
// declared property setter: - (void)setWaitForDebugger:(BOOL)debugger;	// 0x315dc45d
// declared property getter: - (id)standardError;	// 0x315dc4f1
// declared property getter: - (id)standardOut;	// 0x315dc4cd
// declared property getter: - (BOOL)waitForDebugger;	// 0x315dc44d
@end

