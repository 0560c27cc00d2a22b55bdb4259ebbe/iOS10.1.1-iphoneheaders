/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUMathExpressionBase.h>

@interface MUMathExpressionFloatBased : MUMathExpressionBase {

	FunctionInterpreter<float>* mInterpreter;

}
+(float)invalidResult;
+(float)evaluateString:(id)arg1 error:(id*)arg2 ;
-(void)resetAllVariables;
-(void)setVariableValues:(id)arg1 ;
-(void)setValue:(float)arg1 forVariable:(id)arg2 ;
-(void)_resetVariableIndicies;
-(void)replaceVariable:(id)arg1 withValue:(float)arg2 ;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(BOOL)isValueIllegal:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(float)valueForVariable:(id)arg1 ;
-(id)stringValue;
-(void)cleanup;
-(BOOL)isConstant;
-(float)evaluate;
@end

