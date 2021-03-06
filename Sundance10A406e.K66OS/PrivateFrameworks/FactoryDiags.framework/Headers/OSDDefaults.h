/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library
#import "FactoryDiags-Structs.h"

@class NSString;

@interface OSDDefaults : NSObject {
	NSString *_domain;	// 4 = 0x4
}
+ (id)defaults;	// 0x373910cd
+ (id)defaultsInDomain:(id)domain;	// 0x37391105
- (id)init;	// 0x37391275
- (id)initWithDomain:(id)domain;	// 0x37391219
- (id)__doLookupForName:(id)name;	// 0x3739088d
- (id)__doLookupFromSEL:(SEL)sel;	// 0x37390981
- (id)__getDefaults;	// 0x3739083d
- (id)__getRealDomain;	// 0x37390819
- (void)__setValueFromSEL:(SEL)sel withValue:(id)value;	// 0x37390a69
- (void)__setValueInDefaults:(id)defaults forName:(id)name;	// 0x373909a5
- (id)__unitTest;	// 0x3738fb19
- (bool)_addMethodsForProperties:(objc_property **)properties withCount:(unsigned)count andSELMap:(id)map areSetters:(BOOL)setters;	// 0x37390539
- (void)_defaultsCtor;	// 0x373906ed
- (bool)_defaultsGetter_B;	// 0x37390bc9
- (unsigned char)_defaultsGetter_C;	// 0x37390cd1
- (unsigned)_defaultsGetter_I;	// 0x37390ca5
- (unsigned long)_defaultsGetter_L;	// 0x37390cf9
- (unsigned long long)_defaultsGetter_Q;	// 0x37390d4d
- (unsigned short)_defaultsGetter_S;	// 0x37390d25
- (BOOL)_defaultsGetter_c;	// 0x37390ba1
- (double)_defaultsGetter_d;	// 0x37390c4d
- (float)_defaultsGetter_f;	// 0x37390bf9
- (int)_defaultsGetter_i;	// 0x37390b49
- (id)_defaultsGetter_id;	// 0x37390b35
- (long)_defaultsGetter_l;	// 0x37390b75
- (long long)_defaultsGetter_q;	// 0x37390c79
- (short)_defaultsGetter_s;	// 0x37390c25
- (void)_defaultsSetter_B:(bool)b;	// 0x37390e4d
- (void)_defaultsSetter_C:(unsigned char)c;	// 0x37390fcd
- (void)_defaultsSetter_I:(unsigned)i;	// 0x37390f8d
- (void)_defaultsSetter_L:(unsigned long)l;	// 0x3739100d
- (void)_defaultsSetter_Q:(unsigned long long)q;	// 0x3739108d
- (void)_defaultsSetter_S:(unsigned short)s;	// 0x3739104d
- (void)_defaultsSetter_c:(BOOL)c;	// 0x37390e0d
- (void)_defaultsSetter_d:(double)d;	// 0x37390f0d
- (void)_defaultsSetter_f:(float)f;	// 0x37390e8d
- (void)_defaultsSetter_i:(int)i;	// 0x37390d8d
- (void)_defaultsSetter_id:(id)anId;	// 0x37390d79
- (void)_defaultsSetter_l:(long)l;	// 0x37390dcd
- (void)_defaultsSetter_q:(long long)q;	// 0x37390f4d
- (void)_defaultsSetter_s:(short)setter_s;	// 0x37390ecd
- (id)_getterList;	// 0x37390501
- (id)_methodListForPrefix:(const char *)prefix;	// 0x373903c5
- (SEL)_selForEncodeType:(const char *)encodeType andMap:(id)map withOutType:(unsigned short *)outType;	// 0x373903a1
- (SEL)_selForEncodeType:(const char *)encodeType andMap:(id)map withOutType:(unsigned short *)outType andOutAttrList:(id *)list;	// 0x37390205
- (id)_setterList;	// 0x3739051d
- (void)dealloc;	// 0x373911cd
- (BOOL)defaultExists:(id)exists;	// 0x37391191
- (void)setDomain:(id)domain;	// 0x37391135
@end

