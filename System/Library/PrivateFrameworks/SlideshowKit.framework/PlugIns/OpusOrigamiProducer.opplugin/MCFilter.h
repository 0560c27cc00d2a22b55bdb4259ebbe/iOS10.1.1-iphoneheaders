/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSSet, NSDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {

	NSMutableDictionary* mAttributes;
	NSMutableSet* mAnimationPaths;
	unsigned long long mIndex;
	NSString* mFilterID;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (copy) NSString * filterID; 
@property (copy) NSDictionary * attributes; 
@property (assign,nonatomic) unsigned long long index; 
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(unsigned long long)countOfAnimationPaths;
-(void)demolish;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(unsigned long long)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)imprint;
@end

