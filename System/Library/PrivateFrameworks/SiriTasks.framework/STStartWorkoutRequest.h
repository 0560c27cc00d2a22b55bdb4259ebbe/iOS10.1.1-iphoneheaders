/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest {

	long long _activityType;
	long long _locationType;
	long long _goalType;
	long long _userMode;
	HKQuantity* _goal;
	BOOL _isOpenGoal;
	BOOL _skipActivitySetup;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)activityType;
-(long long)userMode;
-(long long)locationType;
-(id)workoutGoal;
-(BOOL)isOpenGoal;
-(BOOL)skipActivitySetup;
-(id)createResponse;
-(id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(BOOL)arg6 skipActivitySetup:(BOOL)arg7 ;
-(long long)goalType;
@end

