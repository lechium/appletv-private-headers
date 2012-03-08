/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library


@interface NSCoder (UIGeometryKeyedCoding)
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x3306f829
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x32f7d1c9
- (CGRect)decodeCGRectForKey:(id)key;	// 0x3306f7e1
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x3306f7a1
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x3306f881
- (UIOffset)decodeUIOffsetForKey:(id)key;	// 0x3306f8b5
- (void)encodeCGAffineTransform:(CGAffineTransform)transform forKey:(id)key;	// 0x3306f705
- (void)encodeCGPoint:(CGPoint)point forKey:(id)key;	// 0x32ee8979
- (void)encodeCGRect:(CGRect)rect forKey:(id)key;	// 0x3306f6d1
- (void)encodeCGSize:(CGSize)size forKey:(id)key;	// 0x3306f6a9
- (void)encodeUIEdgeInsets:(UIEdgeInsets)insets forKey:(id)key;	// 0x3306f745
- (void)encodeUIOffset:(UIOffset)offset forKey:(id)key;	// 0x3306f779
@end

@interface NSCoder (UITypeSafety)
- (id)_copyDecodedObjectForKey:(id)key ofClass:(Class)aClass;	// 0x331f0e7d
@end

