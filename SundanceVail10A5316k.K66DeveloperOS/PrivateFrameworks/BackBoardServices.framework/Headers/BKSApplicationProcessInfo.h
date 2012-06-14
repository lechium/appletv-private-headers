/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import "BackBoardServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"

@class NSNumber, NSString, BKSMachSendRight;

@interface BKSApplicationProcessInfo : NSObject <NSCopying, BKSXPCCoding> {
@private
	NSString *_bundleIdentifier;	// 4 = 0x4
	NSNumber *_pidNumber;	// 8 = 0x8
	NSNumber *_beingDebugged;	// 12 = 0xc
	BKSMachSendRight *_eventPort;	// 16 = 0x10
	BOOL _suspended;	// 20 = 0x14
	BOOL _classic;	// 21 = 0x15
}
@property(retain, nonatomic) NSNumber *beingDebugged;	// G=0x3062c0fd; S=0x3062c10d; @synthesize=_beingDebugged
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x3062c0b9; S=0x3062c0cd; @synthesize=_bundleIdentifier
@property(assign, nonatomic) BOOL classic;	// G=0x3062c15d; S=0x3062c16d; @synthesize=_classic
@property(retain, nonatomic) BKSMachSendRight *eventPort;	// G=0x3062c11d; S=0x3062c12d; @synthesize=_eventPort
@property(retain, nonatomic) NSNumber *pidNumber;	// G=0x3062c0dd; S=0x3062c0ed; @synthesize=_pidNumber
@property(assign, nonatomic) BOOL suspended;	// G=0x3062c13d; S=0x3062c14d; @synthesize=_suspended
- (id)initWithInfo:(id)info zone:(NSZone *)zone;	// 0x3062bc2d
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x3062bf01
// declared property getter: - (id)beingDebugged;	// 0x3062c0fd
// declared property getter: - (id)bundleIdentifier;	// 0x3062c0b9
// declared property getter: - (BOOL)classic;	// 0x3062c15d
- (id)copyWithZone:(NSZone *)zone;	// 0x3062bebd
- (void)dealloc;	// 0x3062bd49
- (id)description;	// 0x3062bdc1
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x3062bfed
// declared property getter: - (id)eventPort;	// 0x3062c11d
// declared property getter: - (id)pidNumber;	// 0x3062c0dd
// declared property setter: - (void)setBeingDebugged:(id)debugged;	// 0x3062c10d
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3062c0cd
// declared property setter: - (void)setClassic:(BOOL)classic;	// 0x3062c16d
// declared property setter: - (void)setEventPort:(id)port;	// 0x3062c12d
// declared property setter: - (void)setPidNumber:(id)number;	// 0x3062c0ed
// declared property setter: - (void)setSuspended:(BOOL)suspended;	// 0x3062c14d
// declared property getter: - (BOOL)suspended;	// 0x3062c13d
@end

