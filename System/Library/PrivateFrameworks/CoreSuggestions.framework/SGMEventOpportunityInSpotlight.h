/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETScalarEventTracker;

@interface SGMEventOpportunityInSpotlight : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 ;
-(PETScalarEventTracker *)tracker;
@end

