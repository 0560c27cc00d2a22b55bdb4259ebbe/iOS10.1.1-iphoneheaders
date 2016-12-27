/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface HDSharingPredicate : NSObject {

	NSArray* _sharedSampleTypes;
	NSNumber* _maxSampleAge;

}

@property (nonatomic,retain) NSArray * sharedSampleTypes;              //@synthesize sharedSampleTypes=_sharedSampleTypes - In the implementation block
@property (nonatomic,copy) NSNumber * maxSampleAge;                    //@synthesize maxSampleAge=_maxSampleAge - In the implementation block
-(NSNumber *)maxSampleAge;
-(NSArray *)sharedSampleTypes;
-(void)setMaxSampleAge:(NSNumber *)arg1 ;
-(void)setSharedSampleTypes:(NSArray *)arg1 ;
@end

