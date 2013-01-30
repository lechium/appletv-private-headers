/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL;

@interface SAMPSearchCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x353c73e1; S=0x353c745d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c7305; S=0x353c7381; 
+ (id)searchCompleted;	// 0x353c7275
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353c72b9
- (id)encodedClassName;	// 0x353c7269
- (id)groupIdentifier;	// 0x353c7259
- (BOOL)requiresResponse;	// 0x353c74c5
// declared property getter: - (id)results;	// 0x353c73e1
// declared property setter: - (void)setResults:(id)results;	// 0x353c745d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c7381
// declared property getter: - (id)targetAppId;	// 0x353c7305
@end
