/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, NSMutableArray;

@interface PTPDevicePropDescDataset : NSObject {
	unsigned short _devicePropertyCode;	// 4 = 0x4
	unsigned short _dataTypeCode;	// 6 = 0x6
	unsigned char _readWriteAttribute;	// 8 = 0x8
	id _factoryDefaultValue;	// 12 = 0xc
	id _currentValue;	// 16 = 0x10
	unsigned char _formFlag;	// 20 = 0x14
	id _minimumValue;	// 24 = 0x18
	id _maximumValue;	// 28 = 0x1c
	id _stepSize;	// 32 = 0x20
	unsigned short _numberOfValues;	// 36 = 0x24
	NSMutableArray *_supportedValues;	// 40 = 0x28
	NSMutableData *_content;	// 44 = 0x2c
	BOOL _dirty;	// 48 = 0x30
	BOOL _readOnlyObject;	// 49 = 0x31
}
@property(retain) NSMutableData *content;	// G=0x326145d9; S=0x326155b5; converted property
@property(retain) id currentValue;	// G=0x326140b9; S=0x32614359; converted property
@property(assign) unsigned short dataTypeCode;	// G=0x32614049; S=0x32614059; converted property
@property(assign) unsigned short devicePropertyCode;	// G=0x32614019; S=0x32614029; converted property
@property(retain) id factoryDefaultValue;	// G=0x326140a9; S=0x326143b1; converted property
@property(assign) unsigned char formFlag;	// G=0x326140c9; S=0x326140d9; converted property
@property(retain) id maximumValue;	// G=0x32614109; S=0x326142a9; converted property
@property(retain) id minimumValue;	// G=0x326140f9; S=0x32614301; converted property
@property(assign) unsigned short numberOfValues;	// G=0x32614129; S=0x32614139; converted property
@property(assign) unsigned char readWriteAttribute;	// G=0x32614079; S=0x32614089; converted property
@property(retain) id stepSize;	// G=0x32614119; S=0x32614251; converted property
@property(retain) NSMutableArray *supportedValues;	// G=0x32614159; S=0x326141f9; converted property
- (id)init;	// 0x32614169
- (id)initWithData:(id)data;	// 0x326154cd
- (id)initWithMutableData:(id)mutableData;	// 0x326153fd
// converted property getter: - (id)content;	// 0x326145d9
// converted property getter: - (id)currentValue;	// 0x326140b9
// converted property getter: - (unsigned short)dataTypeCode;	// 0x32614049
- (void)dealloc;	// 0x32615339
- (id)description;	// 0x32614409
// converted property getter: - (unsigned short)devicePropertyCode;	// 0x32614019
// converted property getter: - (id)factoryDefaultValue;	// 0x326140a9
// converted property getter: - (unsigned char)formFlag;	// 0x326140c9
// converted property getter: - (id)maximumValue;	// 0x32614109
// converted property getter: - (id)minimumValue;	// 0x326140f9
// converted property getter: - (unsigned short)numberOfValues;	// 0x32614129
// converted property getter: - (unsigned char)readWriteAttribute;	// 0x32614079
// converted property setter: - (void)setContent:(id)content;	// 0x326155b5
// converted property setter: - (void)setCurrentValue:(id)value;	// 0x32614359
// converted property setter: - (void)setDataTypeCode:(unsigned short)code;	// 0x32614059
// converted property setter: - (void)setDevicePropertyCode:(unsigned short)code;	// 0x32614029
// converted property setter: - (void)setFactoryDefaultValue:(id)value;	// 0x326143b1
// converted property setter: - (void)setFormFlag:(unsigned char)flag;	// 0x326140d9
// converted property setter: - (void)setMaximumValue:(id)value;	// 0x326142a9
// converted property setter: - (void)setMinimumValue:(id)value;	// 0x32614301
// converted property setter: - (void)setNumberOfValues:(unsigned short)values;	// 0x32614139
// converted property setter: - (void)setReadWriteAttribute:(unsigned char)attribute;	// 0x32614089
// converted property setter: - (void)setStepSize:(id)size;	// 0x32614251
// converted property setter: - (void)setSupportedValues:(id)values;	// 0x326141f9
// converted property getter: - (id)stepSize;	// 0x32614119
// converted property getter: - (id)supportedValues;	// 0x32614159
- (void)updateContent;	// 0x32614601
@end

