/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSString;

@interface SASettingAppearanceEntity : SASettingEntity

@property (nonatomic,copy) NSString * previousValue; 
@property (nonatomic,copy) NSString * value; 
+(id)appearanceEntity;
+(id)appearanceEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)previousValue;
-(void)setPreviousValue:(NSString *)arg1 ;
@end

