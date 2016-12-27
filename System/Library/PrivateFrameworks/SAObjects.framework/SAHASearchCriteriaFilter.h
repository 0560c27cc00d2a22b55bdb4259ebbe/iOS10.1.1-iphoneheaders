/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAHAFilter.h>

@class NSURL, NSString;

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (nonatomic,copy) NSURL * accessoryIdentifier; 
@property (nonatomic,copy) NSString * accessoryName; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * homeName; 
@property (nonatomic,copy) NSURL * roomIdentifier; 
@property (nonatomic,copy) NSString * roomName; 
@property (nonatomic,copy) NSURL * sceneIdentifier; 
@property (nonatomic,copy) NSString * sceneName; 
@property (nonatomic,copy) NSString * sceneType; 
@property (nonatomic,copy) NSURL * serviceGroupIdentifier; 
@property (nonatomic,copy) NSURL * serviceIdentifier; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSURL * zoneIdentifier; 
@property (nonatomic,copy) NSString * zoneName; 
+(id)searchCriteriaFilter;
+(id)searchCriteriaFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAccessoryName:(NSString *)arg1 ;
-(void)setAttribute:(NSString *)arg1 ;
-(void)setSceneName:(NSString *)arg1 ;
-(void)setServiceGroupIdentifier:(NSURL *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSURL *)arg1 ;
-(void)setEntityType:(NSString *)arg1 ;
-(NSString *)entityType;
-(NSURL *)sceneIdentifier;
-(void)setSceneIdentifier:(NSURL *)arg1 ;
-(NSURL *)serviceIdentifier;
-(NSString *)zoneName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(NSString *)roomName;
-(NSString *)homeName;
-(NSString *)attribute;
-(void)setSceneType:(NSString *)arg1 ;
-(NSString *)sceneName;
-(NSString *)sceneType;
-(NSURL *)homeIdentifier;
-(NSURL *)roomIdentifier;
-(NSURL *)accessoryIdentifier;
-(NSURL *)zoneIdentifier;
-(NSURL *)serviceGroupIdentifier;
-(NSString *)accessoryName;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(void)setRoomIdentifier:(NSURL *)arg1 ;
-(void)setAccessoryIdentifier:(NSURL *)arg1 ;
-(void)setHomeName:(NSString *)arg1 ;
-(void)setZoneIdentifier:(NSURL *)arg1 ;
@end

