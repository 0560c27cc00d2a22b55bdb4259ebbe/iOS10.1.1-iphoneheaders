/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSArray;

@interface HMApplicationData : NSObject {

	NSMutableDictionary* _applicationData;
	NSSet* _allowedObjectClasses;

}

@property (nonatomic,retain) NSMutableDictionary * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSSet * allowedObjectClasses;                       //@synthesize allowedObjectClasses=_allowedObjectClasses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,copy,readonly) NSArray * allValues; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)dictionary;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allKeys;
-(NSArray *)allValues;
-(id)dictionaryRepresentation;
-(void)setApplicationData:(NSMutableDictionary *)arg1 ;
-(id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2 ;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(BOOL)isAllowedClassForObject:(id)arg1 ;
-(NSSet *)allowedObjectClasses;
-(void)setAllowedObjectClasses:(NSSet *)arg1 ;
-(NSMutableDictionary *)applicationData;
@end

