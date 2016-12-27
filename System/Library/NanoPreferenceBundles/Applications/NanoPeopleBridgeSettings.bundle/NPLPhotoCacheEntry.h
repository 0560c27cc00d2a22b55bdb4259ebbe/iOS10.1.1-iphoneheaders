/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPeopleBridgeSettings.bundle/NanoPeopleBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FKPerson;

@interface NPLPhotoCacheEntry : NSObject {

	NSMutableDictionary* _styleToDataDictionary;
	FKPerson* _person;

}

@property (nonatomic,retain) FKPerson * person;              //@synthesize person=_person - In the implementation block
-(void)evictPhotoForStyle:(long long)arg1 ;
-(id)_createDataIfNecessaryForStyle:(long long)arg1 ;
-(void)setPhoto:(id)arg1 forStyle:(long long)arg2 ;
-(void)willUpdateForStyle:(long long)arg1 ;
-(void)evictPhotosForAllStyles;
-(id)cachedStyles;
-(id)photoForStyle:(long long)arg1 ;
-(unsigned long long)stateForStyle:(long long)arg1 ;
-(id)init;
-(id)description;
-(void)setPerson:(FKPerson *)arg1 ;
-(FKPerson *)person;
@end

