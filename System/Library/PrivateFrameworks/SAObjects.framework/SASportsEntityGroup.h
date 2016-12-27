/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity

@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSString * groupType; 
+(id)entityGroup;
+(id)entityGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(Class)domainObjectViewClass;
-(void)siriui_enumerateEntitiesWithGroupHandler:(/*^block*/id)arg1 teamHandler:(/*^block*/id)arg2 athleteHandler:(/*^block*/id)arg3 ;
-(BOOL)siriui_containsTeams;
-(BOOL)siriui_containsAthletes;
-(void)setEntities:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)entities;
-(NSString *)groupType;
-(void)setGroupType:(NSString *)arg1 ;
@end

