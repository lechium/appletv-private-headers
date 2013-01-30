/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSURL, SAMovieResolution;

@interface SAMovieImage : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAMovieResolution *resolution;	// G=0x353fd97d; S=0x353fd9d1; 
@property(copy, nonatomic) NSURL *uri;	// G=0x353fda0d; S=0x353fda89; 
+ (id)image;	// 0x353fd8ed
+ (id)imageWithDictionary:(id)dictionary context:(id)context;	// 0x353fd931
- (id)encodedClassName;	// 0x353fd8e1
- (id)groupIdentifier;	// 0x353fd8d1
// declared property getter: - (id)resolution;	// 0x353fd97d
// declared property setter: - (void)setResolution:(id)resolution;	// 0x353fd9d1
// declared property setter: - (void)setUri:(id)uri;	// 0x353fda89
// declared property getter: - (id)uri;	// 0x353fda0d
@end
