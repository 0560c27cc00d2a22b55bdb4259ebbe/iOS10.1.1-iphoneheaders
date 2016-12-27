/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PHAWorker, PHAJobConstraints;

@interface PHAWorkerWarmer : NSObject {

	NSArray* _workers;
	PHAWorker* _lastActiveWorker;
	PHAJobConstraints* _lastConstraints;

}

@property (nonatomic,readonly) NSArray * workers;                              //@synthesize workers=_workers - In the implementation block
@property (nonatomic,retain) PHAWorker * lastActiveWorker;                     //@synthesize lastActiveWorker=_lastActiveWorker - In the implementation block
@property (nonatomic,retain) PHAJobConstraints * lastConstraints;              //@synthesize lastConstraints=_lastConstraints - In the implementation block
-(id)statusAsDictionary;
-(void)_cooldownWorkerIfWarmed:(id)arg1 ;
-(void)_warmupWorkerIfCooled:(id)arg1 ;
-(void)setLastConstraints:(PHAJobConstraints *)arg1 ;
-(void)setLastActiveWorker:(PHAWorker *)arg1 ;
-(void)setActiveWorker:(id)arg1 withJob:(id)arg2 ;
-(id)initWithWorkers:(id)arg1 ;
-(void)recordConstraintChange:(id)arg1 ;
-(void)reportNoMoreJobsExpected;
-(NSArray *)workers;
-(PHAWorker *)lastActiveWorker;
-(PHAJobConstraints *)lastConstraints;
@end

