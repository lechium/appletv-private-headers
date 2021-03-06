/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface UIKeyboardCandidate : NSObject <NSCopying> {
	NSString *_alternativeText;	// 4 = 0x4
	NSString *_accessibilityLabel;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *accessibilityLabel;	// G=0x3051dd15; @synthesize=_accessibilityLabel
@property(copy, nonatomic) NSString *alternativeText;	// G=0x3051deb1; S=0x3051dec5; @synthesize=_alternativeText
@property(readonly, assign, nonatomic) NSString *candidate;	// G=0x3051dcf9; 
@property(readonly, assign, nonatomic) unsigned deleteCount;	// G=0x3051dd11; 
@property(readonly, assign, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;	// G=0x3051dea9; 
@property(readonly, assign, nonatomic) NSString *input;	// G=0x3051dcfd; 
@property(readonly, assign, nonatomic) BOOL isAutocorrection;	// G=0x303318b9; 
@property(readonly, assign, nonatomic) BOOL isForShortcutConversion;	// G=0x303318bd; 
@property(readonly, assign, nonatomic) NSString *label;	// G=0x3051dd01; 
@property(readonly, assign, nonatomic) NSArray *usageTrackingTypes;	// G=0x3051dead; 
@property(readonly, assign, nonatomic) unsigned wordOriginFeedbackID;	// G=0x303318e9; 
// declared property getter: - (id)accessibilityLabel;	// 0x3051dd15
// declared property getter: - (id)alternativeText;	// 0x3051deb1
// declared property getter: - (id)candidate;	// 0x3051dcf9
- (id)copyWithZone:(NSZone *)zone;	// 0x3051ddb1
- (void)dealloc;	// 0x3033a54d
// declared property getter: - (unsigned)deleteCount;	// 0x3051dd11
- (unsigned)hash;	// 0x3051de81
// declared property getter: - (id)input;	// 0x3051dcfd
// declared property getter: - (BOOL)isAutocorrection;	// 0x303318b9
- (BOOL)isEqual:(id)equal;	// 0x3051dde5
// declared property getter: - (BOOL)isExtensionCandidate;	// 0x3051dea9
// declared property getter: - (BOOL)isForShortcutConversion;	// 0x303318bd
// declared property getter: - (id)label;	// 0x3051dd01
// declared property setter: - (void)setAlternativeText:(id)text;	// 0x3051dec5
// declared property getter: - (id)usageTrackingTypes;	// 0x3051dead
// declared property getter: - (unsigned)wordOriginFeedbackID;	// 0x303318e9
@end

