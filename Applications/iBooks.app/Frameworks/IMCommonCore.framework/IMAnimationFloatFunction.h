/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface IMAnimationFloatFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _startValue;
	double _endValue;
	double _speed;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double startValue;                                   //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                     //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(id)initWithTimingFunction:(id)arg1 startValue:(double)arg2 endValue:(double)arg3 speed:(double)arg4 ;
-(double)solveForTime:(double)arg1 ;
-(id)init;
-(void)setSpeed:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(double)endValue;
-(double)startValue;
@end

