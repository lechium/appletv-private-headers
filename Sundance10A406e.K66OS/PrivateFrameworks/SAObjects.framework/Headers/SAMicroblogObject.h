/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSNumber, NSDictionary, SALocation, SAPersonAttribute, NSString, NSArray, NSURL;

@interface SAMicroblogObject : SADomainObject {
}
@property(copy, nonatomic) NSURL *attachment;	// G=0x3253a24d; S=0x3253a2c9; 
@property(copy, nonatomic) NSString *content;	// G=0x3253a329; S=0x3253a345; 
@property(copy, nonatomic) NSDate *dateSent;	// G=0x3253a395; S=0x3253a3b1; 
@property(copy, nonatomic) NSDictionary *hashtagAlternatives;	// G=0x3253a401; S=0x3253a41d; 
@property(retain, nonatomic) SALocation *location;	// G=0x3253a46d; S=0x3253a4c1; 
@property(copy, nonatomic) NSNumber *outgoing;	// G=0x3253a4fd; S=0x3253a519; 
@property(copy, nonatomic) NSNumber *providerId;	// G=0x3253a569; S=0x3253a585; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x3253a5d5; S=0x3253a651; 
@property(copy, nonatomic) NSURL *refereceId;	// G=0x3253a6b9; S=0x3253a735; 
@property(retain, nonatomic) SAPersonAttribute *sender;	// G=0x3253a795; S=0x3253a7e9; 
@property(copy, nonatomic) NSString *serviceType;	// G=0x3253a825; S=0x3253a841; 
@property(copy, nonatomic) NSDictionary *socialProfileReferences;	// G=0x3253a891; S=0x3253a8ad; 
@property(copy, nonatomic) NSNumber *useLocation;	// G=0x3253a8fd; S=0x3253a919; 
+ (id)object;	// 0x3253a1bd
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x3253a201
// declared property getter: - (id)attachment;	// 0x3253a24d
// declared property getter: - (id)content;	// 0x3253a329
// declared property getter: - (id)dateSent;	// 0x3253a395
- (id)encodedClassName;	// 0x3253a1b1
- (id)groupIdentifier;	// 0x3253a1a1
// declared property getter: - (id)hashtagAlternatives;	// 0x3253a401
// declared property getter: - (id)location;	// 0x3253a46d
// declared property getter: - (id)outgoing;	// 0x3253a4fd
// declared property getter: - (id)providerId;	// 0x3253a569
// declared property getter: - (id)recipients;	// 0x3253a5d5
// declared property getter: - (id)refereceId;	// 0x3253a6b9
// declared property getter: - (id)sender;	// 0x3253a795
// declared property getter: - (id)serviceType;	// 0x3253a825
// declared property setter: - (void)setAttachment:(id)attachment;	// 0x3253a2c9
// declared property setter: - (void)setContent:(id)content;	// 0x3253a345
// declared property setter: - (void)setDateSent:(id)sent;	// 0x3253a3b1
// declared property setter: - (void)setHashtagAlternatives:(id)alternatives;	// 0x3253a41d
// declared property setter: - (void)setLocation:(id)location;	// 0x3253a4c1
// declared property setter: - (void)setOutgoing:(id)outgoing;	// 0x3253a519
// declared property setter: - (void)setProviderId:(id)anId;	// 0x3253a585
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x3253a651
// declared property setter: - (void)setRefereceId:(id)anId;	// 0x3253a735
// declared property setter: - (void)setSender:(id)sender;	// 0x3253a7e9
// declared property setter: - (void)setServiceType:(id)type;	// 0x3253a841
// declared property setter: - (void)setSocialProfileReferences:(id)references;	// 0x3253a8ad
// declared property setter: - (void)setUseLocation:(id)location;	// 0x3253a919
// declared property getter: - (id)socialProfileReferences;	// 0x3253a891
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3253a969
// declared property getter: - (id)useLocation;	// 0x3253a8fd
@end

