/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/WeatherPreferencesPersistence.h>

@class NSUserDefaults, NSString;

@interface WeatherUserDefaults : NSObject <WeatherPreferencesPersistence> {

	NSUserDefaults* _userDefaults;

}

@property (retain) NSUserDefaults * userDefaults;                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)initWithUserDefaults:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
@end

