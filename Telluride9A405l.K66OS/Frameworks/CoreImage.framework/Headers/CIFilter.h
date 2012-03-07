/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {
	void *_priv[8];	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CIImage *outputImage;	// G=0x36ea1765; @dynamic
+ (id)_filterArrayFromProperties:(id)properties;	// 0x36ea2ab9
+ (id)_filterArrayFromProperties:(id)properties inputImageExtent:(CGRect)extent;	// 0x36ea241d
+ (id)_propertyArrayFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x36ea1d25
+ (id)customAttributes;	// 0x36ea1ce1
+ (id)filterNamesInCategories:(id)categories;	// 0x36ea1195
+ (id)filterNamesInCategory:(id)category;	// 0x36ea1155
+ (id)filterWithName:(id)name;	// 0x36ea1021
+ (id)filterWithName:(id)name keysAndValues:(id)values;	// 0x36ea10f5
- (id)initWithCoder:(id)coder;	// 0x36ea18f9
- (void)_copyAttributesTo:(id)to;	// 0x36ea1a69
- (id)_copyFilterWithZone:(NSZone *)zone;	// 0x36ea1a6d
- (id)_filterClassDescription;	// 0x36ea1ce5
- (id)_initFromProperties:(id)properties;	// 0x36ea2c65
- (BOOL)_isIdentity;	// 0x36ea0f55
- (BOOL)_isIdentity;	// 0x36ea1d1d
- (id)_outputProperties;	// 0x36ea1d21
- (id)attributes;	// 0x36ea1769
- (id)copyWithZone:(NSZone *)zone;	// 0x36ea1aa9
- (void)dealloc;	// 0x36ea1645
- (id)description;	// 0x36ea1ba9
- (void)encodeWithCoder:(id)coder;	// 0x36ea1795
- (unsigned)hash;	// 0x36ea0f59
- (id)inputKeys;	// 0x36ea1715
- (BOOL)isEqual:(id)equal;	// 0x36ea0e2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36ea1b99
- (id)name;	// 0x36ea1629
// declared property getter: - (id)outputImage;	// 0x36ea1765
- (id)outputKeys;	// 0x36ea173d
- (void)setDefaults;	// 0x36ea1791
@end
