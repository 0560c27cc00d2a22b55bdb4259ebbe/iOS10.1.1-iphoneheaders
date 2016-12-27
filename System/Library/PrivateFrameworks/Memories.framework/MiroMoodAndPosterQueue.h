/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MiroPosterDelegate;
@class NSObject, MiroMemory, NSMutableOrderedSet, NSString;

@interface MiroMoodAndPosterQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialTaskQueue;
	MiroMemory* _memory;
	id<MiroPosterDelegate> _posterDelegate;
	NSMutableOrderedSet* _moodBlueprints;
	NSString* _lastCustomID;

}

@property (nonatomic,retain) NSMutableOrderedSet * moodBlueprints;                      //@synthesize moodBlueprints=_moodBlueprints - In the implementation block
@property (nonatomic,retain) NSString * lastCustomID;                                   //@synthesize lastCustomID=_lastCustomID - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                       //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic,__weak) id<MiroPosterDelegate> posterDelegate;              //@synthesize posterDelegate=_posterDelegate - In the implementation block
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)setPosterDelegate:(id<MiroPosterDelegate>)arg1 ;
-(id)cachedPosterForIndex:(long long)arg1 ;
-(void)updatePosterImagesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithMemory:(id)arg1 ;
-(void)generateMoodPosters;
-(id)pullBlueprintWithMoodID:(id)arg1 ;
-(NSMutableOrderedSet *)moodBlueprints;
-(void)generateMoodBlueprints;
-(void)refreshMoodPosterCache;
-(void)_generatePostersForMoods:(id)arg1 ;
-(NSString *)lastCustomID;
-(void)setLastCustomID:(NSString *)arg1 ;
-(void)_generatePosterForMoodAndPoster:(id)arg1 ;
-(id<MiroPosterDelegate>)posterDelegate;
-(id)_newMoodAndPosterWithMoodID:(id)arg1 ;
-(void)generateCustomPoster;
-(id)cachedPosterForCurrentBlueprint;
-(void)setMoodBlueprints:(NSMutableOrderedSet *)arg1 ;
@end
