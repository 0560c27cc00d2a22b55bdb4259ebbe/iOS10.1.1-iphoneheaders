/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TISweepSource : NSObject {

	NSMutableDictionary* debugValues;
	int stepCount;

}

@property (nonatomic,readonly) NSMutableDictionary * debugValues; 
@property (assign,nonatomic) int stepCount; 
+(id)sharedInstance;
-(void)dealloc;
-(int)stepCount;
-(NSMutableDictionary *)debugValues;
-(void)addValue:(id)arg1 withMin:(float)arg2 withMax:(float)arg3 ;
-(void)addValue:(id)arg1 withValue:(float)arg2 ;
-(id)sweepStateHeader;
-(id)sweepStateValues;
-(void)advanceSweep;
-(BOOL)finished;
-(void)setStepCount:(int)arg1 ;
@end

