/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	BOOL _keyDown;
	unsigned short _keyCode;
	unsigned _usagePage;
	unsigned _modifierState;
	NSString* _unmodifiedInput;
	NSString* _modifiedInput;
	NSString* _shiftModifiedInput;

}

@property (assign,nonatomic) unsigned short keyCode;                     //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned usagePage;                         //@synthesize usagePage=_usagePage - In the implementation block
@property (assign,nonatomic) BOOL keyDown;                               //@synthesize keyDown=_keyDown - In the implementation block
@property (nonatomic,retain) NSString * unmodifiedInput;                 //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * modifiedInput;                   //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,retain) NSString * shiftModifiedInput;              //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (assign,nonatomic) unsigned modifierState;                     //@synthesize modifierState=_modifierState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)keyCode;
-(id)accessibilityEventRepresentationTabularDescription;
-(void)setKeyCode:(unsigned short)arg1 ;
-(void)setUsagePage:(unsigned)arg1 ;
-(void)setKeyDown:(BOOL)arg1 ;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(void)setModifiedInput:(NSString *)arg1 ;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(void)setModifierState:(unsigned)arg1 ;
-(NSString *)unmodifiedInput;
-(NSString *)shiftModifiedInput;
-(unsigned)modifierState;
-(NSString *)modifiedInput;
-(unsigned)usagePage;
-(BOOL)keyDown;
-(id)_hardwareKeyboardLayout;
-(void)translateStringToKeycode;
-(void)translateKeycode;
@end

