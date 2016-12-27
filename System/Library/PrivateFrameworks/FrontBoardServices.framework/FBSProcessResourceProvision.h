/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@protocol OS_dispatch_queue;
@class NSObject, BSTimer, BSMachPortSendRight;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {

	SCD_Struct_FB4 _allowance;
	SCD_Struct_FB4 _allowanceConsumed;
	unsigned long long _baselineValue;
	unsigned long long _milestoneValue;
	NSObject*<OS_dispatch_queue> _queue;
	BSTimer* _timer;
	BSMachPortSendRight* _taskRight;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) SCD_Struct_FB4 allowance;              //@synthesize allowance=_allowance - In the implementation block
+(id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2 ;
+(id)provisionWithAllowance:(SCD_Struct_FB4)arg1 ;
-(void)_beginMonitoring;
-(id)initWithAllowance:(SCD_Struct_FB4)arg1 ;
-(BOOL)_queue_updateConsumption;
-(double)_getElapsedCPUTimeForTaskPort:(unsigned)arg1 ;
-(void)_queue_evaluateConsumption;
-(void)_queue_stopMonitoring;
-(void)_queue_noteAllowanceExhausted;
-(unsigned long long)_queue_calculateValueConsumed;
-(SCD_Struct_FB4)allowance;
-(void)setAllowance:(SCD_Struct_FB4)arg1 ;
-(void)dealloc;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_stopMonitoring;
-(void)_prepareForReuse;
-(id)succinctDescriptionBuilder;
-(BOOL)isResourceProvision;
-(BOOL)allowanceRemaining:(out SCD_Struct_FB4*)arg1 ;
-(void)_updateProgress;
@end

