/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKPersistentObject.h"
#import "EventKit-Structs.h"

@class NSString, NSURL, NSDictionary, NSNumber;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x30e6accd; S=0x30e6ace9; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x30e6ae21; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x30e6ae3d; S=0x30e6ae8d; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x30e6ad3d; S=0x30e6ad59; 
@property(copy, nonatomic) NSString *fileName;	// G=0x30e6ad05; S=0x30e6ad21; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x30e6ade9; S=0x30e6ae05; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x30e6ad75; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x30e6adb1; S=0x30e6adcd; 
+ (id)relations;	// 0x30e6ab11
// declared property getter: - (id)URL;	// 0x30e6accd
// declared property getter: - (id)UUID;	// 0x30e6ae21
// declared property getter: - (id)XProperties;	// 0x30e6ae3d
- (id)copyWithZone:(NSZone *)zone;	// 0x30e6aba1
- (id)description;	// 0x30e6aee5
- (int)entityType;	// 0x30e6acc9
// declared property getter: - (id)fileFormat;	// 0x30e6ad3d
// declared property getter: - (id)fileName;	// 0x30e6ad05
// declared property getter: - (id)fileSize;	// 0x30e6ade9
// declared property getter: - (BOOL)isBinary;	// 0x30e6ad75
// declared property getter: - (id)localURL;	// 0x30e6adb1
// declared property setter: - (void)setFileFormat:(id)format;	// 0x30e6ad59
// declared property setter: - (void)setFileName:(id)name;	// 0x30e6ad21
// declared property setter: - (void)setFileSize:(id)size;	// 0x30e6ae05
- (void)setIsBinary:(BOOL)binary;	// 0x30e6ad95
// declared property setter: - (void)setLocalURL:(id)url;	// 0x30e6adcd
// declared property setter: - (void)setURL:(id)url;	// 0x30e6ace9
// declared property setter: - (void)setXProperties:(id)properties;	// 0x30e6ae8d
@end

