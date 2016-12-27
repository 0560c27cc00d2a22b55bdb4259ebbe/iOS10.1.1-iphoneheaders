/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFTimerTriggerExecutionTime_Private.h>
#import <libobjc.A.dylib/HFTimerTriggerExecutionTime.h>

@class HFTimerTriggerBuilder, NSString, NSDateComponents;

@interface HFTimerTriggerSignificantEventExecution : NSObject <HFTimerTriggerExecutionTime_Private, HFTimerTriggerExecutionTime> {

	HFTimerTriggerBuilder* _timerTriggerBuilder;
	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;

}

@property (nonatomic,copy) NSString * significantEvent;                                       //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy) NSDateComponents * significantEventOffset;                         //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HFTimerTriggerBuilder * timerTriggerBuilder;              //@synthesize timerTriggerBuilder=_timerTriggerBuilder - In the implementation block
-(NSString *)significantEvent;
-(NSDateComponents *)significantEventOffset;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(void)setTimerTriggerBuilder:(HFTimerTriggerBuilder *)arg1 ;
-(id)commitCreateTimerTriggerBuilder;
-(id)commitUpdateExecutionTime;
-(HFTimerTriggerBuilder *)timerTriggerBuilder;
-(id)performValidation;
@end

