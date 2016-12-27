/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSNumber;

@interface SBUsageDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSNumber * standbyTime; 
@property (nonatomic,retain) NSNumber * batteryUsageTime; 
@property (assign,nonatomic) BOOL hasChargedPartially; 
-(void)setHasChargedPartially:(BOOL)arg1 ;
-(BOOL)hasChargedPartially;
-(void)setBatteryUsageTime:(NSNumber *)arg1 ;
-(NSNumber *)batteryUsageTime;
-(void)setStandbyTime:(NSNumber *)arg1 ;
-(NSNumber *)standbyTime;
-(void)_bindAndRegisterDefaults;
-(void)clearUsageDefaults;
@end

