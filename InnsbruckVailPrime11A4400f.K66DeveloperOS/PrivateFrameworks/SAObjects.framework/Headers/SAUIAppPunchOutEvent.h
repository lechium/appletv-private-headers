/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSURL, NSString;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appDisplayName;	// G=0x326e37bd; S=0x326e37d9; 
@property(copy, nonatomic) NSString *bundleId;	// G=0x326e3829; S=0x326e3845; 
@property(copy, nonatomic) NSString *originalCommandId;	// G=0x326e3895; S=0x326e38b1; 
@property(copy, nonatomic) NSString *punchOutName;	// G=0x326e3901; S=0x326e391d; 
@property(copy, nonatomic) NSURL *punchOutUri;	// G=0x326e396d; S=0x326e39e9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)appPunchOutEvent;	// 0x326e372d
+ (id)appPunchOutEventWithDictionary:(id)dictionary context:(id)context;	// 0x326e3771
// declared property getter: - (id)appDisplayName;	// 0x326e37bd
// declared property getter: - (id)bundleId;	// 0x326e3829
- (id)encodedClassName;	// 0x326e3721
- (id)groupIdentifier;	// 0x326e3711
// declared property getter: - (id)originalCommandId;	// 0x326e3895
// declared property getter: - (id)punchOutName;	// 0x326e3901
// declared property getter: - (id)punchOutUri;	// 0x326e396d
// declared property setter: - (void)setAppDisplayName:(id)name;	// 0x326e37d9
// declared property setter: - (void)setBundleId:(id)anId;	// 0x326e3845
// declared property setter: - (void)setOriginalCommandId:(id)anId;	// 0x326e38b1
// declared property setter: - (void)setPunchOutName:(id)name;	// 0x326e391d
// declared property setter: - (void)setPunchOutUri:(id)uri;	// 0x326e39e9
@end

