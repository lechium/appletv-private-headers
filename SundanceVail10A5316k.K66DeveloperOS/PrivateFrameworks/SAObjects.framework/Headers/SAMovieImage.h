/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SAMovieResolution, NSURL;

@interface SAMovieImage : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAMovieResolution *resolution;	// G=0x32f6de7d; S=0x32f6ded1; 
@property(copy, nonatomic) NSURL *uri;	// G=0x32f6df0d; S=0x32f6df89; 
+ (id)image;	// 0x32f6dded
+ (id)imageWithDictionary:(id)dictionary context:(id)context;	// 0x32f6de31
- (id)encodedClassName;	// 0x32f6dde1
- (id)groupIdentifier;	// 0x32f6ddd1
// declared property getter: - (id)resolution;	// 0x32f6de7d
// declared property setter: - (void)setResolution:(id)resolution;	// 0x32f6ded1
// declared property setter: - (void)setUri:(id)uri;	// 0x32f6df89
// declared property getter: - (id)uri;	// 0x32f6df0d
@end

