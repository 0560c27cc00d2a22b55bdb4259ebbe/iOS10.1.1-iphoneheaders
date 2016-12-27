/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet;

@interface RTEntropyFilter : NSObject {

	NSCountedSet* _globalEvents;
	NSCountedSet* _relevantEvents;
	double _maximumEntropy;

}

@property (assign,nonatomic) double maximumEntropy;                      //@synthesize maximumEntropy=_maximumEntropy - In the implementation block
@property (nonatomic,retain) NSCountedSet * globalEvents;                //@synthesize globalEvents=_globalEvents - In the implementation block
@property (nonatomic,retain) NSCountedSet * relevantEvents;              //@synthesize relevantEvents=_relevantEvents - In the implementation block
-(id)init;
-(id)initWithGlobalEvents:(id)arg1 relevantEvents:(id)arg2 maximumEntropy:(double)arg3 ;
-(id)initWithMaximumEntropy:(double)arg1 ;
-(void)addReleventEvent:(id)arg1 ;
-(void)addGlobalEvents:(id)arg1 ;
-(void)removeAllEvents;
-(double)weightForBundleIdentifier:(id)arg1 ;
-(NSCountedSet *)globalEvents;
-(void)setGlobalEvents:(NSCountedSet *)arg1 ;
-(NSCountedSet *)relevantEvents;
-(void)setRelevantEvents:(NSCountedSet *)arg1 ;
-(double)maximumEntropy;
-(void)setMaximumEntropy:(double)arg1 ;
@end

