/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKLeaderboardSetInternal, NSString, NSArray;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding> {

	GKLeaderboardSetInternal* _internal;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain,readonly) NSArray * leaderboardIdentifiers; 
@property (retain) GKLeaderboardSetInternal * internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy) NSString * identifier; 
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadLeaderboardSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageURL;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)miniImageURL;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKLeaderboardSetInternal *)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadLeaderboardsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(GKLeaderboardSetInternal *)internal;
@end

