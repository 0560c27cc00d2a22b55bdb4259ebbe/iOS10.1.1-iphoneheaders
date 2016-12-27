/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioHistoryCategory.h>

@class NSString, NSArray;

@interface RadioMutableHistoryCategory : RadioHistoryCategory

@property (nonatomic,copy) NSString * categoryDescription; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (assign,nonatomic) long long type; 
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setCategoryDescription:(NSString *)arg1 ;
@end

