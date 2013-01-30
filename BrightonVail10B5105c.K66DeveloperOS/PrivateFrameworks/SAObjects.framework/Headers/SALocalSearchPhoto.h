/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *fullsize;	// G=0x303dc4a9; S=0x303dc525; 
@property(copy, nonatomic) NSString *identifier;	// G=0x303dc585; S=0x303dc5a1; 
@property(retain, nonatomic) SAUIAppPunchOut *photoPunchOut;	// G=0x303dc5f1; S=0x303dc645; 
@property(copy, nonatomic) NSURL *thumbnail;	// G=0x303dc681; S=0x303dc6fd; 
+ (id)photo;	// 0x303dc419
+ (id)photoWithDictionary:(id)dictionary context:(id)context;	// 0x303dc45d
- (id)encodedClassName;	// 0x303dc40d
// declared property getter: - (id)fullsize;	// 0x303dc4a9
- (id)groupIdentifier;	// 0x303dc3fd
// declared property getter: - (id)identifier;	// 0x303dc585
// declared property getter: - (id)photoPunchOut;	// 0x303dc5f1
// declared property setter: - (void)setFullsize:(id)fullsize;	// 0x303dc525
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x303dc5a1
// declared property setter: - (void)setPhotoPunchOut:(id)anOut;	// 0x303dc645
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x303dc6fd
// declared property getter: - (id)thumbnail;	// 0x303dc681
@end
