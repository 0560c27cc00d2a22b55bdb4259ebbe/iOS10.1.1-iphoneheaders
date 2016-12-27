/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioStationTreeNode.h>

@class RadioArtworkCollection, NSArray, NSString, NSDictionary;

@interface RadioMutableStationTreeNode : RadioStationTreeNode

@property (nonatomic,copy) RadioArtworkCollection * artworkCollection; 
@property (assign,nonatomic) long long childNodeLoadingStyle; 
@property (nonatomic,copy) NSArray * childNodes; 
@property (assign,nonatomic) long long displayStyle; 
@property (assign,nonatomic) BOOL hasAdditionalChildNodes; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long nodeID; 
@property (nonatomic,copy) NSDictionary * stationDictionary; 
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayStyle:(long long)arg1 ;
-(void)setChildNodes:(NSArray *)arg1 ;
-(void)setChildNodeLoadingStyle:(long long)arg1 ;
-(void)setHasAdditionalChildNodes:(BOOL)arg1 ;
-(void)setNodeID:(long long)arg1 ;
-(void)setStationDictionary:(NSDictionary *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
@end

