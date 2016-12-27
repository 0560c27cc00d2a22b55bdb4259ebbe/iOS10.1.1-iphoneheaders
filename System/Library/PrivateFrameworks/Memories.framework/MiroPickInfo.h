/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MiroMediaItem;
@interface MiroPickInfo : NSObject <NSCopying> {

	float _score;
	float _distance;
	float _splitDistance;
	float _imageDistance;
	unsigned long long _pickOrder;
	unsigned long long _sourceOrder;
	unsigned long long _splitOrder;
	id<MiroMediaItem> _item;
	unsigned long long _clipCompareResultFlags;

}

@property (assign,nonatomic) float score;                                              //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float distance;                                           //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) float splitDistance;                                      //@synthesize splitDistance=_splitDistance - In the implementation block
@property (assign,nonatomic) unsigned long long pickOrder;                             //@synthesize pickOrder=_pickOrder - In the implementation block
@property (assign,nonatomic) unsigned long long sourceOrder;                           //@synthesize sourceOrder=_sourceOrder - In the implementation block
@property (assign,nonatomic) unsigned long long splitOrder;                            //@synthesize splitOrder=_splitOrder - In the implementation block
@property (nonatomic,readonly) id<MiroMediaItem> item;                                 //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) float imageDistance;                                    //@synthesize imageDistance=_imageDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long clipCompareResultFlags;              //@synthesize clipCompareResultFlags=_clipCompareResultFlags - In the implementation block
@property (nonatomic,readonly) double idealDuration; 
@property (nonatomic,readonly) double idealDurationWithTrim; 
@property (nonatomic,readonly) double biasedDuration; 
@property (nonatomic,readonly) double maxPleasantDuration; 
+(id)pickInfoWithItem:(id)arg1 score:(float)arg2 distance:(float)arg3 splitDistance:(float)arg4 pickOrder:(unsigned long long)arg5 sourceOrder:(unsigned long long)arg6 splitOrder:(unsigned long long)arg7 imageDistance:(float)arg8 clipCompareResultFlags:(unsigned long long)arg9 ;
-(id)description;
-(id<MiroMediaItem>)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(void)setScore:(float)arg1 ;
-(float)score;
-(unsigned long long)sourceOrder;
-(unsigned long long)pickOrder;
-(unsigned long long)splitOrder;
-(float)splitDistance;
-(float)imageDistance;
-(unsigned long long)clipCompareResultFlags;
-(double)idealDurationForBlueprint:(id)arg1 respectTrim:(BOOL)arg2 ;
-(void)setSourceOrder:(unsigned long long)arg1 ;
-(void)setPickOrder:(unsigned long long)arg1 ;
-(void)setSplitOrder:(unsigned long long)arg1 ;
-(void)setSplitDistance:(float)arg1 ;
-(double)idealDurationForBlueprint:(id)arg1 biased:(BOOL)arg2 maxPleasant:(BOOL)arg3 respectTrim:(BOOL)arg4 ;
-(double)trimmedDuration;
-(double)_idealDurationForBlueprint:(id)arg1 biased:(BOOL)arg2 max:(BOOL)arg3 ;
-(double)voiceRangeDuration;
-(float)_speedForVideoSegment:(id)arg1 ;
-(double)idealDuration;
-(double)idealDurationWithTrim;
-(double)biasedDuration;
-(double)maxPleasantDuration;
@end

