/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CompositionDuckingTimes : NSObject {

	NSMutableArray* m_duckingEvents;
	int m_projectDurationInFrames;

}

@property (nonatomic,retain) NSMutableArray * duckingEvents; 
@property (assign) int projectDurationInFrames; 
+(id)compositionDuckingTimesWithProject:(id)arg1 ;
-(void)dealloc;
-(id)initWithProject:(id)arg1 ;
-(BOOL)clipIsAudible:(id)arg1 ;
-(NSMutableArray *)duckingEvents;
-(BOOL)shouldDuckAtTime:(int)arg1 ;
-(int)projectDurationInFrames;
-(void)addDuckingFromTime:(int)arg1 toTime:(int)arg2 ;
-(void)setDuckingEvents:(NSMutableArray *)arg1 ;
-(void)setProjectDurationInFrames:(int)arg1 ;
-(void)makeDuckingDataForEditListWithProject:(id)arg1 ;
-(void)makeDuckingDataForForegroundAudioClipsWithProject:(id)arg1 ;
-(void)appendDuckingChangeAtFrameTime:(int)arg1 shouldDuck:(BOOL)arg2 ;
-(int)nextDuckChangeTimeFromTime:(int)arg1 ;
@end

