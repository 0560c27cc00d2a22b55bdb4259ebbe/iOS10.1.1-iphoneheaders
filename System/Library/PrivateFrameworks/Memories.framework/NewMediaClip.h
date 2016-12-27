/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/KenBurnsClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class NSArray, NSString;

@interface NewMediaClip : KenBurnsClip <CompoundClipInformation> {

	NSArray* _containedClips;

}

@property (nonatomic,retain) NSArray * containedClips;              //@synthesize containedClips=_containedClips - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(int)arg1 ;
-(int)maxDuration;
-(NSArray *)containedClips;
-(void)setContainedClips:(NSArray *)arg1 ;
-(BOOL)expandsEditList;
-(id)newMediaAssetVideoPiece;
-(id)initWithKBClip:(id)arg1 ;
@end

