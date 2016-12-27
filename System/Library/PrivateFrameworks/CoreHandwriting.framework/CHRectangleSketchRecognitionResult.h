/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult {

	CGPoint _upperLeftPoint;
	CGPoint _upperRightPoint;
	CGPoint _lowerLeftPoint;
	CGPoint _lowerRightPoint;

}

@property (readonly) CGPoint upperLeftPoint;               //@synthesize upperLeftPoint=_upperLeftPoint - In the implementation block
@property (readonly) CGPoint upperRightPoint;              //@synthesize upperRightPoint=_upperRightPoint - In the implementation block
@property (readonly) CGPoint lowerLeftPoint;               //@synthesize lowerLeftPoint=_lowerLeftPoint - In the implementation block
@property (readonly) CGPoint lowerRightPoint;              //@synthesize lowerRightPoint=_lowerRightPoint - In the implementation block
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(CGPoint)arg4 upperRightPoint:(CGPoint)arg5 lowerLeftPoint:(CGPoint)arg6 lowerRightPoint:(CGPoint)arg7 ;
-(CGPoint)upperLeftPoint;
-(CGPoint)lowerLeftPoint;
-(CGPoint)lowerRightPoint;
-(CGPoint)upperRightPoint;
@end

