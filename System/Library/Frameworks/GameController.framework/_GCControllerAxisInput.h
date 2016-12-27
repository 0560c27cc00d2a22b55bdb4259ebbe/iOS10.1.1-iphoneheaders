/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerAxisInput.h>

@class GCControllerButtonInput, GCControllerElement;

@interface _GCControllerAxisInput : GCControllerAxisInput {

	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;
	BOOL _flipped;
	BOOL _digital;
	GCControllerElement* _collection;

}
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
-(id)negative;
-(id)collection;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(BOOL)isDigital;
-(id)positive;
-(id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 digital:(BOOL)arg3 ;
-(BOOL)isFlipped;
@end

