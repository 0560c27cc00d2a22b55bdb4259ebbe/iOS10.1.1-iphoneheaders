/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray;

@interface _UIVelocityIntegrator : NSObject {

	BOOL _hasMemoizedVelocity;
	NSMutableArray* _samples;
	double _hysteresisTimeInterval;
	double _resetHysteresisOnSampleThetaDiff;
	/*^block*/id _didResetHysteresisOnThetaDiffHandler;
	CGVector _offset;
	CGVector _totalTranslation;
	CGVector _memoizedVelocity;

}

@property (assign,nonatomic) CGVector offset;                                      //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) NSMutableArray * samples;                             //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) CGVector totalTranslation;                            //@synthesize totalTranslation=_totalTranslation - In the implementation block
@property (assign,nonatomic) BOOL hasMemoizedVelocity;                             //@synthesize hasMemoizedVelocity=_hasMemoizedVelocity - In the implementation block
@property (assign,nonatomic) CGVector memoizedVelocity;                            //@synthesize memoizedVelocity=_memoizedVelocity - In the implementation block
@property (assign,nonatomic) double hysteresisTimeInterval;                        //@synthesize hysteresisTimeInterval=_hysteresisTimeInterval - In the implementation block
@property (assign,nonatomic) double resetHysteresisOnSampleThetaDiff;              //@synthesize resetHysteresisOnSampleThetaDiff=_resetHysteresisOnSampleThetaDiff - In the implementation block
@property (nonatomic,copy) id didResetHysteresisOnThetaDiffHandler;                //@synthesize didResetHysteresisOnThetaDiffHandler=_didResetHysteresisOnThetaDiffHandler - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
-(id)init;
-(void)reset;
-(CGVector)velocity;
-(void)setOffset:(CGVector)arg1 ;
-(CGVector)offset;
-(void)addSample:(CGPoint)arg1 ;
-(void)setHysteresisTimeInterval:(double)arg1 ;
-(void)setResetHysteresisOnSampleThetaDiff:(double)arg1 ;
-(void)setDidResetHysteresisOnThetaDiffHandler:(id)arg1 ;
-(BOOL)hasVelocity;
-(NSMutableArray *)samples;
-(double)hysteresisTimeInterval;
-(void)setTotalTranslation:(CGVector)arg1 ;
-(double)resetHysteresisOnSampleThetaDiff;
-(id)didResetHysteresisOnThetaDiffHandler;
-(CGVector)totalTranslation;
-(void)setHasMemoizedVelocity:(BOOL)arg1 ;
-(BOOL)hasMemoizedVelocity;
-(CGVector)_computedVelocity;
-(void)setMemoizedVelocity:(CGVector)arg1 ;
-(CGVector)memoizedVelocity;
-(void)setSamples:(NSMutableArray *)arg1 ;
@end

