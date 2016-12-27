/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@class NSString;

@interface FCEditorialFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	unsigned long long _minPrecedingTopicGroups;

}

@property (assign,nonatomic) unsigned long long minPrecedingTopicGroups;              //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL requiresForYouCatchUpOperation; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
+(id)editorialFeedTransformationWithContext:(id)arg1 ;
-(NSString *)groupEmitterIdentifier;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3 ;
-(BOOL)requiresForYouCatchUpOperation;
-(id)initWithMinPrecedingTopicGroups:(unsigned long long)arg1 ;
-(id)initWithNoDistanceRequirements;
-(unsigned long long)minPrecedingTopicGroups;
-(void)setMinPrecedingTopicGroups:(unsigned long long)arg1 ;
@end

